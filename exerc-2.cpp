#include <iostream>

using namespace std;

int main (void){
    int a, b, c;
    cout << "Digite o primeiro numero(apenas inteiro): ";
    cin >> a;
    cout << "Digite segundo numero(apenas inteiro): ";
    cin >> b;

    c = 4 * a + b / 3 - 5;
    cout << "4 * a + b / 3 - 5 = " << c << endl;

    c = 4 * (a + b) / (3 - 5);
    cout << "4 * (a + b) / (3 - 5) = " << c << endl;

    //O resultado é diferente, devido a inclusão dos parenteses que muda a ordem de prioridade 


    //Outro exemplo

    c = (4 * a) + b / (3 - 5);
    cout << "(4 * a) + b / (3 - 5) = " << c << endl;

    int d;
    d = (a * a) + 2 * b + c;
    cout << "(a*a) + 2 * b + c = " << d << endl;

    return 0;
}