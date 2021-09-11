#include <iostream>
//Моисеева Ксения
//1.
using std::cin; using std::cout; using std::endl;
int main()
{

	setlocale(LC_ALL, "Rus");
	int A, B, C;

	cin >> A >> B >> C;

	if (A % B == 0 && B!=C)
	{
		if (B > C)
			cout << A << "/" << B << "+" << C << "=" << A / B + C << endl;
		if (B < C)
			cout << A << "/" << B << "-" << C << "=" << A / B - C << endl;

	}

	else
	{
		cout << "(" << A << "+" << B << ")*" << C << "=" << (A + B) * C << endl;
	}

	return 0;
}
	//2.
using std::cin; using std::cout; using std::endl;
int main()
{

	setlocale(LC_ALL, "Rus");
	
	int N;
	
	cout << "Месяц под номером ";
	
	cin >> N; 
	
	if (N > 0 and N <= 12)
		cout << "это ";

	switch (N)
	{
		case 1:cout << "январь" ;
		break;

		case 2:cout << "февраль";
			break;

		case 3:cout << "март";
			break;

		case 4:cout << "апрель";
			break;

		case 5:cout << "май";
			break;

		case 6:cout << "июнь";
			break;

		case 7:cout << "июль";
			break;

		case 8:cout << "август";
			break;

		case 9:cout << "сентябрь";
			break;

		case 10:cout << "октябрь";
			break;

		case 11:cout << "ноябрь";
			break;

		case 12:cout << "декабрь";
			break;

			default:
				cout << " не существует!" << endl;
	}
	return 0;
}

