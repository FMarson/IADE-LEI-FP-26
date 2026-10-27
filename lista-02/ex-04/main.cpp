#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double precoLitro;
    double montante;
    double litros;

    cout << "Informe o preco do combustivel por litro: ";
    cin >> precoLitro;

    cout << "Informe o montante disponivel, em euros: ";
    cin >> montante;

    litros = montante / precoLitro;

    cout << fixed << setprecision(2);
    cout << "A quantidade abastecida foi de " << litros << " litros." << endl;

    return 0;
}
