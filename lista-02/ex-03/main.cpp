#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int quantidadePaes;
    int quantidadeBroas;

    double valorPaes;
    double valorBroas;
    double total;

    cout << "Informe a quantidade de paes vendidos: ";
    cin >> quantidadePaes;

    cout << "Informe a quantidade de broas vendidas: ";
    cin >> quantidadeBroas;

    valorPaes = quantidadePaes * 0.14;
    valorBroas = quantidadeBroas * 1.50;

    total = valorPaes + valorBroas;

    cout << fixed << setprecision(2);
    cout << "O total arrecadado foi de " << total << " euros." << endl;

    return 0;
}