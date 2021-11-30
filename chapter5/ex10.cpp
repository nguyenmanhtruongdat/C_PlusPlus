#include <iostream>
using namespace std;

int main()
{
    int number, digit, temp, sum=0;

    cout<<"Enter a positive integer number: ";
    cin>>number;

    temp=number; //store the value of the variable number in the temporary


    //reverse the number
    do
    {
        digit=number%10;
        sum=sum*10+digit;
        number=number/10;

    } while (number>0);


    if (temp==sum) //check if the reverse number and the original number are same?
    {
        cout<<temp<<" is a palindrome number. ";
    }else{
        cout<<temp<<" is not a palindrome number. ";
    }
    

    return 0;
    
    
}