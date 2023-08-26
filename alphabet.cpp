/* Author :Vikash Kumar Thakur
   Topic  :WAP to check whether a given character is uppercase alphabet or lowercase alphabet or some other special character, using switch case statement.
*/
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character ";
    cin >> ch;
    switch (ch)
    {
    case 'a' ... 'z':
        cout << "Lowercase Character";
        break;
    case 'A' ... 'Z':
        cout << "Uppercase Character";
        break;
    default:
        cout << "Special Character";
    }
    return 0;
}