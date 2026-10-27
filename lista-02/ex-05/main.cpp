#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double alturaCentimetros;
    double alturaMetros;

    cout << "Informe a altura em centimetros: ";
    cin >> alturaCentimetros;

    alturaMetros = alturaCentimetros / 100;

    cout << fixed << setprecision(2);
    cout << "A altura convertida e "
         << alturaMetros << " metros." << endl;

    return 0;
}
