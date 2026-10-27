#include <iomanip>
#include <iostream>
#include <limits>
#include <numbers>

using namespace std;

int main() {
    int quantidadeCamisetas;
    int quantidadeCalcas;
    int quantidadeCintos;

    float valorCamisetas;
    float valorCalcas;
    float valorCintos;

    double valorTotal;
    double desconto;
    double valorFinal;

    cout << "Informe a quantidade de camisetas: ";
    cin >> quantidadeCamisetas;

    cout << "Informe a quantidade de calcas: ";
    cin >> quantidadeCalcas;

    cout << "Informe a quantidade de cintos: ";
    cin >> quantidadeCintos;

    valorCamisetas = quantidadeCamisetas * 10.00;
    valorCalcas = quantidadeCalcas * 45.00;
    valorCintos = quantidadeCintos * 15.00;

    valorTotal = valorCamisetas + valorCalcas + valorCintos;

    desconto = valorTotal * 0.10;

    valorFinal = valorTotal - desconto;

    cout << fixed << setprecision(2);

    cout << "O valor total sem desconto e de " << valorTotal << " euros." << endl;

    cout << "O desconto e de " << desconto << " euros." << endl;

    cout << "O valor final a pagar e de " << valorFinal << " euros." << endl;

    return 0;
}
