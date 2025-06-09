#include <iostream>
using namespace std;

int main() {
    int tipo;
    float credito, nuevoCredito;
    
    cout << "Ingrese el tipo de tarjeta: ";
    cin >> tipo;
    cout << "Ingrese el credito actual: ";
    cin >> credito;
    
    if (tipo == 1)
        nuevoCredito = credito * 1.25;
    else if (tipo == 2)
        nuevoCredito = credito * 1.35;
    else if (tipo == 3)
        nuevoCredito = credito * 1.40;
    else
        nuevoCredito = credito * 1.50;
    
    cout << "El nuevo credito es: " << nuevoCredito << endl;
    
    return 0;
}