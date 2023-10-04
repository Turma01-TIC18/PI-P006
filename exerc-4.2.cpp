#include <iostream>

using namespace std;

int main() {
    double raio, diametro, circ, area;

    cout << "Digite o raio do circulo: ";
    cin >> raio;

    // Diâmetro
    diametro = 2 * raio;
    cout << "O diametro do circulo eh: " << diametro << endl;

    // Circunferência
    circ = 2 * 3.14 * raio;
    cout << "A circunferencia do circulo eh: " << circ << endl;

    // Área
    area = 3.14 * (raio * raio);
    cout << "A area do circulo eh: " << area << endl;

    return 0;
}