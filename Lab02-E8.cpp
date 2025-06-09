#include <iostream>
#include <string>
using namespace std;

int main() {
    string respuesta;
    
    cout << "Colon descubrio America? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") {
        cout << "Perdio el juego." << endl;
        return 0;
    }
    
    cout << "El lago Titicaca es el lago navegable mas alto del mundo? (si/no): ";
    cin >> respuesta;
    if (respuesta != "si") {
        cout << "Perdio el juego." << endl;
        return 0;
    }
    
    cout << "El espanol es el unico idioma oficial de Peru? (si/no): ";
    cin >> respuesta;
    if (respuesta != "no") {
        cout << "Perdio el juego." << endl;
        return 0;
    }
    
    cout << "Gano el juego!" << endl;
    return 0;
}