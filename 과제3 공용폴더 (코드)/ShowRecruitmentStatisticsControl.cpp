#include "ShowRecruitmentStatisticsControl.h"

//채용정보 통계 보기
void ShowRecruitmentStatisticsControl::showStatistics(CompanyMember* companyMember, string* forPrint) {

	companyMember->getRecruitmentStatistics(forPrint);

}