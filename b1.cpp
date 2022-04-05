// C++ Program to insert and display data entered by using pointer notation.

#include <iostream>
using namespace std;
void RemoveOdd(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 != 0)
        {
            
                *(arr + i) = *(arr + i-1);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {

        cin >> *(arr + i);
    }

    cout << "--------------------------------";

    for (int i = 0; i < n; ++i)
    {

        cout << *(arr + i) << endl;
    }

    cout << "--------------------------------";

    RemoveOdd(arr, n);

    for (int i = 0; i < n; ++i)
    {

        cout << *(arr + i) << endl;
    }

    return 0;
}