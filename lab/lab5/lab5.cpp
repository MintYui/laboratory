#include <iostream>

using namespace std;

double enterAndCheckNum();

int main() {
	int i, j = 0, g = 0, n, sum = 0, choice;
	do {
		cout << "Enter array size from 1 to 100\t";
		n = enterAndCheckNum();
	} while (n < 1 || n>100);

	int* a = new int[n];

	do {
		cout << "Do you want to use random numbers or enter them yourself ? \t 1 - random 2 - enter\n";
		choice = enterAndCheckNum();
	} while (choice != 1 && choice != 2);

	if (choice == 2) {
		for (i = 0; i < n; ++i)
			cin >> a[i];
	}
	else {
		srand(time(0));
		for (i = 0; i < n; ++i) {
			a[i] = rand() % 15 - 10;
			cout << a[i] << " ";
		}
	}

	for (i = 0; i < n; i++) {
		if (a[i] > 0) {
			j = i;
			break;
		}
	}
	for (i = n - 1; i >= j; i--) {
		if (a[i] > 0) {
			g = i;
			break;
		}
	}
	if (g == j || fabs(g - j) == 1 || g + j == 0) cout << "Error!";
	else {
		for (i = j + 1; i <= g - 1; i++) {
			sum += a[i];
		}
		cout << "Sum =  " << sum;
	}
	delete[] a;
	return 0;
}

double enterAndCheckNum() {//Функция чтобы вводить переменную и проверять на корректный ввод
	double var;
	bool local_check = 1;
	while (local_check)
	{
		cin >> var;
		if (cin.get() != '\n')
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Error! Something go wrong ReEnter: ";
		}
		else local_check = 0;
	}
	return var;
}
