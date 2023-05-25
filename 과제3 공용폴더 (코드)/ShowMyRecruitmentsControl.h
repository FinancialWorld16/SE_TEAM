#ifndef SHOW_MY_RECRUITMENTS
#define SHOW_MY_RECRUITMENTS
#include "CompanyMember.h"
#include "Recruitment.h"
#include <iostream>
#include <cstring>
using namespace std;

class ShowMyRecruitmentsControl{

private:

	CompanyMember *pCompanyMember;

	Recruitment *pRecruitment;

public:

	ShowMyRecruitmentsControl();

	void showRecruitments(CompanyMember* compnayMember, string* forPrint);


};
#endif