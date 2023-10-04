#include <iostream>

using namespace std;

int main() {
    double x, y;
    string quadrante;

    cout << "Digite o valor de x: ";
    cin >> x;
    
    cout << "Digite o valor de y: ";
    cin >> y;

    // Determinar em qual quadrante está
    quadrante = (x > 0) ? ((y > 0) ? "primeiro quadrante" : "quarto quadrante") : ((y > 0) ? "segundo quadrante" : "terceiro quadrante");

    // Verificar se o ponto está sobre um dos eixos
    if (x == 0 || y == 0) {
        quadrante = "sobre um dos eixos";
    }

    // Imprimir o resultado
    cout << "O ponto (" << x << ", " << y << ") esta no " << quadrante << "." << endl;

    return 0;
}