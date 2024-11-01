/*
  Script de Banco de Dados - Aula prática 2 
  Descrição: Este script abrange a criação e manipulação de tabelas, inserção e atualização de registros,
  uso de chaves estrangeiras e constraints, operações com datas e exclusão de dados e banco.
  O banco de dados simula uma estrutura de produtos e categorias, incluindo tabelas para registrar eventos.
  
  Funcionalidades:
  - Criação do banco de dados "ufabc" e tabelas "categoria", "tbl_produto" e "tbl_ocorrencia".
  - Definição de relacionamentos e constraints com `on delete cascade`.
  - Inserção, atualização, visualização e exclusão de dados.
  - Operações com data e hora.
  
  DATA: 30/10/2024
*/

create database ufabc;
use ufabc;
create table categoria(
id int unsigned not null auto_increment primary key, 
nome varchar(100) not null
);

create table tbl_produto(
codigo int unsigned not null auto_increment, 
nome varchar(200) not null,
link_foto varchar(255) not null,
id_categoria int unsigned not null,
constraint pk_produto primary key(codigo),
constraint fk_categoria foreign key(id_categoria) references categoria(id) #identifica o meu campo e que tabela e campo ela é referenciada
on delete cascade on update cascade
);

show tables; #mostra as tabelas no banco
desc categoria; #descreve os campos de uma tabela
desc *; #!!!!!consigo descrever os campo de todas tabelas sem eu precisar ficar fazendo linha por linha?!!!!!

#inserindo dados
insert into categoria (nome) values ('Informatica'); #especifica a tab e os campos, precisa de uma linha para cada inserçao de dados
insert into categoria values (null, 'Cama Mesa e Banho'); #especifica nada, passa null porque o id é auto increment
insert into categoria values (null, 'Vestuario'), (null, 'Ferramentas'); #especifica nada e passa null porqe o id é auto increment pra varios ao mesmo tempo

#vizualizar tabelas
select id, nome from categoria;

#inserir dados na tabela de produtos
insert into tbl_produto values(null, 'Computador', 'img.jpg', 1);
insert into tbl_produto values(null, 'Mouse', 'mouse.jpg', 1);
insert into tbl_produto values(null, 'Monitor', 'monitor.jpg', 1);

insert into tbl_produto values(null, 'Fronha', 'fronha.jpg', 2);
insert into tbl_produto values(null, 'Cobertor', 'cobertor.jpg', 2);
insert into tbl_produto values(null, 'Lençol', 'lencol.jpg', 2);

insert into tbl_produto values(null, 'Tenis', 'tenis.jpg', 3);
insert into tbl_produto values(null, 'Calca', 'calca.jpg', 3);
insert into tbl_produto values(null, 'Camisa', 'camisa.jpg', 3);

insert into tbl_produto values(null, 'Martelo', 'martelo.jpg', 4);
insert into tbl_produto values(null, 'Furadeira', 'pincel.jpg', 4);
insert into tbl_produto values(null, 'Prego', 'prego.jpg', 4);

select*from tbl_produto;

#tentar inserir algum dado com uma categoria que n existe ou como null vai dar erro, no primeiro caso porque a categoria n existe e no segundo porque colocamos esse campo como obrigatorio preenchimeento
insert into tbl_produto values(null, 'Racao de gato', 'racao,jpg', '5');
insert into tbl_produto values(null, 'Racao de gato', 'racao,jpg', null);

#atualizando tabelas
update categoria set id=10 where id=1; #alterar o id para 10 onde o id for 1
select*from categoria;
select*from tbl_produto;

#remove cateforia e restriçao delete cascade
delete from categoria where id=4;
select*from categoria;
select*from tbl_produto;

#alterando tabelas
#Antes n tinhamos add uma coluna chamada preco, vamos add ela, ok?
alter table tbl_produto add column preco double not null default(0) after nome; #add colum
alter table tbl_produto change column preco preco_produto double not null default(0); #mudar nome da coluna
select*from categoria;
select*from tbl_produto;

#deletando a base
drop database ufabc;

/*DELETANDO TABELAS - CONSIDERAÇOES 
O SGBD impede de se remover uma tabela que é referenciada por outras, primeiro remova as tabelas que referenciam a tabela a ser removda e depois a tabela referenciada*/
delete from tabela where criterios;

create table tbl_produto(
codigo int unsigned not null auto_increment, 
nome varchar(200) not null,
link_foto varchar(255) not null,
id_categoria int unsigned, #pode ser null agora
constraint pk_produto primary key(codigo),
constraint fk_categoria foreign key(id_categoria) references categoria(id) #identifica o meu campo e que tabela e campo ela é referenciada
on delete set null on update no action #agora quando eu deletar n vai deixar editar em tudo, em cascata
);

#Mudando o id da categoria 1
update categoria set id = 10 where id =1; #n deixa a chave estrangeira ser alterada
delete from categoria where id =4;

select*from categoria;

#DATAS
create table tbl_ocorrencia(
num_seq int unsigned not null auto_increment primary key,
data_hora datetime not null,
descricao varchar(100)
);

select now();

insert into tbl_ocorrencia values(null, '2024-10-29 0:0:0','Inicializando sistema'); #data é em STRING em formato americado ano-mes-dia 
select str_to_date('01/11/2024 10h23m34', '%d/%m/%Y %Hh%im%s') as nova_data; #formatando datas, minutos é m; hora é h e segundo é s

#botando dados na tabela
insert into tbl_ocorrencia values(null, str_to_date('01/11/2024 10h23m34', '%d/%m/%Y %Hh%im%s'), 'Pane geral');
insert into tbl_ocorrencia values(null, now(), 'Reparando ambiente');

select*from tbl_ocorrencia;

#PEGANDO INFO DA DATA - APENAS ALGUMA COISA
select num_seq, date(data_hora), descricao from tbl_ocorrencia; #pegando apenas a data
select num_seq, time(data_hora), descricao from tbl_ocorrencia; #pegando apenas a hora
select num_seq, day(data_hora), descricao from tbl_ocorrencia; #pegando apenas dia
select num_seq, month(data_hora), descricao from tbl_ocorrencia; #pegando apenas mes
select num_seq, year(data_hora), descricao from tbl_ocorrencia; #pegando apenas ano
select num_seq, minute(data_hora), descricao from tbl_ocorrencia; #pegando apenas minutos
select num_seq, second(data_hora), descricao from tbl_ocorrencia; #pegando apenas a data

select data_format(data_hora, '%d%m%Y - %Hh%im%ss') from tbl_ocorrencia;