#include <iostream>
#include <cmath>

using namespace std;

int main (){

    double raio, diametro, perimetro, area;
    double pi = M_PI;
    
    cout << "Digite o raio da circuferencia: ";
    cin >> raio;

    diametro = 2 * raio;
    cout << "O diamentro da circuferencia eh: " << diametro << " m" << endl;

    perimetro = 2 * pi * raio;
    cout << "O perimetro da circunferencia eh: " << perimetro << " m" << endl;

    area = pi * pow(raio, 2);
    cout << "A area da circuferencia eh: " << area << " m^2 " << endl;

return 0;
}