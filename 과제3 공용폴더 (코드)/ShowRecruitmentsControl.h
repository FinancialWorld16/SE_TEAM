#ifndef SHOW_RECRUITMENTS_H
#define SHOW_RECRUITMENTS_H
#include <iostream>
#include <string>
#include "GeneralMember.h"
#include "Recruitments.h"
#include "Recruitment.h"
using namespace std;

class ShowRecruitmentsControl {

public:

	void showRecruitments(string companyName, Recruitments* recruitments, string* forPrint);

};
#endif