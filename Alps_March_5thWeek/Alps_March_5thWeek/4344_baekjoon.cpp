#include <iostream>
#include <vector>
using namespace std;

int main() {

	cout << fixed;
	cout.precision(3);

	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int n=0; // 학생수
		int sum = 0; //평균낼때 쓸 합계
		cin >> n;
		vector<int> a(n);

		
		for (int j = 0; j < n; j++) {
			cin >> a[j];
			sum += a[j];
		}

		int aver = sum / n;
		int count = 0;

		for (int j = 0; j < n; j++) {
			if (aver < a[j])
				count++;
		}

		double answer = 100 / (double)n * (double)count;
		cout << answer << "%\n";
	}


}