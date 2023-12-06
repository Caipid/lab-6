#include<iostream>
#include<locale>
using namespace std;
// Дана квадратная матрица порядка M. Обнулить элементы мат-рицы, лежащие на главной диагонали и выше нее. Условный оператор не использовать.

int main() {
	setlocale(LC_ALL, "RU");
	int m;
	cout << "Введите размер квадратной матрицы ";
	cin >> m;
	int* a = new int[m];
	int** a2 = new int* [m];
	for (int i = 0; i < m; i++) {
		a2[i] = new int [m];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Введите элемент матрицы " << i + 1 << " " << j + 1;
			cin >> a2[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = i; j < m; j++) {
			a2[i][j] = 0;
		}
	}	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << a2[i][j] << " ";
		}
		cout << endl;
	}
	delete[] a;
}