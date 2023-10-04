#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    
    cout << "Favor digitar o primeiro numero inteiro: ";
    cin >> n1;
    cout << "Favor digitar o segundo numero inteiro: ";
    cin >> n2;

    cout << endl;

    cout << (n1 > n2 ? n1 : n2) << " é o maior número.";
    
   
    cout << (n1 == n2 ? "\nOs números digitados sao iguais\n" : "");

    cout << "\n-----------------\n";
    
    int numero = n1 > n2 ? n1 : n2;
    if (numero % 2 == 0) {
        cout << numero << " É par." << endl;
    } else {
        cout << numero << " É impar." << endl;
    }

    return 0;
}