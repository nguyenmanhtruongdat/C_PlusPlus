#include<iostream>
using namespace std;
int main(){

    int n, sum=0;
    cout<<"Enter n: ";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        if (i%2==0)
        {

            sum+=i;
            
        }
        
    }
    
    cout<<"Sum of even numbers from 1 to "<<n<<" = "<<sum;

    return 0;
}