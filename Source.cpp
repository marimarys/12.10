#include <iostream>
using namespace std;
int main() {
	//For1.Даны целые числа K и N(N > 0).Вывести N раз число K.
	/*int n, k;
	cout << "N:";
	cin >> n;
	cout << "K:";
	cin >> k;
	for (int i = 0; i < n; ++i) {
		cout << k << endl;
	}*/
	//For2.Даны два целых числа A и B(A < B).Вывести в порядке возрастания все
		//целые числа, расположенные между A и B(включая сами числа A и B), а
		//также количество N этих чисел.
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
	//For3.Даны два целых числа A и B(A < B).Вывести в порядке убывания все
		//целые числа, расположенные между A и B(не включая числа A и B), а
		//также количество N этих чисел.
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
	//For4.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 1,
		//2, . . ., 10 кг конфет
	/*double price;
	cout << "input price:";
	cin >> price;
	for (int weight = 1; weight <= 10; weight++) {
		cout << weight << "kg costs" << weight * price << "$" << endl;
	}*/
	/*For5 Дано вещественное число — цена 1 кг конфет.Вывести стоимость 0.1,
		0.2, . . ., 1 кг конфет.*/
	/*double price;
	cout << "input price:";
	cin >> price;
	for (double weight = 0.1; weight <= 1; weight = weight + 0.1) {
		cout << weight << "kg costs" << weight * price << "$" << endl;   
	}*/
	//For6.Дано вещественное число — цена 1 кг конфет.Вывести стоимость 1.2,
		//1.4, . . ., 2 кг конфет.
	/*double price;
	cout << "input price:";
	cin >> price;
	for (double weight = 1.2; weight <= 2; weight = weight + 0.2) {
		cout << weight << "kg costs" << weight * price << "$" << endl;
	}*/
	//For7.Даны два целых числа A и B(A < B).Найти сумму всех целых чисел
		//от A до B включительно.
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
	//For8.Даны два целых числа A и B(A < B).Найти произведение всех целых
		//чисел от A до B включительно.
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
	//For9.Даны два целых числа A и B(A < B).Найти сумму квадратов всех целых
		//чисел от A до B включительно.	int a, b;
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