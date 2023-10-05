#include <iostream>

using namespace std;

int main(){

    int num1, num2;
    
    cout << "Digite o primeiro numero int: ";
    cin >> num1;

    cout << "Digite o segundo numero int: ";
    cin >> num2;
    
    cout << "O maior numero e: " << ((num1 > num2) ? num1 : num2) 
    << " e maior." << endl;
    
    cout << ((num1 == num2) ? "Estes numeros sao iguais." : "");
   
    int maior = (num1 > num2) ? num1 : num2;

    cout << ((maior % 2 == 0) ? "O maior valor eh par." :
    "O maior valor eh impar.") << endl;

    return 0;
}
