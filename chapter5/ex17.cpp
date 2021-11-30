#include <iostream>

using namespace std;

int main() {
	int n;
	int sum = 0;
	cout << "Enter n: ";
	cin >> n;
	if(n <= 0) {
		cout << "N";
	}
	int i = 0;
	if(n > 0) {
		
        while(sum <= n) {
			i+=1;
			sum += i;	
		}
		cout << i-1;		
		}
	return 0;	
	}
	

