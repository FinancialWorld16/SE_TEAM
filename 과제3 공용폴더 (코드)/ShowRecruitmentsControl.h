#ifndef SHOW_RECRUITMENTS_H
#define SHOW_RECRUITMENTS_H
#include <iostream>
#include <string>
#include "GeneralMember.h"
#include "Recruitments.h"
#include "Recruitment.h"
using namespace std;

//채용정보 검색 Control Class
class ShowRecruitmentsControl {

public:

	void showRecruitments(string companyName, Recruitments* recruitments, string* forPrint);

};
#endif