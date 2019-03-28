#include <iostream>
using namespace std;

int main() {
	int array[9];
	int max = 0;
	int max_index = 0;

	for (int i = 0; i < 9; i++) {
		cin >> array[i];
		if (max < array[i]) {
			max = array[i];
			max_index = i;
		}
	}

	cout << max << "\n" << max_index+1 ;

}