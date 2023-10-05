#include <iostream>

using namespace std;

int main() {

    double x, y;

    cout << "Digite o valor de x e depois o de y: ";
    cin >> x >> y;

    string quadrante = (x > 0) ? ((y > 0) ? "Primeiro quadrante" : 
    (y < 0) ? "Quarto quadrante" : "Sobre o eixo x") :
    (x < 0) ? ((y > 0) ? "Segundo quadrante" : (y < 0) ? "Terceiro quadrante" : "Sobre o eixo x") :
    (y == 0) ? "Sobre o eixo x" : (x == 0) ? "Sobre o eixo y" : "Origem";
  
    cout << "O ponto esta no " << quadrante << endl;

return 0;
}