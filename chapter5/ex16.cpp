#include<iostream>
using namespace std;
int main()
{
    int num, digit, temp=0, sum =0;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    while (num!=0)
    {
        digit = num %10;
        num/=10;
        if (digit %2 !=0)
        {
            sum=sum*10+digit;
        }
    }
    
    if (sum==0)
    {
        cout<<"N";
    }else{
        cout<<sum;
    }
    
    return 0;

}