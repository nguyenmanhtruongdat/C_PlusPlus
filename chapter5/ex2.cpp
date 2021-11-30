#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int number;

    cout<<"Enter number: ";
    cin>>number;

    int i=2,
    count=0;
    while (i<=sqrt(number))
    {
        if (number%i==0)
        {
            count++;
        }
        i++;
    }
    if (count==0 &&number>1)
    {
        cout<<number<<" is Prime. ";
    }else{
        cout<<number<<" is not Prime. ";
    }

    return 0;
    
    

}