/* Author :Vikash Kumar Thakur
   Topic  :WAP to check whether a given character is vowel or consonant or some other special character, using switch case statement. 
*/
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Vowel";
        break;
    case 'b' ... 'd':
    case 'f' ... 'h':
    case 'j' ... 'n':
    case 'p' ... 't':
    case 'v' ... 'z':
    case 'B' ... 'D':
    case 'F' ... 'H':
    case 'J' ... 'N':
    case 'P' ... 'T':
    case 'V' ... 'Z':
        cout << "Consonant";
        break;
    default:
        cout << "Special Character ";
    }
    return 0;
}