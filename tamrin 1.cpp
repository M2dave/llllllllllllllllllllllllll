#include <iostream>
using namespace std;

int main() {
	int n, count = 0;
	cout << "Enter the size of the array: ";
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cout << "Enter element " << i + 1 << ": ";
		cin >> arr[i];

		if (arr[i] == 7) {
			count++;
		}
	}

	cout << "Number of elements with value 7: " << count << endl;

	return 0;
}