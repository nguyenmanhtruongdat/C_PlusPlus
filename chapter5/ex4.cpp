#include<iostream>
using namespace std;

void findMax(int arr[], int k, int &max, int &count)
{
    max=arr[0];
    count=0;

    for (int i = 1; i < k; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }

    for (int i = 0; i < k; i++)
    {
        if (max==arr[i])
        {
            count++;
        }
        
    }

    
}

int main()
{
    int n, a, b;
    cin>>n;

    int num[n];

    if (n>0 && n<=50)
    {
        for (int i = 0; i < n; i++)
        {
            cin>>num[i];
        }

            for (int j = 0; j < n; j++)
        {
            cout<<num[j]<<" ";
        }

        cout<<endl;
        findMax(num, n, a, b);
    
        cout<<a<<endl;
        cout<<b;
        

    }else{
        cout<<"N";
    }
    
    
    return 0;


}