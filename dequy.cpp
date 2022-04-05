#include<iostream>
using namespace std;
int sumDeQuy(int n)
{
    if (n==0)
    {
        return 0;
    }else{
        return n +sumDeQuy(n-1);
    }

    /* n=5
    -> return 5+sumDeQUy(4)
    -> return 5+4+sumDeQuy(3)
    -> return 5+4+3+sumDeQuy(2)
    -> return 5+4+3+2+sumDeQuy(1)
    -> return 5+4+3+2+1+sumDeQuy(0)
    -> return 5+4+3+2+1+0
    =15
    */
    
}
int factorial (int num){
if (num == 0)
return 1;
else
return num * factorial(num - 1);
}

int main()
{
    int fac = factorial(5);
    cout<<fac;
}