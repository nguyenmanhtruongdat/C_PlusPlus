#include<iostream>
using namespace std;
#include<math.h>
int main(){

    int a, n, power=1, i=1;
    
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Enter exponent: ";
    cin>>n;

    do
    {
        power=power*a;
        i++;
        
    }while (i<=n);
    
    cout<<a<<" power of "<<n<<" is "<<power;
    
    return 0;


}