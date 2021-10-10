#include <iostream>

using namespace std;

double enterAndCheckNum();

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
