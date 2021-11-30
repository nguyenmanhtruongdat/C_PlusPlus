#include<iostream>
#include<math.h>
using namespace std;

void Armstrong()
{
    int num, digit, sum=0, temp=0;
    cout<<"Enter number: ";
    cin>>num;
        
        temp=num;
        do
        {   
            digit = num % 10;
            sum = sum + digit * digit * digit;
            num/=10;
        } while (num!=0);
        

    if(sum == temp)
    {
        cout << temp <<" is Armstrong.";
    }else{
        cout << temp <<" is not Armstrong. ";
    }
}


void Prime(){
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
}

int main(){
    int choose;
    cout<<"*********************"<<endl;
    cout<<"*   1. Armstrong    *"<<endl;
    cout<<"*   2. Prime        *"<<endl;
    cout<<"*   3. Finish       *"<<endl;
    cout<<"*********************"<<endl;
    cout<<"Choose(1, 2, 3) : ";
    cin>>choose;

    switch (choose)
    {
    case 1:
        Armstrong();
        break;
    case 2: 
        Prime();
        break;
    case 3:
        char ch;
        cout<<"Do you want to finish (c/k)? ";
        cin>>ch;
        if (ch=='c')
        {
            cout<<"See you again !";
        }else{
            main();
        }
        
    }

    return 0;
}

    

