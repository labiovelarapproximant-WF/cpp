# include <iostream>
using namespace std;

int main() {
	int number;
	int i;

	cout << "Provide an integer: ";
	cin >> number;
	for (i = 0; i <= number; i++) {
		cout << i << endl;
	}
	return 0;
}
