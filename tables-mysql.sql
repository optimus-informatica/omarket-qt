drop table if exists usuarios;
create table usuarios (
	usuarioid bigint primary key auto_increment,
    usuario varchar(25) not null,
    senha char(41) not null,
    nome varchar(100) not null,
    unique (usuario)
);
insert into usuarios (usuario, senha, nome) values ('market', password('market'), 'Sistema');

drop table if exists usuarios_perms;
create table usuarios_perms (
	usuarioid bigint not null,
	isadmin boolean default false,
   iscaixa boolean default true,
   isfinanceiro boolean default false,
   isystem boolean default false,
	isrh boolean default false,
   unique (usuarioid)
);
insert into usuarios_perms (usuarioid, isadmin, iscaixa, isfinanceiro, isystem, isrh) values (1, true, true, true, true, true);

drop table if exists produtos;
create table produtos (
	produtoid bigint not null primary key auto_increment,
	produto varchar(25) not null,
   descricao varchar(100) not null,
   medidaid int not null,
   tipoid int not null,
   barcode varchar(25),
   registro timestamp default current_timestamp,
   valor decimal(20,2),
   custo decimal(20,2),
   estoque decimal(20,2),
   unique (produto, medidaid, tipoid),
   unique (barcode)
);

create table produtos_tipos (
	tipoid int primary key auto_increment,
   tipo varchar(10) not null,
   registro timestamp default current_timestamp,
   unique(tipo)
);

create table produtos_medidas (
	medidaid int primary key auto_increment,
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
    date_format(p.registro, '%d/%m/%y %h:%i:%s') as f_date,
    p.registro
from
	produtos p
inner join produtos_tipos using(tipoid)
inner join produtos_medidas using(medidaid);