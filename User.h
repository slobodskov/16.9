#pragma once
#include <string>
#include <iostream>
using namespace std;
class User {
	const string _login;
	string _password;
	string _name;

public:
	User(const string& login, const string& password, const string& name);

	const string& GetUserLogin()const;

	const string& GetUserPassword()const;

	void SetUserPassword(const string& password);

	const string& GetUserName()const;

	void SetUserName(const string& name);
};
