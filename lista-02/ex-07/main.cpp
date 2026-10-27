#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double valorCompra;
    double desconto;
    double valorFinal;

    cout << "Informe o valor total da compra: ";
    cin >> valorCompra;

    desconto = valorCompra * 0.15;
    valorFinal = valorCompra - desconto;

    cout << fixed << setprecision(2);

    cout << "O desconto e de " << desconto << " euros." << endl;

    cout << "O valor final a pagar e de " << valorFinal << " euros." << endl;

    return 0;
}
