
#include <iostream>

using namespace std;
int main(int agrgc, char* argv[])
{
	int n = 5;
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < n - i; j++) {
			cout << " ";
		};
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		};
		cout << endl;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n - i; j++) {
			cout << " ";
		};
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}