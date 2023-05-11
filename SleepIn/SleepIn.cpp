#include <iostream>

using namespace std;

int main()
{
	char onVacation = 'n';
	int dayOfWeek = 1;

	cout << "Are you on vacation? (y/n) : ";
	cin >> onVacation;
	if (onVacation == 'n') 
	{
		cout << "What day of the week is it?\n";
		cout << "1 = Sunday\n2 = Monday\n3 = Tuesday\n4 = Wednesday\n5 = Thursday\n6 = Friday\n7 = Saturday\n";
		cout << "\nDay? ";

		
	}
	else
	{
		cout << "\nYou can sleep in!\n";
	}
	
}
