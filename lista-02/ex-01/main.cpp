#include <iostream>

using namespace std;

int main() {
    double comprimento;
    double largura;
    double area;

    cout << "Informe o comprimento do terreno, em metros: ";
    cin >> comprimento;

    cout << "Informe a largura do terreno, em metros: ";
    cin >> largura;

    area = comprimento * largura;

    cout << "A area do terreno e " << area << " metros quadrados." << endl;

    return 0;
}
