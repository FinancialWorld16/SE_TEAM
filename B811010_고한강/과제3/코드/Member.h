#ifndef MEMBER_H
#define MEMBER_H
#include <iostream>
#include <string>
#include "Recruitments.h"
using namespace std;


class Member {

private:

	string id;

	string pw;

	string name;

public:

	Member();

	Member(string id, string pw, string name);

	virtual Member* createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments);

	void deleteUserInfo();

	string getName();

	string getId();

	void logIn();

	void logOut();

};
#endif