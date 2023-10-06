#include <iostream>
#include <cmath>

using namespace std;


int main() {
    double raio;

    cout << "Informe o raio do círculo: ";
    cin >> raio;
    cout << "" << endl;

    double diametro = 2 * raio;
    double circunferencia = 2 * M_PI * raio; 
    double area = M_PI * pow(raio, 2);

    cout << "Diâmetro do círculo: " << diametro << endl;
    cout << "Circunferência (perímetro) do círculo: " << circunferencia << endl;
    cout << "Área do círculo: " << area << endl;
    cout << "" << endl;
    
    return 0;
}
