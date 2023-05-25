#ifndef ADD_NEW_RECRUITMENT_H
#define ADD_NEW_RECRUITMENT_H
#include "CompanyMember.h"
#include <iostream>
#include <string>
using namespace std;

class AddNewRecruitmentControl{

private:

	CompanyMember *pCompanyMember;

public:

	void addNewRecruitment(CompanyMember* compnayMember, string workName, string personNum, string deadline);

};
#endif