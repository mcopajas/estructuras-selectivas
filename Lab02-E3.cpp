#include <iostream>
using namespace std;

int main() {
    int camisas;
    float precio, total, descuento;
    
    cout << "Ingrese el numero de camisas: ";
    cin >> camisas;
    cout << "Ingrese el precio por camisa: ";
    cin >> precio;
    
    total = camisas * precio;
    
    if (camisas >= 3)
        descuento = total * 0.2;
    else
        descuento = total * 0.1;
    
    total = total - descuento;
    
    cout << "Total a pagar: " << total << endl;
    return 0;
}