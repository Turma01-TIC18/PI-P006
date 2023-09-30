#include <iostream>
#include <cctype>

using namespace std;

int main() {

    char ch1, ch2, ch3;

    
    cout << "Digite o primeiro caractere: ";
    cin >> ch1;
    cin.ignore();
    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    
    ch3 = (ch1 - 1);
    cout << "Antecessor de ch1:" << endl;
    cout << "Decimal: " << int(ch3) << endl;
    cout << "Octal: " << oct << int(ch3) << endl;
    cout << "Hexadecimal: " << hex << int(ch3) << endl;
    cout << "Caractere: " << (isprint(ch3) ? ch3 : '_') << endl;

    
    ch3 = (ch2 - 1);
    printf("Antecessor de ch2:\n");
    printf("Decimal: %d\n", int(ch3));
    printf("Octal: %o\n", int(ch3));
    printf("Hexadecimal: %X\n", int(ch3));
    printf("Caractere: %c\n", (isprint(ch3) ? ch3 : '_'));


    
    ch3 = (isupper(ch1) ? 'A' : ' ');
    cout << "Valor de ch3 para ch1: " << ch3 << endl;

    
    ch3 = (islower(ch2) ? 'a' : ' ');
    cout << "Valor de ch3 para ch2: " << ch3 << endl;

   
    ch3 = (isdigit(ch1) || isdigit(ch2) ? '1' : ' ');
    cout << "Valor de ch3 para ch1 ou ch2: " << ch3 << endl;

    return 0;
}
