#include <iostream>

using namespace std;

void output(int arr[], bool check[], int n) {
	cout << "[";
	for (int i = 0; i < n; i++) {
		if (check[i]) {
			cout << arr[i] << ",";
		}
	}
	cout << "]" << endl;
}
void combination(int arr[], bool check[], int n, int m) {
	if (m == n) {
		output(arr, check, n);
	}
	else {
		check[m] = true;
		combination(arr, check, n, m + 1);
		check[m] = false;
		combination(arr, check, n, m + 1);
	}
}
int main() {
	int n, m = 0, arr[100];
	bool check[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
		check[i] = false;
	}
	combination(arr, check, n, m);
	return 0;
}
