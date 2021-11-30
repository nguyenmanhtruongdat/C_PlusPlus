#include<iostream>
using namespace std;
int main()
{   
    int num, temp=0;
    cout<<"Enter number: ";
    cin>>num;
    
    for ( int i = 1; i <= num; i=i+2)
    {
        if (num%i==0 && i/2 !=0)
        {
         temp=i;       
        }

    }
        if (temp!=0)
        {
            cout<<temp;
        }else{
            cout<<"N";
        }
        
        

    return 0;
}