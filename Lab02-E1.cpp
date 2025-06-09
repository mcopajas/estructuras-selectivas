#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, promedio;
    cout << "Ingrese tres calificaciones: ";
    cin >> nota1 >> nota2 >> nota3;
    
    promedio = (nota1 + nota2 + nota3) / 3;
    
    if (promedio >= 70)
        cout << "Aprueba" << endl;
    else
        cout << "Reprueba" << endl;
    
    return 0;
}