#include "CadastroDados.h"

PERFUMARIA::PERFUMARIA()
{
	REFERENCIA = "NULL";
	NOME_PRODUTO = "NULL";
	TIPO_PRODUTO = "NULL";
	MARCA = "NULL";
	PRECO = 0.0;
	REGISTRO_ANVISA = "NULL";
	QUANTIDADE_ESTOQUE = 0;
}

int PERFUMARIA::GET_QNTD_ESTOQUE()
{
	return QUANTIDADE_ESTOQUE;
}

string PERFUMARIA::GET_REFERENCIA()
{
	return REFERENCIA;
}
string PERFUMARIA::GET_NOME_PRODUTO()
{
	return NOME_PRODUTO;
}

string PERFUMARIA::GET_TIPO_PRODUTO()
{
	return TIPO_PRODUTO;
}
string PERFUMARIA::GET_MARCA()
{
	return MARCA;
}
float PERFUMARIA::GET_PRECO()
{
	return PRECO;
}
string PERFUMARIA::GET_REGISTRO_ANVISA()
{
	return REGISTRO_ANVISA;
}


void PERFUMARIA::SET_QNTD_ESTOQUE(int qntd)
{
	QUANTIDADE_ESTOQUE = qntd;
}

void PERFUMARIA::SET_REFERENCIA(string referencia)
{
	REFERENCIA = referencia;
}

void PERFUMARIA::SET_NOME_PRODUTO(string nome)
{
	NOME_PRODUTO = nome;
}
void PERFUMARIA::SET_TIPO_PRODUTO(string tipo)
{
	TIPO_PRODUTO = tipo;
}
void PERFUMARIA::SET_MARCA(string marca)
{
	MARCA = marca;
}
void PERFUMARIA::SET_PRECO(float price)
{
	PRECO = price;
}
void PERFUMARIA::SET_REGISTRO_ANVISA(string anvisa)
{
	REGISTRO_ANVISA = anvisa;
}
