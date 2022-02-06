#include<iostream>
using namespace std;
int main()
{
    int max=0;
    int n;
    cin>>n;
    if (n>0 && n!=1)
    {
        for (int i =1; i < n; i++)
        {
            if (n%i==0)
            {
                if (i%2!=0)
                {
                    max=i;    
                }
                
                
            }
            
        }
            cout<<max;

        
        
    }else if(n==1){
        cout<<1;
    
    }else{
        cout<<"N";
    }
  
    return 0;
    
}