﻿drop table if exists usuarios;
create table usuarios (
    usuarioid bigserial primary key,
    usuario varchar(25) not null,
    senha char(64) not null,
    nome varchar(100) not null,
    unique (usuario)
);
insert into usuarios (usuario, senha, nome) values ('market', encode(digest('market', 'sha256'), 'hex'), 'Sistema');

drop table if exists usuarios_perms;
create table usuarios_perms (
   usuarioid bigint not null,
   isadmin boolean default false,
   iscaixa boolean default true,
   isfinanceiro boolean default false,
   issystem boolean default false,
   isrh boolean default false,
   unique (usuarioid)
);
insert into usuarios_perms (usuarioid, isadmin, iscaixa, isfinanceiro, issystem, isrh) values (1, true, true, true, true, true);

drop table if exists produtos;
create table produtos (
   produtoid bigserial primary key,
   produto varchar(25) not null,
   descricao varchar(100) not null,
   medidaid int not null,
   tipoid int not null,
   barcode varchar(25),
   registro timestamp default current_timestamp,
   valor numeric(20,2),
   custo numeric(20,2),
   estoque numeric(20,2),
   unique (produto, medidaid, tipoid),
   unique (barcode)
);

create table produtos_tipos (
   tipoid serial primary key,
   tipo varchar(10) not null,
   registro timestamp default current_timestamp,
   unique(tipo)
);

create table produtos_medidas (
    medidaid serial primary key,
    medida char(2) not null,
    descricao varchar(30) not null,
    registro timestamp default current_timestamp,
    unique (medida, descricao)
);

truncate produtos_medidas;
insert into produtos_medidas (medida, descricao) values
('CX', 'Caixa'),
('LT', 'Litro'),
('GR', 'Grama'),
('KG', 'Kilograma'),
('TN', 'Tonelada'),
('PC', 'Pacote'),
('UN', 'Unidade');

create or replace view v_produtos as select
    produtoid,
    produto,
    tipo,
    p.descricao,
    medida,
    barcode,
    valor,
    custo,
    estoque,
    to_char(p.registro, 'dd/mm/yyyy HH24:MI:SS') as f_date,
    p.registro
from
    produtos p
inner join produtos_tipos using(tipoid)
inner join produtos_medidas using(medidaid);

drop table if exists recibos;
create table recibos (
    reciboid uuid default uuid_generate_v4(),
    usuarioid bigint not null,
    s_date timestamp default current_timestamp,
    e_date timestamp,
    unique (reciboid, usuarioid)
);

drop table if exists recibos_items;
create table recibos_items (
    reciboid uuid not null,
    barcode varchar(25) not null,
    quantidade numeric(10,2) not null,
    custo numeric(10,2) not null,
    valor numeric(10,2) not null
);

create or replace view v_recibos_items as select
    produtoid,
    produto || ' ' || tipo as produto,
    medida,
    r.valor,
    quantidade,
    r.valor * quantidade as total,
    to_char(e_date, 'dd/mm/yyyy HH24:MI:SS') as f_date,
    r.reciboid
from recibos_items r
    inner join recibos using(reciboid)
    inner join produtos using(barcode)
    inner join produtos_tipos using(tipoid)
    inner join produtos_medidas using(medidaid);