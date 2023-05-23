#ifndef COMPANY_MEMBER_H
#define COMPANY_MEMBER_H
#include "Member.h"
#include "Recruitment.h"
#include <string>
//회사회원

class CompanyMember : public Member {

private:

	string businessCode;

	Recruitment recruitmentList[20];

	int numberOfRecruitments = 0;

	Recruitment* pRecruitment;

public:

	CompanyMember();

	CompanyMember(string name, string code, string id, string pw);

	virtual Member* createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments);

	Recruitment* listRecruitments();

	void getRecruitmentStatistics(string* forPrint);

	void addNewRecruitment(string workName, string personNum, string deadline);

	int getNumberOfRecruitments();

};

#endif