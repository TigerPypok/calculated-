#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int f, g;
	int user1;
	while (true)
	{
		cout << "Выберите действие, 1-сумма  2-разность" << endl;
		cin >> user1;
		if (user1 == 1)
		{
			cout << "Вы выбрали сумму " << endl;
			cout << "Введите первое число" << endl;
			cin >> f;
			cout << "Введите  2 число" << endl;
			cin >> g;
			cout << f + g << endl;
		}
		if (user1 == 2)
		{
			cout << "Вы выбрали разность " << endl;
			cout << "Введите первое число" << endl;
			cin >> f;
			cout << "Введите  2 число" << endl;
			cin >> g;
			cout << f - g << endl;
		}
	}
	return 0;
}
