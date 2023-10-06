#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Informe o primeiro número inteiro: ";
    cin >> num1;

    cout << "Informe o segundo número inteiro: ";
    cin >> num2;

    cout << " " << endl;

    cout << ((num1 > num2) ? "O primeiro número " : "O segundo número ")
              << ((num1 > num2) ? num1 : num2) << " é maior." << endl;

    cout << ((num1 == num2) ? "Estes números são iguais." : "");

    int maior = (num1 > num2) ? num1 : num2;
    cout << ((maior % 2 == 0) ? "O maior número é par." : "O maior número é ímpar.") << endl;

    cout << " " << endl;

    return 0;
}
