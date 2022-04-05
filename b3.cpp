#include <iostream>
using namespace std;
int gcd(int n1, int n2)
{
    if (n1 == 0)
        return n2;
    if (n2 == 0)
        return n1;
    if (n1 == n2)
        return n1;
    if (n1 > n2)
        return gcd(n1 - n2, n2);
    return gcd(n1, n2 - n1);
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
   cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<gcd(n1, n2);
   return 0;