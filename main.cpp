#include"header.h"


int main()
{

	studentlist listo;
	char entry;
	bool quit = false;

	while (quit == false)
	{

		cout << "*********STUDENT LIST MENU********" << endl;

		cout << "I	Import students from a file" << endl;
		cout << "S	Show brief students list" << endl;
		cout << "E	Export a grade report to a file" << endl;
		cout << "Q	Quit program" << endl;
		cout << endl;
		cin >> entry;
		cout << endl;

		if (entry == 'i' || entry == 'I')
		{
			listo.importdata();
		}

		else if (entry == 's' || entry == 'S')
		{
			listo.showstudentlist();
		}

		else if (entry == 'e' || entry == 'E')
		{
			listo.makeoutputfile();
		}

		else if (entry == 'q' || entry == 'Q')
		{
			cout << endl;
			cout << "THANKYOU FOR USING STUDENT LIST MENU" << endl;
			quit = true;
		}

		else
		{
			cout << "Wrong entry made. Please choose again." << endl;
		}
	}

	system("pause");
	return 0;
}

