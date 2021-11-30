#include<iostream>
using namespace std;
int main(){

    int i, n, sum=0;
    cout<<"Enter n: ";
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
        sum+=i;
    }
    cout<<"The sum from 1 to "<<n<<" = "<<sum;

    return 0; 
}