#include<iostream>
#include<locale>
using namespace std;
// ���� ������� ������� M \ N. � ������ �� ������ ����� ���������� ���������, ������� �������� ��������������� ���� ��������� ���� ������.
int main() {
	setlocale(LC_ALL, "RU");
	int n, m;
	int count = 0;
	double sum = 0.0;
	cout << "������� ���������� ��������: ";
	cin >> n;
	cout << "������� ���������� �����: ";
	cin >> m;
	int *a = new int[m*n];
	double* sred = new double[n];
	int* chicla = new int[n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "������� ������� �������: ";
			cin >> a[i*n+j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum += a[i*n+j];
		}
		sred[i] = ((sum / 1.0) / n);
		sum = 0;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i*n+j] < sred[i]) {
				count += 1;
			}
		}
		chicla[i] = count;
		count = 0;
	}
	for (int i = 0; i < m; i++) {
		cout << "���������� ��������� ������ �������� ��������������� � " << i + 1 << " ������:";
		cout << chicla[i] << endl;
	}
	delete[] a;
	delete[] sred;
	delete[] chicla;
}
