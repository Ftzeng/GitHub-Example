#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Variable declarations
	string name, color;

	// Output and input
	cout << "Hello, what is your name? ";
	cin >> name;

	cout << "What is your favorite color? ";
	cin >> color;

	cout << endl;
	cout << "So can I call you " << color << " " << name << "?" << endl; 

	return 0;
}




/*
Hello, what is your name? Ben
What is your favorite color? Yellow

So can I call you Yellow Ben?
Press any key to continue . . .
*/
