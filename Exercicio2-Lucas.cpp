#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    
    c = 4 * a + b / 3 - 5;
    cout << "Resultado da expressao 4 * a + b / 3 - 5: " << c << endl;

    
    c = 4 * (a + b) / (3 - 5);
    cout << "Resultado da expressao 4 * (a + b) / (3 - 5): " << c << endl;

    /* Os resultados são diferentes porque a ordem de avaliação dos operadores
     em C++ segue as regras da matemática. Na primeira expressão, a divisão (b / 3)
     é realizada antes de somar o resultado com 4 * a. Na segunda expressão,
     a soma (a + b) é realizada antes de multiplicar o resultado por 4 e dividir
     pelo resultado de (3 - 5). */

    
    c = 4 * a + b / (3 - 5);
    cout << "Resultado da variacao da expressao: 4 * a + b / (3 - 5): " << c << endl;

    
    c = a * a + 2 * b + c;

    
    cout << "Resultado da expressao a^2 + 2 * b + c: " << c << endl;

    return 0;
}
