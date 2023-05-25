#ifndef SHOW_RECRUITMENT_STATISTICS_H
#define SHOW_RECRUITMENT_STATISTICS_H
#include "CompanyMember.h"
#include "Recruitments.h"
#include <iostream>
#include <string>
using namespace std;

//채용정보 통계보기 Control Class
class ShowRecruitmentStatisticsControl {

public:

	void showStatistics(CompanyMember* companyMember, string* forPrint);

};
#endif
