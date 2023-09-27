#include <iostream>

using namespace std;

int main() {
    int a,b,c;

    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;

    c = 4 * a + b / 3 - 5;

    cout << "Resultado da expressao ==> (4 * a + b / 3 - 5) eh: " << c << endl;

    c = 4 * (a + b) / (3 - 5);

    cout << "Resultado da expressao ==> 4 * (a + b) / (3 - 5) eh: " << c << endl;

    /*
        - Na primeira expressão a multiplicação e a divisão têm prioridade sobre a adição e subtração. 
        - Na segunda expressão a prioridade são os parenteses, depois vem a multiplicação e divisão.
        - Outra variação: c = (4 * a + b) / (3 - 5).
    */

    c = (4 * a + b) / (3 - 5);

    cout << "Resultado da expressao ==> (4 * a + b) / (3 - 5) eh: " << c << endl;

    c = a * a + 2 * b + c;

    cout << "Resultado da expressao ==> a * a + 2 * b + c eh: " << c << endl;

    return 0;
}