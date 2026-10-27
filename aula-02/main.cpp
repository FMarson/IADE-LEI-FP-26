#include <iostream>
#include <string>

using namespace std;
// namespace: local onde se encontra
// Ler: cin
// Escrever: cout

// Números:
// int
// double

// Texto:
// string

/*
Operadores aritméticos
- + * / %
*/

/* Operadores de atribuição

 =

*/
/*
int main()
{
    double preco = 0.0;
    int valor1, valor2 = 0, valor3;
    int posicao;

    valor1 = 15;

    //std::cout << "Teste";
    cout << "Teste";
    return 0;
}
*/

/*
1)	A agência imobiliária Imóbilis vende apenas terrenos retangulares.
Desenvolva um algoritmo que leia as dimensões de um terreno, em metros, calcule e apresente a respetiva
área em metros quadrados.
*/

int main()
{
    double largura, profundidade, area;

    cout << "Informe a largura: ";
    cin >> largura;

    cout << "Informe a profundidade: ";
    cin >> profundidade;

    area = largura * profundidade;

    cout <<  "A area do terreno eh " <<  area << " metros quadrados." << endl;

    return 0;
}