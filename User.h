#pragma once
#include <string>
#include <iostream>
#include "Chat.h"

class User
{
private:
	const std::string _login;
	std::string _password;
	std::vector <User> _users;

public:
	User() = default;
	User (std::string lgn, std::string pwd) : _login(lgn), _password(pwd) {}
	void setLogin(const std::string lgn) {}
	void setPassword(std::string pwd) {}
	void addUser()
	{
		std::string lgn;
		std::string pwd;
		std::cout << "Login Password" << std::endl;
		std::cin >> lgn >> pwd;
		_users.emplace_back(lgn, pwd);
	}
	void showUsers()
	{
		for (auto& user : _users)
			std::cout << user.getLogin() << " "
			<< user.getPassword() << std::endl;
	}

	const std::string getLogin() { return _login; }
	const std::string getPassword() { return _password; }
	friend std::ostream& operator<<(std::ostream& out, const User& usr)
	{
		out << "User: " << usr._login << usr._password << std::endl;
		return out;
	}
		
};