// lucy.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <string>
#include <iostream>
#include <cmath>
#include<cstdlib>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include<vector>
#include<array>
#include<string>
using namespace std;
void pausa();
int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cout << "CONVERSIONES" << endl;
		cout << "\t1.- Binario-Decimal" << endl;
		cout << "\t2.- Decimal-Binario" << endl;
		cout << "\t3.- Binario-Octal" << endl;
		cout << "\t4.- Binario-Hexadecimal" << endl;
		cout << "\t5.- Texto-Binario" << endl;
		cout << "\t6.- Salir" << endl;
		cout << "Elige una opcion: " << endl;
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			cout << "Has elejido Binario-Decimal. \n";
			{
				int exp, digito;
				double binario, decimal;
				cout << "Introduce el numero binario: ";
				cin >> binario;
				exp = 0;
				decimal = 0;
				while (((int)(binario / 10)) != 0)
				{
					digito = (int)binario % 10;
					decimal = decimal + digito * pow(2.0, exp);
					exp++;
					binario = (int)(binario / 10);
				}
				decimal = decimal + binario * pow(2.0, exp);
				cout << endl << "El Decimal es: " << decimal << endl;
			}
			pausa();
			break;
		case '2':
			system("cls");
			cout << "Has elejido Decimal-Binario. \n";
			{
				int numero, exp, digito;
				double binario;
				cout << "Introduce numero: ";
				cin >> numero;
				exp = 0;
				binario = 0;
				while (numero / 2 != 0)
				{
					digito = numero % 2;
					binario = binario + digito * pow(10.0, exp);
					exp++;
					numero = numero / 2;
				}
				binario = binario + numero * pow(10.0, exp);
				cout << fixed << setprecision(0);
				cout << "binario: " << binario << endl;
			}
			pausa();
			break;
		case '3':
			system("cls");
			cout << "Has elejido Binario-Octal. \n";
			{
				int par; string resus, repu;
				vector <string> bina;
				vector <string> resul;
				cout << "¿Cuantos grupos de 3 digitos tiene tu codigo?: ";
				cin >> par;
				for (int i = 0; i < par; i++) {
					cout << i + 1 << ": " << "Ingresa 3 digitos de tu codigo: ";
					cin >> repu;
					bina.push_back(repu);
					if (bina[i] == "000") {
						resul.push_back("0");
					}
					if (bina[i] == "001") {
						resul.push_back("1");
					}
					if (bina[i] == "010") {
						resul.push_back("2");
					}
					if (bina[i] == "011") {
						resul.push_back("3");
					}

					if (bina[i] == "100") {
						resul.push_back("4");
					}
					if (bina[i] == "101") {
						resul.push_back("5");
					}
					if (bina[i] == "110") {
						resul.push_back("6");
					}

					if (bina[i] == "111") {
						resul.push_back("7");
					}
					resus = resus + resul[i];
				}
				cout << " El codigo Octal es: " << resus << endl;
			}
			pausa();
			break;
		case '4':
			system("cls");
			cout << "Has elejido Binario-Hexadecimal. \n"; {
				int par; string resus, repu;
				vector <string> bina;
				vector <string> resul;
				cout << "¿Cuantos grupos de 4 digitos tiene tu codigo?: ";
				cin >> par;
				for (int i = 0; i < par; i++) {
					cout << i + 1 << ": " << "Ingresa 4 digitos de tu codigo: ";
					cin >> repu;
					bina.push_back(repu);
					if (bina[i] == "0000") {
						resul.push_back("0");
					}
					if (bina[i] == "0001") {
						resul.push_back("1");
					}
					if (bina[i] == "0010") {
						resul.push_back("2");
					}
					if (bina[i] == "0011") {
						resul.push_back("3");
					}
					if (bina[i] == "0100") {
						resul.push_back("4");
					}
					if (bina[i] == "0101") {
						resul.push_back("5");
					}
					if (bina[i] == "0110") {
						resul.push_back("6");
					}
					if (bina[i] == "0111") {
						resul.push_back("7");
					}
					if (bina[i] == "1000") {
						resul.push_back("8");
					}
					if (bina[i] == "1001") {
						resul.push_back("9");
					}
					if (bina[i] == "1010") {
						resul.push_back("A");
					}
					if (bina[i] == "1011") {
						resul.push_back("B");
					}
					if (bina[i] == "1100") {
						resul.push_back("C");
					}
					if (bina[i] == "1101") {
						resul.push_back("D");
					}
					if (bina[i] == "1110") {
						resul.push_back("E");
					}
					if (bina[i] == "1111") {
						resul.push_back("F");
					}
					resus = resus + resul[i];
				}
				cout << " El codigo Hexadecimal es:\n " << resus << endl;
			}
			pausa();
			break;
		case '5':
			system("cls");
			cout << "Has elejido Texto-Binario. \n";

			{
				char texto[300];
				int contador = 0, num, resul, cerosunos[20], i;
				int clrscr();
				printf("introduzca un texto para convertirlo a codigo binario:\n");
				cin >> (texto);
				while (contador < strlen(texto))
				{
					i = 1;
					num = texto[contador];
					while (num > 0)
					{
						resul = num % 2;
						if (resul == 0)
						{
							cerosunos[i] = 0;
							i = i + 1;
						}
						else
						{
							cerosunos[i] = 1;
							i = i + 1;
							num = num - 1;
						}
						num = num / 2;
					}
					i = i - 1;
					while (i > 0)
					{
						printf("%i", cerosunos[i]);
						i = i - 1;
					}
					printf(" ");
					contador = contador + 1;
				}
			}
			pausa();
			break;
		case '6':
			bandera = true;
			// exit(1);
			break;
		default:
			system("cls");
			cout << "Opcion no valida. \a\n";
			pausa();
			break;

		}

	} while (bandera != true);
	return 0;

}
//Desarrollamos la función
void pausa()
{
	cout << "Pulsa una tecla para continuar... ";
	getwchar();
	getwchar();
}