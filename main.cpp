#include <iostream>
#include <vector>
#include "Message.h"
#include "User.h"
using namespace std;


int main()
{
	
	vector <Message> messages;

	messages.emplace_back("To1", "strFrom1", "strText");//emplace_back does not require copy constructor 
	messages.emplace_back("To2", "strFrom1", "strText1");
	messages.emplace_back("To1", "strFrom2", "strText2");
	messages.emplace_back("ToAll", "strFrom2", "strText3");
	cout << messages[3] << endl;

	vector <User> users;
	users.emplace_back("Ivan", "3werty");
	users.emplace_back("Darya", "Dasha25");

	cout << users[0] << endl;
	cout << users[1] << endl;

	/*
	int x = 4;
	int y = 5;
	cout << x + y << endl;
	*/
	return 0;
}