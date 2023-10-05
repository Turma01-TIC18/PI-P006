#include <iostream>

using namespace std;

int main (){

    double x, y, z;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o valor de y: ");
    scanf("%lf", &y);

    printf("Os valores digitados sao: x = %lf, y = %lf\n", x, y);

    z = x + y;

    cout << "A soma dos valores eh igual a: " << z << endl;

    z = (( x + y)/2);

    cout << "A media dos valores eh igual a: " << z << endl;

    z = x * y;

    cout << "O produto dos valores eh igual a: " << z << endl;

    z = (x > y) ? x : y;
    cout << "O maior valor entre os numeros eh: " << z << endl;

    z = (x < y) ? x : y;
    cout << "O menor valor entre os numero eh: " << z << endl;


return 0;
}