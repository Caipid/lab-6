#include<iostream>
#include<locale>
using namespace std;
// ���� ������� ������� M \ N. � ������ �� ������ ����� ���������� ���������, ������� �������� ��������������� ���� ��������� ���� ������.
int main() {
	setlocale(LC_ALL, "RU");
	const int M = 10; // ������
	const int N = 10; // ������
	int a[M][N];
	double sred[M];
	int chicla[M];
	int n, m;
	double sum = 0.0;
	cout << "������� ���������� ��������: ";
	cin >> n;
	cout << "������� ���������� �����: ";
	cin >> m;
	if ((m < 0 || n < 0) || (m > 10 || n > 10)) {
		return 1;
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++) {
			cout << "������� ������� �������: ";
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
		cout << "���������� ��������� ������ �������� ��������������� � " << i+1 << " ������:";
		cout << chicla[i]<< endl;
	}
}
