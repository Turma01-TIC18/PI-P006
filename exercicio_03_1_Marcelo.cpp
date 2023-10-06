#include <iostream>
#include <cstdio>

using namespace std;


int main() {
    char ch1, ch2, ch3;

    cout << "Informe o primeiro caractere: ";
    cin >> ch1;

    cout << "Informe o segundo caractere: ";
    cin >> ch2;
     
    cout << " " << endl;

    ch3 = static_cast<char>(ch1 - 1);

    cout << "Caractere anterior a ch1: " << static_cast<int>(ch3) << " (decimal) ";
    cout << oct << static_cast<int>(ch3) << " (octal) ";
    cout << hex << static_cast<int>(ch3) << " (hexadecimal) ";
    if (ch3) {
        cout << "'" << ch3 << "'" << endl;
    } else {
        cout << "'_'" << endl;
    }

    ch3 = static_cast<char>(ch2 - 1);

    printf("Caractere anterior a ch2: %d (decimal) %o (octal) %x (hexadecimal) ", ch3, ch3, ch3);
    
    if (ch3) {
        cout << "'" << ch3 << "'" << endl;
    } else {
        cout << "'_'" << endl;
    }

    
    ch3 = (isupper(ch1)) ? 'A' : ' ';

    cout << " " << endl;
    cout << "Valor de ch3 baseado em ch1: '" << ch3 << "'" << endl;

    ch3 = (islower(ch2)) ? 'a' : ' ';
    cout << "Valor de ch3 baseado em ch2: '" << ch3 << "'" << endl;

    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';
    cout << "Valor de ch3 baseado em ch1 ou ch2: '" << ch3 << "'" << endl;

    cout << "" << endl;

    return 0;
}