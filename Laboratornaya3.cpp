#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n,a, num;
	int x = 1;
	int min = INT_MAX;
	cout << "Ввод кол-ва элементов последовательности: ";
	cin >> n;
	cout << "Вывод последовательности: ";
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		
		if (a % 10 == 2 or a % 10 == 4)
		{
			x = x * a;	
		
			if (a < min)
				{
					min = a;
					num = i;
				}
			}
		
	}
	cout << "Произведение чисел с 2 или 4 на конце: " << x << ", из них наименьшее число - " << min << ", стоящее в последовательности под номером " << num << endl;
	return 0;

}

