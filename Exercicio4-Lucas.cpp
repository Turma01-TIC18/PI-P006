#include <iostream>

using namespace std;

int main() {
    double x, y, z;

    
    cout << "Digite o primeiro número: ";
    cin >> x;
    cout << "Digite o segundo número: ";
    cin >> y;

    
    z = x + y;
    cout << "A soma de x e y é: " << z << endl;

    
    z = (x + y) / 2;
    cout << "A média de x e y é: " << z << endl;

    
    z = x * y;
    cout << "O produto de x e y é: " << z << endl;

    
    z = (x > y) ? x : y;
    cout << "O maior valor entre x e y é: " << z << endl;

    
    z = (x < y) ? x : y;
    cout << "O menor valor entre x e y é: " << z << endl;

    return 0;
}
