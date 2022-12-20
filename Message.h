#pragma once
#include <string>
#include <iostream>

class Message
{
private:

	const std::string _msgTo;
	const std::string _msgFrom;
	const std::string _msgText;

public:

	~Message() {}
	Message(const std::string& msgTo, const std::string& msgFrom, const std::string& msgText) 
		: _msgTo(msgTo), _msgFrom(msgFrom), _msgText(msgText) {}

	const std::string& getFrom() { return _msgFrom; }
	const std::string& getTo() { return _msgTo; }
	const std::string& getText() { return _msgText; }
	friend std::ostream& operator<<(std::ostream& out, const Message& msg)
	{
		out << "Message: " << msg._msgTo << msg._msgFrom << msg._msgText << std::endl;
		return out;
	}
};




