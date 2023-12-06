#include<iostream>
#include<locale>
using namespace std;
// Дана квадратная матрица порядка M. Обнулить элементы мат-рицы, лежащие на главной диагонали и выше нее. Условный оператор не использовать.

int main() {
	setlocale(LC_ALL, "RU");
	const int M = 10; // строки
	const int N = M; // столбы
	int a[M][N];
	int m;
	cout << "Введите размер квадратной матрицы ";
	cin >> m;
	if ((m < 0) || (m > 10)) {
		return 1;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Введите элемент матрицы " << i+1 <<" "<< j + 1;
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j + i] = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}	