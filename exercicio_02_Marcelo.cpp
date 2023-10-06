#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Informe o valor de a: ";
    cin >> a;

    cout << "Informe o valor de b: ";
    cin >> b;

    cout << " " <<endl;

    c = 4 * a + b / 3 - 5;

    cout << "Resultado da primeira expressão: " << c << endl;

    c = 4 * (a + b) / (3 - 5);

    cout << "Resultado da segunda expressão: " << c << endl;

    c = a * a + 2 * b + c;

    cout << "Resultado da variação: " << c << endl;

    cout << " " << endl;

    return 0;
}
