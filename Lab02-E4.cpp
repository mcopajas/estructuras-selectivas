#include <iostream>
using namespace std;

int main() {
    int numero;
    float compra, descuento;
    
    cout << "Ingrese el monto de la compra: ";
    cin >> compra;
    cout << "Ingrese el numero escogido: ";
    cin >> numero;
    
    if (numero < 74)
        descuento = compra * 0.15;
    else
        descuento = compra * 0.20;
    
    cout << "Dinero descontado: " << descuento << endl;
    return 0;
}