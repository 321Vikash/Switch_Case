/* Author :Vikash Kumar Thakur
   Topic  :convert the following if-else-if construct into switch case:
           if(var==1)
                cout<<"Good";
            else if(var==2)
                cout<<"Better";
            else if(var==3)
                cout<<"Best";
            else 
                cout<<"Invalid";
*/
#include <iostream>
using namespace std;
int main()
{
    int var;
    cout << "Enter the number ";
    cin >> var;
    switch (var)
    {
    case 1:
        cout << "Good";
        break;
    case 2:
        cout << "Better";
        break;
    case 3:
        cout << "Best";
        break;
    default:
        cout << "Invalid Input";
    }
    return 0;
}