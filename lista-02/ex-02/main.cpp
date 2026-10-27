#include <iostream>

using namespace std;

int main() {
    int quantidadeCavalos;
    int quantidadeFerraduras;

    cout << "Informe a quantidade de cavalos: ";
    cin >> quantidadeCavalos;

    quantidadeFerraduras = quantidadeCavalos * 4;

    cout << "Serão necessarias " << quantidadeFerraduras << " ferraduras." << endl;

    return 0;
}