#include <iostream>
using namespace std;

int main() {
    float x, gx;
    
    cout << "Ingrese el valor de x: ";
    cin >> x;
    
    if (x > 8)
        gx = 2 * x;
    else if (x > 0 && x <= 8)
        gx = x - 5;
    else
        gx = x * x;
    
    cout << "g(x) = " << gx << endl;
    
    return 0;
}