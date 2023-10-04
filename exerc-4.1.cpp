#include <iostream>

using namespace std;

int main() {
    double x, y, z;

    cout << "Digite o valor de x: ";
    cin >> x;
    
    cout << "Digite o valor de y: ";
    cin >> y;

    z = x + y;
    cout << "A soma de x e y é: " << z << endl;

    z = (x + y) / 2;
    cout << "A média de x e y é: " << z << endl;

    z = x * y;
    cout << "O produto de x e y é: " << z << endl;
    
    //Maior valor
    if (x > y) {
        z = x;
        cout << "O maior valor entre x e y é: " << z << endl;
    } 
    else {
        z = y;
        cout << "O maior valor entre x e y é: " << z << endl;
    }

    // Menor valor
    if (x < y) {
        z = x;
        cout << "O menor valor entre x e y é: " << z << endl;
    }
    else {
        z = y;
        cout << "O menor valor entre x e y é: " << z << endl;
    }

    return 0;
}