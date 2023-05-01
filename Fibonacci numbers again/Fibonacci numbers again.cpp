#include <iostream>

using namespace std;

int Fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	if (n == 0)
		return 0;
	return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
	setlocale(LC_ALL, "ru");
	int num;
	cout << "Введите n: ";
	cin >> num;
	cout << Fibo(num);
}
// Сложность по скорости O(2^n) так как каждый новый вызов функции Fibo вызывает 2 новых вызова. По памяти сложность O(n) так как глубина рекурсии пропорциональна n.
