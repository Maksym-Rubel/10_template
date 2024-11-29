#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class ExistLoginException : public exception
{
public:
	ExistLoginException(const string& message = "Login must be unikal")
		:exception(message.data())
	{}
};
class FormatPasswordException : public exception
{
public:
	FormatPasswordException(const string& message = "Password ne podhodyt")
		:exception(message.data())
	{}
};



class User_Acount 
{
	string password, login;
public:
	User_Acount(const string& login, const string& password)
		:login(login)
	{
		setPass1(password);
	}
	string getlogin() const
	{
		return login;
	}
	void setPass(const string& newPass) {
		password = newPass;
	}
	string getPass() const
	{
		return password;
	}
	void setPass1(const string& password) {
		if (password.length() <= 7) {
			throw FormatPasswordException();
		}
		bool hasDigit = false, hasLower = false, hasUpper = false, hasSpecialChar = false;

		for (char c : password) {
			if (isdigit(c)) hasDigit = true;
			if (islower(c)) hasLower = true;
			if (isupper(c)) hasUpper = true;
			if (ispunct(c)) hasSpecialChar = true;
		}

		if (hasDigit && hasLower && hasUpper && hasSpecialChar) {
			this->password = password;
		}
		else {
			throw FormatPasswordException();
		}
	}

};

class SocialNetwork
{
	vector<User_Acount> acounts;
public:
	void register1(const string& login, const string& pass)
	{
		try 
		{
			User_Acount user(login, pass);
			for (auto& u : acounts)
			{
				if (u.getlogin() == login)
					throw ExistLoginException();

			}
			acounts.emplace_back(login, pass);
			cout << "Account registered" << endl;

		}
		catch (const ExistLoginException& ex)
		{
			cout << "Error --> " << ex.what() << endl;
		}
		catch (const FormatPasswordException& ex) 
		{
			cout << "Error --> " << ex.what() << endl;
		}
	}
	void login(const string& login, const string& pass)
	{
		try {
			for (const auto& u : acounts) {
				if (u.getlogin() == login) { 
					if (u.getPass() == pass) { 
						cout << "Hello " << login << "!!!\n";
						return; 
					}
					else {
					
						throw FormatPasswordException();
					}
				}
			}
			throw ExistLoginException("login not found");
		}
		catch (const FormatPasswordException& ex) {
			cout << "Error --> " << ex.what() << endl;
		}
		catch (const ExistLoginException& ex) {
			cout << "Error --> " << ex.what() << endl;
		}
		
	}
	
	void changePassword(const string& login, const string& pass, const string& newpass)
	{
		try {
			for (auto& u : acounts) {
				if (u.getlogin() == login) {
					if (u.getPass() == pass) {
						u.setPass(newpass);
						cout << "Password changed!\n";
						return;
					}
					else {
						throw FormatPasswordException();
					}
				}
			}
			throw ExistLoginException();
		}
		catch (const ExistLoginException& ex) {
			cout << "Error --> " << ex.what() << endl;
		}
		catch (const FormatPasswordException& ex) {
			cout << "Error --> " << ex.what() << endl;
		}
	}
};

