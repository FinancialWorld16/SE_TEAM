#include "Member.h"

//�⺻ ������
Member::Member(){

}

//�Ű������� �ִ� ������
Member::Member(string name, string id, string pw){

	this->name=name;
	this->id=id;
	this->pw=pw;

}

//ȸ������
Member* Member::createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments){

	Member *member=new Member();
	return member;
}

//ȸ��Ż��
void Member::deleteUserInfo(){

}


//ȸ���� �̸� ����
string Member::getName(){

	return this->name;

}

//ȸ���� ID ����
string Member::getId(){

	return this->id;

}

//�α���
bool Member::logIn(string id, string pw){

	//�α��� ���� ����
	if(this->id==id && this->pw==pw)
		return true;
	else
		return false;

}

//�α׾ƿ�
void Member::logOut(){


}