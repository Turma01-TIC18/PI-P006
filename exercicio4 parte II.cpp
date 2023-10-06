#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double raio;

    cout << "Digite o raio do círculo: ";
    cin >> raio;
    
    double diametro = 2 * raio;
   
    double circunferencia = 2 * M_PI * raio;

    double area = M_PI * pow(raio, 2);

    cout << "Diâmetro do círculo: " << diametro << endl;
    cout << fixed << setprecision(2) << "Circunferência (perímetro) do círculo: " << circunferencia << endl;
    cout << fixed << setprecision(2) << "Área do círculo: " << area << endl;

    return 0;
}
