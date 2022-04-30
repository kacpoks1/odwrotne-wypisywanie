

#include <iostream>
using namespace std;

int main()
{

	const char table_size = 20;
	char table[table_size];
	char i;
	char zmienna;


	for (i = 0; i < table_size; i++)
	{
		cout << "wpisz znaki, aby przerwac podaj 0  " << endl;

		cin >> zmienna;

		if (zmienna == '0')
		{
			break;
		}
		else
		{
			table[i] = zmienna;
		}
	}

	for (char j = i; j >= 0; j--)
	{
		cout << table[j] ;
	}


}

