#include <iostream>
#include <locale>
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
		using namespace std;
		srand(time(0));
		int x = 2 + rand() % 9;
		int y = 2 + rand() % 9;
		int z;
		cout << "Проверим твои знания в таблице умножения (для выхода нажми любую букву и Enter)\n" << x << "*" << y << "=";
		while (cin >> z)
		{
			while (z != x*y)
			{
				cout << "Неправильно! Попробуй еще раз.\n";
				cin >> z;
			}
			cout << "Молодец!\n";
			x = 2 + rand() % 9;
			y = 2 + rand() % 9;
			cout << x << "*" << y << "=";
		}
		return 0;
}
