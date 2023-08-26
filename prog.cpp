/* Author  :Vikash Kumar Thakur
   Topic   :1.Addition
            2.Multiplication
            3.Subtraction
            4.Division
*/
#include <iostream>
using namespace std;
int main()
{
    int ch, a, b;
    cout<<"***********Main Menu************* \n";
    cout << "1.Sum of Two number \n";
    cout << "2.Product of Two number \n";
    cout << "3.Subtraction of Two number \n";
    cout << "4.Division of Two number \n";
    cout << "Enter your choice \n";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter Two number :";
        cin >> a >> b;
        cout << "The sum is " << a + b << endl;
        break;
    case 2:
        cout << "Enter two number :";
        cin >> a >> b;
        cout << "The product is " << a * b << endl;
        break;
    case 3:
        cout << "Enter two number :";
        cin >> a >> b;
        cout << "The subtraction is " << a - b << endl;
        break;
    case 4:
        cout << "Enter two number :";
        cin >> a >> b;
        cout << "The division is " << a / b << endl;
        break;
    default:
        cout << "Invalid Choice";
    }
    return 0;
}
