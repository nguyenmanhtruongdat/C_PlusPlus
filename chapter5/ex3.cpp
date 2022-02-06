#include <iostream>
using namespace std;

int findNumber(int N)
{
    int S = 0;
    int i = 0;
    while (S + (i + 1) < N)
    {
        i++;
        S = S + i;
    }
    return i;
}

int main()
{
    int n;
    cin >> n;

    if (n>0)
    {

        int result = findNumber(n);
        cout << result;

    }else{
        
        cout<<"N";
    }
    

    return 0;
}