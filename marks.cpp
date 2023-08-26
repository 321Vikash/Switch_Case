/* Author :vikash Kumar Thakur
   Topic  :Program to find and display grade obtained by a student in a tes. Grading specifications are as follows :
          -Marks from 90 to 100 : Grade A
          -Marks from 80 to less than 90 : Grade B
          -Marks from 70 to less than 80 : Grade D
          -Marks from 60 to less than 70 : Grade E
          -Marks from 50 to less than 60 : Grade F
          -Marks below 50 :Grade F
          -Marks greater than 100 or less than 0 : Invaid Marks
*/
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the student marks ";
    cin >> marks;
    switch (marks)
    {
    case 90 ... 100:
        cout << "Grade A";
        break;
    case 80 ... 89:
        cout << "Grade B";
        break;
    case 70 ... 79:
        cout << "Grade C";
        break;
    case 60 ... 69:
        cout << "Grade D";
        break;
    case 50 ... 59:
        cout << "Grade E";
        break;
    case 0 ... 49:
        cout << "Grade F";
        break;
    default:
        cout << "Invalid Marks!";
    }
}