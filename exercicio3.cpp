#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char ch1, ch2, ch3;
    


    cout << "Digite o primeiro caractere: ";
    cin >> ch1;
    /*cout << "Digite o segundo caractere: ";
    cin >> ch2;*/

    ch3 =  ch1 -1;

    if(ch3 <= 32 || ch3 == 127) {
        cout << "Caracter não imprimível: " <<  "_" << ch3 <<  endl;

    }else {
        cout << "Numerico: " << int(ch3) << endl;
        cout << dec << "Decimal: " << int(ch3) << endl;
        cout << oct << "Octal: " << int(ch3) << endl;
        cout << hex << "Hexadecimal: " << int(ch3) << endl;
        cout << "Caractere: " << ch3 << endl;
    }


    return 0;
}