//
//  main.cpp
//  How1
//
//  Created by Thales Fernandes on 15/04/22.
//

#include <iostream>
#include <locale.h>
#include <stdlib.h>    //bibliotecas para funcionamento do c�digo

using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese"); //corrigir acentos
	int escolha = 0;//declarando variavel chamada escolha
	bool executa = true;
	int bin[8]; //definindo um valor inteiro de 8 posi��es a ser utilizado no calculo decimal [1]
	int decimal; //variavel
	while (executa) //enquanto executa
	{
	//escrevendo na tela este bloco
		cout <<"********************* " << endl;
		cout <<"CONVERSOR DE N�MEROS"   << endl;
		cout <<"********************* " << endl;
		cout << endl; //quebra de linha
		cout <<"ESCOLHA UMA OP��O:" << endl;
		cout << endl; //quebra de linha
		cout <<"[1 - DECIMAL PAPA BIN�RIO] " << endl;
		cout <<"[2 - BIN�RIO PARA DECIMAL]" << endl;
		cout <<"[0 - SAIR] " << endl;
		cout << endl; //quebra de linha

		cin >> escolha; //pegando o numero escolhido das opcoes acima e tratando de acordo com a formula abaixo escrita com o switch
		switch (escolha)
		{
			case 1: //aqui ele identifica que � o numero 1, e faz o calculo abaixo
				cout << endl; //quebra de linha
				cout << "Digite o valor em decimal: " << endl;
				cout << endl; //quebra de linha
				cin >> decimal;
				cout << endl; //quebra de linha
				cout << "O valor em decimal �:" << endl;
				cout << endl; //quebra de linha
				for (int i = 7; i >= 0; i--)
				{
					if (decimal % 2 == 0)
					{
						bin[i] = 0;
					}
					else
					{
						bin[i] = 1;
					}
					decimal = decimal / 2;
				}
				for (int i=0; i<8; i++) {
					cout << bin[i];
				}
				cout << endl; //quebra de linha
				cout << endl; //quebra de linha

				break;

			case 2:
				cout << endl; //quebra de linha
				cout << "Digite o valor em binario: " << endl;



				break;

			case 0:

				executa = false;
				break;

			default:
				cout << "Digite um valor v�lido." << endl;
				break;
		}
	}

}
