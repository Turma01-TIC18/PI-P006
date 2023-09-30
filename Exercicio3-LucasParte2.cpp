#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    
    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;


    cout << ((num1 > num2) ? num1 : num2);
    cout << " eh maior." << endl;

   
    cout << ((num1 == num2) ? "Estes numeros sao iguais\n" : "");

    
    int maior = (num1 > num2) ? num1 : num2;
    if (maior % 2 == 0) {
        cout << "O maior valor (" << maior << ") e par." << endl;
    } else {
        cout << "O maior valor (" << maior << ") e impar." << endl;
    }

    return 0;
}
