#include <iostream>
using namespace std;

int main() {
    float promedio, pension, total;
    
    cout << "Ingrese el promedio del alumno: ";
    cin >> promedio;
    cout << "Ingrese la pension educativa: ";
    cin >> pension;
    
    if (promedio >= 18)
        total = pension * 0.7; // 30% de descuento
    else
        total = pension * 1.18; // pago completo + 18% IGV
    
    cout << "Total a pagar: " << total << endl;
    return 0;
}