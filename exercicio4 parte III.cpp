#include <iostream>

using namespace std;

int main() {
    double x, y;

    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    int quadrante = (x > 0) ? ((y > 0) ? 1 : ((y < 0) ? 4 : 0)) 
    : ((x < 0) ? ((y > 0) ? 2 : ((y < 0) ? 3 : 0)) : ((y != 0) ? 6 : 0));

    switch (quadrante) {
        case 1:
            cout << "PRIMEIRO quadrante." << endl;
            break;
        case 2:
            cout << "SEGUNDO quadrante." << endl;
            break;
        case 3:
            cout << "TERCEIRO quadrante." << endl;
            break;
        case 4:
            cout << "QUARTO quadrante." << endl;
            break;
        case 6:
            cout << "ORIGEM." << endl;
            break;
        case 0:
            cout << "UM DOS EIXOS." << endl;
            break;
        default:
            cout << "Entrada inválida." << endl;
            break;
    }

    return 0;
}
