#include <iostream>
#include "Message.h"
#include <vector>
using namespace std;


int main()
{
	
	vector <Message> messages;

	messages.emplace_back("To1", "strFrom1", "strText");
	messages.emplace_back("To1", "strFrom1", "strText1");
	messages.emplace_back("To2", "strFrom2", "strText2");
	messages.emplace_back("To", "strFrom2", "strText3");
	
	cout << messages[3] << endl;
	
	int x = 4;
	int y = 5;
	cout << x + y << endl;
	
	return 0;

}