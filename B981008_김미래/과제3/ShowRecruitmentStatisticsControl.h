#ifndef SHOW_RECRUITMENT_STATISTICS_H
#define SHOW_RECRUITMENT_STATISTICS_H
#include "CompanyMember.h"
#include "Recruitments.h"
#include <iostream>
#include <string>
using namespace std;

class ShowRecruitmentStatisticsControl { //ä�� ���� ��� control Ŭ���� ����

public:

	void showStatistics(CompanyMember* companyMember, string* forPrint);

};
#endif
