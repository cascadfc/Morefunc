//Персональный шаблон проекта С++
#include <iostream>
using namespace std;

template <typename T_1, typename T_2 > T_1 func(T_1 num, T_2 num2) {
	return num * num * num * num2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	cout << func(n, 5) << endl;
	cout << func(2.5, 5) << endl;


	return 0;
}