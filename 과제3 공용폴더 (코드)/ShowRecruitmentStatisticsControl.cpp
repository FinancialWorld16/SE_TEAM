#include "ShowRecruitmentStatisticsControl.h"

//ä������ ��� ����
void ShowRecruitmentStatisticsControl::showStatistics(CompanyMember* companyMember, string* forPrint) {

	companyMember->getRecruitmentStatistics(forPrint);

}