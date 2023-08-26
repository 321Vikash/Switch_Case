/* Author  : Vikash Kumar Thakur
   Topic   :1.Reverse number
            2.Prime Number
            3.Binary to Decimal
            4.Decimal to Octal
            5.Octal to Decimal
            6.Factor
            7.Factorial Number
            8.Armstrong Number
            9.Palindrom Number
            10.Fibonacci Series
            11.Remove Zero
            12.Special Number 
            13.Perfect Square
    IDE    :VS Code
*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int n, i, s = 0, dec = 0, oct = 0, d, b = 1, x, fact = 1, num, c, z, e, a = -1, f = 1, p = 1, y = 0;
    int ch;
    while (1)
    {
        cout << "\n**********Main Menu************\n";
        cout << "Choose one option from the following list......!\n";
        cout << "1.Reverse Number \n";
        cout << "2.Prime Number \n";
        cout << "3.Binary to Decimal \n";
        cout << "4.Decimal to Octal \n";
        cout << "5.Octal to Decimal \n";
        cout << "6.Factor \n";
        cout << "7.Factorial Number \n";
        cout << "8.Armstrong number \n";
        cout << "9.Palindrome Number \n";
        cout << "10.Fibonacci Series \n";
        cout << "11.Remove Zero \n";
        cout << "12.Special Number \n";
        cout << "13.Perfect Square \n";
        cout << "14.Exit \n";
        cout << "Enter your choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter any number :";
            cin >> n;
            while (n != 0)
            {
                d = n % 10;
                s = s * 10 + d;
                n /= 10;
            }
            cout << "The reverse number is :" << s;
            getch();
            break;
        case 2:
            cout << "Enter a number :";
            cin >> n;
            for (i = 1; i <= n; i++)
            {
                if (n % i == 0)
                    s++;
            }
            if (s == 2)
                cout << "Prime Number";
            else
                cout << "Not";
            getch();
            break;
        case 3:
            cout << "Enter the number binary format :";
            cin >> n;
            while (n != 0)
            {
                d = n % 10;
                dec = dec + d * b;
                n /= 10;
                b *= 2;
            }
            cout << "Decimal Number :" << dec;
            getch();
            break;
        case 4:
            cout << "Enter the number decimal format :";
            cin >> n;
            while (n != 0)
            {
                d = n % 8;
                oct = oct + d * b;
                n /= 8;
                b *= 10;
            }
            cout << "Octal Number :" << oct;
            getch();
            break;
        case 5:
            cout << "Enter the number Octal format :";
            cin >> n;
            while (n != 0)
            {
                d = n % 10;
                dec = dec + (d * pow(8, c));
                c++;
                n /= 10;
            }
            cout << "Equivalent Decimal value :" << dec;
            getch();
            break;
        case 6:
            cout << "Enter any number :";
            cin >> n;
            for (i = 1; i <= n; i++)
            {
                if (n % i == 0)
                    cout << i << "\t";
            }
            getch();
            break;
        case 7:
            cout << "Enter any number :";
            cin >> num;
            for (i = 1; i <= num; i++)
            {
                fact = fact * i;
            }
            cout << "Factorial Number is :" << fact;
            getch();
            break;
        case 8:
            cout << "Enter any number :";
            cin >> n;
            x = n;
            while (x != 0)
            {
                z = x % 10;
                s = s + (z * z * z);
                x /= 10;
            }
            if (s == n)
                cout << "Armstrong Number ";
            else
                cout << "Not";
            getch();
            break;
        case 9:
            cout << "Enter any number :";
            cin >> n;
            x = n;
            while (n != 0)
            {
                d = n % 10;
                s = s * 10 + d;
                n /= 10;
            }
            if (s == x)
                cout << "Palindrome Number";
            else
                cout << "Not";
            getch();
            break;
        case 10:
            cout << "Enter any number :";
            cin >> n;
            for (i = 1; i <= n; i++)
            {
                e = a + b;
                cout << e << " ";
                a = b;
                b = c;
            }
            getch();
            break;
        case 11:
            cout << "Enter any number :";
            cin >> n;
            while (n != 0)
            {
                i = n % 10;
                s = i * f + s;
                if (i == 0)
                    f *= 1;
                else
                    f *= 10;
                n /= 10;
            }
            cout << "Remove zero :" << s;
            getch();
            break;
        case 12:
            cout << "Enter a number :";
            cin >> n;
            x = n;
            while (x != 0)
            {
                d = x % 10;
                s += d;
                p *= d;
                x /= 10;
            }
            if (s + p == n)
                cout << "special Number";
            else
                cout << "Not";
            getch();
            break;
        case 13:
            cout << "Enter the perfect square number :";
            cin >> n;
            for (i = 1; i <= n; i++)
            {
                if (i * i == n)
                {
                    y = 1;
                    break;
                }
            }
            if (y == 1)
                cout << "Perfect Square";
            else
                cout << "Not";
            getch();
            break;
        case 14:
            exit(0);
            break;
        default:
            cout << "Please enter valid choice......";
        }
    }
}
