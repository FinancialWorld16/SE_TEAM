#include "Member.h"

Member::Member() {

}

Member::Member(string name, string id, string pw) {

	this->name = name;
	this->id = id;
	this->pw = pw;

}

Member* Member::createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments) {

	Member* member = new Member();
	return member;
}

void Member::deleteUserInfo() {

	

}


string Member::getName() {

	return this->name;

}

string Member::getId() {

	return this->id;

}


void Member::logIn() {


}

void Member::logOut() {


}


