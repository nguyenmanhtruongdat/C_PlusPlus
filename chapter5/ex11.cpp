#include <iostream>
using namespace std;
int main()
{
    int n, num = 0, digit;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        
        digit=n%10;
        num = (num * 10) + digit;
        n = n/10;
      

    }
    for (int i = num; i > 0; i = i / 10) {

        switch (i % 10) {
        case 0:
            cout << "zero ";
            break;
        case 1:
            cout << "one ";
            break;
        case 2:
            cout << "two ";
            break;
        case 3:
            cout << "three ";
            break;
        case 4:
            cout << "four ";
            break;
        case 5:
            cout << "five ";
            break;
        case 6:
            cout << "six ";
            break;
        case 7:
            cout << "seven ";
            break;
        case 8:
            cout << "eight ";
            break;
        case 9:
            cout << "nine ";
            break;
        }
    }

    return 0;
   
}
