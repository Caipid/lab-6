#include<iostream>
#include<locale>
using namespace std;
// ���� ���������� ������� ������� M. �������� �������� ���-����, ������� �� ������� ��������� � ���� ���. �������� �������� �� ������������.

int main() {
	setlocale(LC_ALL, "RU");
	int m;
	cout << "������� ������ ���������� ������� ";
	cin >> m;
	int* a = new int[m * m];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << "������� ������� ������� " << i + 1 << " " << j + 1;
			cin >> a[i*m+j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = i; j < m; j++) {
			a[i * m + j] = 0;
		}
	}	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i*m+j] << "";
		}
		cout << endl;
	}
	delete[] a;
}