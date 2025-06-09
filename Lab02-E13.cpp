#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    
    cout << "Ingrese las tres longitudes: ";
    cin >> a >> b >> c;
    
    if (a < b + c && a > abs(b - c) &&
        b < a + c && b > abs(a - c) &&
        c < a + b && c > abs(a - b))
        cout << "Forman un triangulo" << endl;
    else
        cout << "No forman un triangulo" << endl;
    
    return 0;
}