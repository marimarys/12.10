#include <iostream>
using namespace std;
int main() {
	//For1.���� ����� ����� K � N(N > 0).������� N ��� ����� K.
	/*int n, k;
	cout << "N:";
	cin >> n;
	cout << "K:";
	cin >> k;
	for (int i = 0; i < n; ++i) {
		cout << k << endl;
	}*/
	//For2.���� ��� ����� ����� A � B(A < B).������� � ������� ����������� ���
		//����� �����, ������������� ����� A � B(������� ���� ����� A � B), �
		//����� ���������� N ���� �����.
	/*int a, b;
	int n = 0;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	for (int i = a; i <= b; i = i + 1) {
		cout << i << " ";
		n++;
	}
	cout << "qtu =" << n << endl;
	return 0;*/
	//For3.���� ��� ����� ����� A � B(A < B).������� � ������� �������� ���
		//����� �����, ������������� ����� A � B(�� ������� ����� A � B), �
		//����� ���������� N ���� �����.
	/*int a, b;
	int n = 0;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	for (int i = b-1; i > a; i = i - 1) {
		cout << i << " ";
		n++;
	}
	cout << "qtu =" << n << endl;
	return 0;*/
	//For4.���� ������������ ����� � ���� 1 �� ������.������� ��������� 1,
		//2, . . ., 10 �� ������
	/*double price;
	cout << "input price:";
	cin >> price;
	for (int weight = 1; weight <= 10; weight++) {
		cout << weight << "kg costs" << weight * price << "$" << endl;
	}*/
	/*For5 ���� ������������ ����� � ���� 1 �� ������.������� ��������� 0.1,
		0.2, . . ., 1 �� ������.*/
	/*double price;
	cout << "input price:";
	cin >> price;
	for (double weight = 0.1; weight <= 1; weight = weight + 0.1) {
		cout << weight << "kg costs" << weight * price << "$" << endl;   
	}*/
	//For6.���� ������������ ����� � ���� 1 �� ������.������� ��������� 1.2,
		//1.4, . . ., 2 �� ������.
	/*double price;
	cout << "input price:";
	cin >> price;
	for (double weight = 1.2; weight <= 2; weight = weight + 0.2) {
		cout << weight << "kg costs" << weight * price << "$" << endl;
	}*/
	//For7.���� ��� ����� ����� A � B(A < B).����� ����� ���� ����� �����
		//�� A �� B ������������.
	/*int a, b;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	int s = 0;
	for (int i = a; i <= b; ++i) {
		s += i;
	}
	cout << s;*/
	//For8.���� ��� ����� ����� A � B(A < B).����� ������������ ���� �����
		//����� �� A �� B ������������.
	/*int a, b;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	int p = 1;
	for (int i = a; i <= b; ++i) {
		p *= i;
	}
	cout << p;*/
	//For9.���� ��� ����� ����� A � B(A < B).����� ����� ��������� ���� �����
		//����� �� A �� B ������������.	int a, b;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	int p = 0;
	for (int i = a; i <= b; ++i) {
		p += i *i;
	}
	cout << p;
}