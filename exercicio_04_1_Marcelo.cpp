#include <iostream>

using namespace std;

int main() {
    double x, y, z;

    cout << "Informe o primeiro número: ";
    cin >> x;

    cout << "Informe  o segundo número: ";
    cin >> y;

    cout << " " << endl;

    z = x + y;
    cout << "Soma de x e y: " << z << endl;

    z = (x + y) / 2.0;
    cout << "Média de x e y: " << z << endl;

    z = x * y;
    cout << "Produto de x e y: " << z << endl;

    z = (x > y) ? x : y;
    cout << "Maior valor entre x e y: " << z << endl;

    z = (x < y) ? x : y;
    cout << "Menor valor entre x e y: " << z << endl;

    return 0;
}
