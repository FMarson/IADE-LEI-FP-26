#include <iostream>
#include <string>

using namespace std;

// Ler/Entrada: cin >>
// Escrever/Saída: cout <<

/* Tipos de dados
Numéricos:
int
double

Texto:
string
*/

/* Operadores aritméticos
 - + / * %
*/

/* Operador atribuição

=

*/
/*
int main()
{
    int valor;
    float temperatura1, temperatura2;
    int posicao = 0;

    valor = 10;

    cout << "Hello, World!" << endl;
    cin >> valor;

    return 0;
}
*/
/*
1)	A agência imobiliária Imóbilis vende apenas terrenos retangulares. Desenvolva um algoritmo que
 leia as dimensões de um terreno, em metros, calcule e apresente a respetiva área em metros quadrados.
*/

int main()
{
    double comprimento, largura, area;

    cout << "Informe o comprimento do terreno: ";
    cin >> comprimento;

    cout << "Informe a largura do terreno: ";
    cin >> largura;

    area = comprimento * largura;

    cout << "A area do terreno eh de " << area << " metros quadrados." << endl;

    return 0;
}