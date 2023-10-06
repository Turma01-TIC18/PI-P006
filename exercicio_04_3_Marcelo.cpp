#include <iostream>

using namespace std;


int main() {
    double x, y;

    cout << "Informe o valor de x: ";
    cin >> x;

    cout << "Informe o valor de y: ";
    cin >> y;

    cout << "" << endl;

    string quadrante = (x > 0 && y > 0) ? "primeiro quadrante"
                          : (x < 0 && y > 0) ? "segundo quadrante"
                          : (x < 0 && y < 0) ? "terceiro quadrante"
                          : (x > 0 && y < 0) ? "quarto quadrante"
                          : "sobre um dos eixos ou na origem";

    cout << "O ponto (" << x << ", " << y << ") está no " << quadrante << "." << endl;
    cout << "" << endl;

    return 0;
}
