#include <iostream>

using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Digite o primeiro caractere: ";
    cin >> ch1;

    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    // Parte c
    ch3 = static_cast<char>(static_cast<int>(ch1) - 1);
    cout << "Caractere anterior ao ch1 em formato decimal: " << static_cast<int>(ch3) << endl;
    cout << "Caractere anterior ao ch1 em formato octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Caractere anterior ao ch1 em formato hexadecimal: " << hex << static_cast<int>(ch3) << endl;
    cout << "Caractere anterior ao ch1 como caractere: " << ((isprint(ch3)) ? ch3 : '_') << endl;

    // Parte d
    ch3 = static_cast<char>(static_cast<int>(ch2) - 1);
    printf("Caractere anterior ao ch2 em formato decimal: %d\n", static_cast<int>(ch3));
    printf("Caractere anterior ao ch2 em formato octal: %o\n", static_cast<int>(ch3));
    printf("Caractere anterior ao ch2 em formato hexadecimal: %x\n", static_cast<int>(ch3));
    cout << "Caractere anterior ao ch2 como caractere: " << ((isprint(ch3)) ? ch3 : '_') << endl;

    //Parte e
    ch3 = (isupper(ch1)) ? 'A' : ' ';
    cout << "Valor de ch3 após avaliar ch1: " << ch3 << endl;

    // Parte f
    ch3 = (islower(ch2)) ? 'a' : ' ';
    cout << "Valor de ch3 após avaliar ch2: " << ch3 << endl;

    // Parte g
    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';
    cout << "Valor de ch3 após avaliar ch1 e ch2 como dígitos: " << ch3 << endl;

    return 0;
}