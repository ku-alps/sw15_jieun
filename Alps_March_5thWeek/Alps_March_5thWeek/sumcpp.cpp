#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	string number;
	cin >> number;

	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += (number[i] - '0');
	}

	cout << sum;


}