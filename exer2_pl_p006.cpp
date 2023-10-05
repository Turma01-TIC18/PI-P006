#include <iostream>

using namespace std;

int main (){

    int a, b, c;
    float resultado;

    cout << "Digite o primeiro e depois o segundo numero: " ;
    cin >> a >> b;

    c = 4 * a + b / 3 - 5;

    cout << "O valor de c na primeira expressao eh: " << c << endl;

    c = (4 * a + b) / (3 - 5);

    cout << "O valor de c na segunda expressa eh: " << c << endl;
    /*na primeira expressa, o valor de b e dividido antes 
    antes da soma com o resultado de a. Na segunda situação, primeiro
    tem o resultado do dividendo e depois do divisor e, por fim, 
    ele é atribuido a c*/

    c = 4 * a + b / (3 - 5);

    cout << "O valor de c na terceira expressa eh: " << c << endl;

    resultado = a ^ 2 + 2 * b + c;

    cout << "O valor da expressa final eh: " << resultado << endl;
    

return 0;
}