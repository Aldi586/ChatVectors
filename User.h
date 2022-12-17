#pragma once
#include <string>
#include <iostream>

class User
{
private:
	const std::string _login;
	std::string _password;

public:
	//~User() {}
	User (std::string lgn, std::string pwd) : _login(lgn), _password(pwd) {}
	void setLogin(const std::string lgn) {}
	void setPassword(std::string pwd) {}
	const std::string getLogin() { return _login; }
	const std::string getPassword() { return _password; }
	friend std::ostream& operator<<(std::ostream& out, const User& usr)
	{
		out << "User: " << usr._login << usr._password << std::endl;
		return out;
	}

};