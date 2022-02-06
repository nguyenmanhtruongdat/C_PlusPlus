#include<iostream>
using namespace std;

int findMax(int arr[], int k)
{
    int max;
    max=arr[0];
    for (int i = 0; i < k; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    cout<<"Max value of array = "<<max;

    return max;
    
}
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int num[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter value for num["<<i<<"] = ";
        cin>>num[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<num[i]<<" ";
    }
    
    cout<<endl;

    findMax(num, n);

    return 0;
    
}