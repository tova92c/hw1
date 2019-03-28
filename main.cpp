#include "hospital.h"
#define NAME_LEN 20

void main_menu(Hospital& h)
{
	bool running = true;
	int choice = -1;
	char str1[NAME_LEN];
	char str2[NAME_LEN];

	while (running)
	{
		cout << "Please enter your choice" << endl;
		cout << "1 - Add department" << endl;
		cout << "2 - Add nurse" << endl;
		cout << "3 - Add visit" << endl;
		cout << "4 - Add researcher" << endl;
		cout << "5 - Add article to researcher" << endl;
		cout << "6 - show all patients in a specific department" << endl;
		cout << "7 - show hospital's stuff (doctors and nurses)" << endl;
		cout << "8 - show hospital's researchers" << endl;
		cout << "9 - find patient by ID" << endl;
		cout << "10 - Exit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "Enter the name of the new department" << endl;
			cin >> str1;
			h.addDepartment(str1);
		}
		case 2:
		{
			cout << "Enter the name of the new nurse" << endl;
			cin >> str1;
			cout << "choose department to assign new nurse" << endl;
			cin >> str2;
			//	h.addNurse(str1, str2);
		}
		case 3:
		{
			cout << "Enter the name of the new doctor" << endl;
			cin >> str1;
			cout << "choose department to assign new doctor" << endl;
			cin >> str2;
			//	h.addDoctor(str1, str2);
		}
		case 4:
		{
			cout << "Enter the name of the new doctor" << endl;
			cin >> str1;
			cout << "choose department to assign new doctor" << endl;
			cin >> str2;
			//	h.addVisit(str1, str2);

		}
		case 5:
		{
			cout << "Enter the name of the new researcher" << endl;
			cin >> str1;
			//	h.addResearcher(str1);

		}
		case 6:
		{
			cout << "Enter the name of the new article" << endl;
			cin >> str1;
			cout << "choose researcher to assign new article" << endl;
			cin >> str2;
			//	h.addArticle(str1, str2);
		}
		case 7:
		{
		}
		case 8:
		{
		}
		case 9:
		{
		}
		case 10:
		{
			running = false;
			return;
		}
		default:
			cout << "Invalid choice please choose again" << endl;
		}
	}
}

//TODO - Known issues file - ask Keren about the desgin of the code.
//Should I get cought up on things like this?
int main()
{
	Hospital h;
	main_menu(h);
	system("pause"); //Pause to see the output
	return 0;
}



