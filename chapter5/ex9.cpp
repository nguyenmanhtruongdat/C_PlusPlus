#include <iostream>
using namespace std;

int main()
{
  int m, n, num, digit, sum;

  cout << "Enter number m: ";
  cin >> m;

  cout << "Enter number n: ";
  cin >> n;

  cout << "Armstrong numbers between " << m << " and " << n << " are: ";
  for(int i = m; i <= n; i++)
  {
        sum = 0;
        num = i;

        do
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
            num/=10;
           
        
        } while (num>0);
        

        if(sum == i)
        {
            cout << i <<" ";
        }
  }

  return 0;
}