#include <iostream>

using namespace std;

int main()
{

	int n = 8;

	for (int i = 0; i <= n; i++) {
		if (i == 0) {
			for (int j = 0; j <= n + 1; j++) {
				if (j == 0)
					cout << "	\u250C";
				if (j == n)
					cout << "\u2510" << endl;
				else
					cout << "\u2500";
			}
		}
		if (i == n) {
			for (int j = 0; j <= n; j++) {
				if (j == 0)
					cout << "	\u2514";
				if (j == n)
					cout << "\u2518" << endl;
				else
					cout << "\u2500";
			}
		}
		else {
			cout << "	\u2502";
			for (int j = 0; j < n; j++) {
				if (j % 2 == 0 && i % 2 == 0)
					cout << "\u2588";
				if (j % 2 == 0 && i % 2 != 0)
					cout << " ";
				if (j % 2 != 0 && i % 2 != 0)
					cout << "\u2588";
				if (j % 2 != 0 && i % 2 == 0)
					cout << " ";
			}
			cout << "\u2502" << endl;
		}
	}

	return 0;
}