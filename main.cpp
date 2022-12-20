#include <iostream>
#include <vector>
#include "Message.h"
#include "User.h"
#include "Chat.h"
using namespace std;





int main()
{
	User us;
	us.addUser();
	us.addUser();
	us.showUsers();

	
/*
	vector <User> users;
	string lgn;
	string pwd;
	cout << "Login Password" << endl;
	cin >> lgn >> pwd;
	users.emplace_back(lgn, pwd);
	for (auto& user : users)
		cout << user.getLogin() 
		<< " " << user.getPassword() << endl;
*/
	
	return 0;
}
/*

	
	vector <Message> messages;

	messages.emplace_back("To1", "strFrom1", "strText");//emplace_back does not require copy constructor 
	messages.emplace_back("To2", "strFrom1", "strText1");
	messages.emplace_back("To1", "strFrom2", "strText2");
	messages.emplace_back("ToAll", "strFrom2", "strText3");
	//cout << messages[3] << endl;
		
	return 0;
}*/