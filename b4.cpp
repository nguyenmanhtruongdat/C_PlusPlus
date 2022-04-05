#include <iostream>
using namespace std;
int main()
{
    int x,n;
    cin>>n;
    int *arr=new int(n);
    for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
    for (x = 0; x < n; x++) {
		cout << arr[x] << " ";
	}
    return 0;
}
