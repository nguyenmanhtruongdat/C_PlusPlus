#include<iostream>
using namespace std;

int getTotal(int arr[5][5]){
    
    int sum=0;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; i < 5; j++)
        {
            sum+=arr[i][j];
        }
        
    }

    return sum;
    
}

int main()
{
    const int rows=5, col=5;
    int total;

    int num[rows][col]=
    {       
        { 1, 2, 3, 4, 5, }, 
        { 6, 7, 8, 9, 10, }, 
        { 11, 12, 13, 14, 15 },
        {16, 17, 18, 19, 20 },
        {21, 22, 23, 24, 25 }   

    };

      for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << num[i][j] << "\t";
		}
		cout << endl;
	}

    cout<<endl;

    total=getTotal(num);
    cout<<total;



}