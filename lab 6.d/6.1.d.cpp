#include<iostream>
#include<locale>
using namespace std;
// Дана матрица размера M \ N. В каждой ее строке найти количество элементов, меньших среднего арифметического всех элементов этой строки.
int main() {
	setlocale(LC_ALL, "RU");
	int n, m;
	double sum = 0.0;
	cout << "Введите количество столбцов: ";
	cin >> n;
	cout << "Введите количество строк: ";
	cin >> m;
	double* sred = new double[n];
	int* chicla = new int[n];
	int* a = new int[m];
	int** a2 = new int* [n];
	for (int i = 0; i < n; i++) {
		a2[i] = new int[m];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Введите элемент массива: ";
			cin >> a2[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum += a2[i][j];
		}
		sred[i] = (sum / n);
		sum = 0.0;
	}
	for (int i = 0, count = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a2[i][j] < sred[i]) {
				count += 1;
			}
		}
		chicla[i] = count;
		count = 0;
	}
	for (int i = 0; i < m; i++) {
		cout << "Количество элементов меньше среднего арифметического в " << i + 1 << " строке:";
		cout << chicla[i] << endl;
	}
	delete[] a;
	delete[] sred;
	delete[] chicla;
}
