#include <iostream>
using namespace std;

int main() {
    int dia;
    
    cout << "Ingrese un numero (1-7): ";
    cin >> dia;
    
    if (dia == 1)
        cout << "Domingo" << endl;
    else if (dia == 2)
        cout << "Lunes" << endl;
    else if (dia == 3)
        cout << "Martes" << endl;
    else if (dia == 4)
        cout << "Miercoles" << endl;
    else if (dia == 5)
        cout << "Jueves" << endl;
    else if (dia == 6)
        cout << "Viernes" << endl;
    else if (dia == 7)
        cout << "Sabado" << endl;
    else
        cout << "Numero invalido" << endl;
    
    return 0;
}