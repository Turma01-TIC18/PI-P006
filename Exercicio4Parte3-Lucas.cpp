#include <iostream>

using namespace std;

int main() {
    double x, y;

    
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    // Determinar em qual quadrante o ponto se encontra usando o operador condicional
    int quadrante = (x > 0) ? ((y > 0) ? 1 : 4) : ((y > 0) ? 2 : 3);

    // Imprimir o resultado
    switch (quadrante) {
        case 1:
            cout << "O ponto (" << x << ", " << y << ") está no primeiro quadrante." << endl;
            break;
        case 2:
            cout << "O ponto (" << x << ", " << y << ") está no segundo quadrante." << endl;
            break;
        case 3:
            cout << "O ponto (" << x << ", " << y << ") está no terceiro quadrante." << endl;
            break;
        case 4:
            cout << "O ponto (" << x << ", " << y << ") está no quarto quadrante." << endl;
            break;
        default:
            cout << "O ponto (" << x << ", " << y << ") está sobre um dos eixos." << endl;
    }

    return 0;
}
