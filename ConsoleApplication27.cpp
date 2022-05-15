

#include <iostream>
#include <ctime>
using namespace std;

void guess(int a, int b, int x, int kostff) {
	int k = 0;
	cout << "Введите числа больше 0:";
	cin >> a >> b;
	x = rand() % b + a;
	cout << "Введите число от " << a << " до " << b << endl;
	while (1) {
		k++;
		cout << "Введите число: ";
		cin >> kostff;
		if (kostff != x) {
			cout << "Вы не угадали:(" << endl;
			if (kostff < x) cout << "Число больше!" << endl;
			else if (kostff > x) cout << "Число меньше!" << endl;

		}
		else {
			cout << "Вы угадали!!!!!!" << endl;
			break;
		}

	}
	cout << "Спустя " << k << " попыток";

}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int a=0, b=0,x=0, kostff;
	guess(a, b, x, kostff);
	
    return 0;
}

