#include <iostream>
using namespace std;

int main() {
    int llantas;
    float precio, total;
    
    cout << "Ingrese la cantidad de llantas: ";
    cin >> llantas;
    
    if (llantas < 5)
        precio = 300;
    else if (llantas <= 10)
        precio = 250;
    else
        precio = 200;
    
    total = precio * llantas;
    
    cout << "Precio por llanta: $" << precio << endl;
    cout << "Total a pagar: $" << total << endl;
    return 0;
}