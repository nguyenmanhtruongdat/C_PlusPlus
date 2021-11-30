#include<iostream>
using namespace std;
int main()
{
   int n, num1=0, num2=1, sum;
   cout<<"Enter N and i can display the Fibonacci from 0 to N "<<endl;
   cout<<"----------------------------------------------------"<<endl;

   cout<<"Enter N: ";
   cin>>n;
   cout<<"Fibonacci: "<<num1<<" "<<num2<<" ";
   for (int i = 2; i <= n; i++)
   {
      sum=num1+num2;
      num1=num2;
      num2=sum;
      cout<<sum<<" ";
   }

   return 0;
   
}