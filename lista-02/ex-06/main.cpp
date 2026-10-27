#include <iostream>

using namespace std;

int main() {
    double minutos;
    double segundos;

    cout << "Informe a duracao em minutos: ";
    cin >> minutos;

    segundos = minutos * 60;

    cout << "A duracao corresponde a " << segundos << " segundos." << endl;

    return 0;
}
