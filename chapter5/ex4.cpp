#include<iostream>
using namespace std;
int main(){

    int n, sum;

    cout<<"Enter n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum+=i*i;
    }
    
    cout<<"The value of expression (1*1)+(2*2)+(3*3)+...+(n*n) = "<<sum;
    
    return 0;

}