#ifndef SHOW_RECRUITMENT_STATISTICS_H
#define SHOW_RECRUITMENT_STATISTICS_H
#include "CompanyMember.h"
#include "Recruitments.h"
#include <iostream>
#include <string>
using namespace std;

class ShowRecruitmentStatisticsControl { //채용 정보 통계 control 클래스 정의

public:

	void showStatistics(CompanyMember* companyMember, string* forPrint);

};
#endif
