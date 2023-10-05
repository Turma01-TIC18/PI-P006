#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    char cha1, cha2, cha3;

    cout << "Digite dois caracteres: " ;
    cin >> cha1 >> cha2;

    
    cha3 = cha1 - 1;

    if (isprint(cha3)){
        cout << "O resultado decimal eh: " << static_cast<int>(cha3) << endl;
        cout << "O resultado em octal eh: " 
        << oct << static_cast<int>(cha3) << endl;
        cout << "O resultado em hexal: " 
        << hex << static_cast<int>(cha3) << endl;

    }
    else{
        cout << "O caracter nao pode ser impresso!" << endl;
        cha3 = '_';

        cout << "O caracter passa a ser: " << cha3 << endl;

    }
    
    cout << "\n" ;

    cha3 = cha2 + 1;

    if(isprint(cha3)){
        printf("Formato decimal: %d\n", static_cast<int>(cha3));        
        printf("Formato octal: %o\n", static_cast<int>(cha3));        
        printf("Formato hexadecimal: %x\n", static_cast<int>(cha3));        
        printf("Caractere: %c\n", cha3);

    } else {        
        printf("O caracter nao pode ser impresso! Subistuiir por '_'\n");
        cha3 = '_';
        printf("Caractere: %c\n", cha3);

    }
    if (cha3 = (cha1 >= 'A' && cha1 <= 'Z') ? 'A' : ' '){    
        cout << "O valor de cha3 eh: " << cha3 << endl;

    }
    if (cha3 = (cha2 >= 'a' && cha2 <= 'z') ? 'a' : ' '){
        cout << "O valor de cha3 eh : " << cha3 << endl;

    }
    if (cha3 = (isdigit(cha1) || isdigit(cha2)) ? '1' : ' '){

        cout << "O valor de cha3 eh: " << cha3 << endl;
    
    }
    

return 0;
}