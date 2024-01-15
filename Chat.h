#pragma once
#include <vector>
#include <exception>
#include <memory>
#include "Message.h"
class UserLoginExp : public exception //������������ �� ������ exeption ��� ����������� ��������� ����������
{
public:
	const char* what() const noexcept override
	{
		return " ������: ����� ������������ ����� ";
	}

};
class UserNameExp : public exception {
public:
	const char* what()const noexcept override
	{
		return " ������: ��� ������������ ������ ";
	}
};
class Chat
{
	bool _chatWorkCheck = false;//����������, ���������� �� ������ ����
	vector<User> _userList;//������� ������, ������� ������ ������������� ����
	vector<Message> _messageList;//������� ������, ������� ������ ��������� � ����
	shared_ptr<User> _currentUser = nullptr;//��������� �� �������� ������������

	void Login();
	void SignUp();
	void ShowChat()const;
	void ShowAllUsersName()const;
	void AddMessage();

	vector<User>& GetAllUsers()
	{
		return _userList;
	}
	vector<Message>& GetAllMessages()
	{
		return _messageList;
	}
	shared_ptr<User>GetUserByLogin(const string& login)const;
	shared_ptr<User>GetUserByName(const string& name)const;
public:
	void Start();
	bool ChatWorkCheck()const
	{
		return _chatWorkCheck;
	}
	shared_ptr<User>GetCurrentUser()const
	{
		return _currentUser;
	}
	void ShowLoginMenu();
	void ShowUserMenu();

	
};


