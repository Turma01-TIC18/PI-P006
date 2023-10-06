#include <iostream>

using namespace std;

int main() {
    double x, y, z;

    cout << "Digite X: ";
    cin >> x;
    cout << "Digite Y: ";
    cin >> y;

    z = x + y;
    cout << "A SOMA entre x e y: " << z << endl;

    z = (x + y) / 2;
    cout << "A MÉDIA entre x e y: " << z << endl;
    
    z = x * y;
    cout << "O PRODUTO entre x e y: " << z << endl;
    
    z = (x > y) ? x : y;
    cout << "O MAIOR valor entre x e y: " << z << endl;
    
    z = (x < y) ? x : y;
    cout << "O MENOR valor entre x e y: " << z << endl;

    return 0;
}
