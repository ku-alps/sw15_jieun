#include <iostream>
#include <algorithm>
#define min(x,y) ((x < y) ? x : y)
using namespace std;


int main() {
	int b[3];	//burger
	int d[2];	//drink

	for (int i = 0; i < 3; i++)
		cin >> b[i];
	for (int i = 0; i < 2; i++)
		cin >> d[i];

	cout << min(b[0], min(b[1],b[2])) + min(d[0], d[1]) - 50;
	
}