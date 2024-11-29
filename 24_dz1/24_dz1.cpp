#include <iostream>
#include <vector>
#include <string>
#include "SocialNetwork.h"
using namespace std;

int main()
{
	SocialNetwork network;
	
	string login1 = "Maksym";
	string pass1 = "Password123@";

	string login2 = "Denus";
	string pass2 = "Qwerty1234@";

	string newPass1 = "Ytrewq4321";
	network.register1(login1, pass1);
	network.register1(login2, pass2);

	network.login(login1, pass1); 
	network.login(login2, "WrongPass");
	network.changePassword(login1, "Password123@", "NewPassword456@");

}

