#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char ch1, ch2, ch3;
    
    cout << "Digite o primeiro caractere: ";
    cin >> ch1;
    
    ch3 =  (ch1 -1);

    if(ch3 <= 32 || ch3 == 127) {
        cout << "Caracter não imprimível: " <<  "_" << ch3 <<  endl;

    }else {
        cout << "\n* Antecessor de ch2 *\n" << endl;
        cout << "Numerico: " << int(ch3) << endl;
        cout << dec << "Decimal: " << int(ch3) << endl;
        cout << oct << "Octal: " << int(ch3) << endl;
        cout << hex << "Hexadecimal: " << int(ch3) << endl;
        cout << "Caractere: " << ch3 << endl;
    }

    cout << "\n------------------------------------------------\n";

    if(ch3 <= 32 || ch3 == 127) {
        printf("Caracter não imprimível: %c", '_');

    }else {
        printf("\n* Antecessor de ch2 *\n");
        printf("\nNumérico: %d\n", int(ch3));
        printf("Decimal: %d\n", int(ch3));
        printf("Octal: %o\n", int(ch3));
        printf("Hexadecimal: %X\n", int(ch3));
        printf("Caractere: %c\n", ch3);

    }

    

    cout << "\n------------------------------------------------\n";

    ch3 = (isupper(ch1) ? 'A' : ' ');
    cout << "Valor de ch3 para ch1: " << ch3 << endl;

    
    ch3 = (islower(ch2) ? 'a' : ' ');
    cout << "Valor de ch3 para ch2: " << ch3 << endl;

   
    ch3 = (isdigit(ch1) || isdigit(ch2) ? '1' : ' ');
    cout << "Valor de ch3 para ch1 ou ch2: " << ch3 << endl;


    return 0;
}