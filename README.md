# omarket-qt
Sistema para pequenos comerciantes

#Preparação do banco de dados
sudo su postgres -c 'psql'
create user omarket; ou create user myuser with encrypted password 'senha';
create database o_market owner omarket;
\q
sudo su postgres -c 'psql -d o_market'
CREATE EXTENSION IF NOT EXISTS "uuid-ossp";
CREATE EXTENSION IF NOT EXISTS "pgcrypto";
