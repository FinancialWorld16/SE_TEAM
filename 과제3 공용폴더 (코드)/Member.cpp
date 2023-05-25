#include "Member.h"

//기본 생성자
Member::Member(){

}

//매개변수가 있는 생성자
Member::Member(string name, string id, string pw){

	this->name=name;
	this->id=id;
	this->pw=pw;

}

//회원가입
Member* Member::createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments){

	Member *member=new Member();
	return member;
}

//회원탈퇴
void Member::deleteUserInfo(){

}


//회원의 이름 리턴
string Member::getName(){

	return this->name;

}

//회원의 ID 리턴
string Member::getId(){

	return this->id;

}

//로그인
bool Member::logIn(string id, string pw){

	//로그인 판정 로직
	if(this->id==id && this->pw==pw)
		return true;
	else
		return false;

}

//로그아웃
void Member::logOut(){


}