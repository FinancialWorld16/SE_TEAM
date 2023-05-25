#include "ShowRecruitmentStatisticsControl.h"

void ShowRecruitmentStatisticsControl::showStatistics(CompanyMember* companyMember, string* forPrint) {

	companyMember->getRecruitmentStatistics(forPrint);

}