#include<iostream>
#include<locale>
using namespace std;
// Дана матрица размера M \ N. В каждой ее строке найти количество элементов, меньших среднего арифметического всех элементов этой строки.
int main() {
	setlocale(LC_ALL, "RU");
	const int M = 10; // строки
	const int N = 10; // столбы
	int a[M][N];
	double sred[M];
	int chicla[M];
	int n, m;
	double sum = 0.0;
	cout << "Введите количество столбцов: ";
	cin >> n;
	cout << "Введите количество строк: ";
	cin >> m;
	if ((m < 0 || n < 0) || (m > 10 || n > 10)) {
		return 1;
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++) {
			cout << "Введите элемент массива: ";
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum += a[i][j];
		}
		sred[i] = (sum / n);
		sum = 0.0;
	}
	for (int i = 0,count = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] < sred[i]) {
				count += 1;
			}
		}
		chicla[i] = count;
		count = 0;
	}
	for (int i = 0; i < m; i++) {
		cout << "Количество элементов меньше среднего арифметического в " << i+1 << " строке:";
		cout << chicla[i]<< endl;
	}
}
