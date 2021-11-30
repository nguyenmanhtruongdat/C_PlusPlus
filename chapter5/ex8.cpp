#include<iostream>
using namespace std;
int main(){

    int n, product=1;
    cout<<"Enter n: ";
    cin>>n;

   while(n != 0)
    {
        product=product*(n%10);
        n=n/10;
    }
    
    cout<<"Product of "<<n<<" = "<<product;

    return 0;
}