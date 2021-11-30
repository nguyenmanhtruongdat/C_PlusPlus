#include<iostream>
using namespace std;
int main(){

    int number;
    
    cout<<"Enter number: ";
    cin>>number;

    if (number>=1)
    {
        for (int i = number; i >=1; i--)
        {
            cout<<i<<" ";

        }
    
    }else{
        for (int i = number; i <=1; i++)
        {
            cout<<i<<" ";
        }
        
    }
    
    
    return 0;


}