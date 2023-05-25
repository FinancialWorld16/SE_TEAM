#ifndef GENERAL_MEMBER_H
#define GENERAL_MEMBER_H
#include "Member.h"
#include "Recruitments.h"
#include <iostream>
#include <string>
//일반회원
class GeneralMember : public Member {

private:

	string personalCode;

	Recruitment* applyList[20]; //지원 리스트

	int applyCnt = 0;

public:

	GeneralMember();

	GeneralMember(string name, string code, string id, string pw);

	virtual Member* createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments);

	void apply(string businessCode, Recruitments* recruitments);

	Recruitment** listApplyInfo();

	int getApplyCnt();

	void cancelApply(string businessCode, Recruitments* recruitments);

	void getApplyInfoStatistics(string *forPrint);

	/*void deleteApply();
	void getApplyStatistics();*/
	
};
#endif