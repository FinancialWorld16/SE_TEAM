#include "AddNewRecruitmentControl.h"

//채용 정보 등록
void AddNewRecruitmentControl::addNewRecruitment(CompanyMember* companyMember, string workName, string personNum, string deadline){

	companyMember->addNewRecruitment(workName, personNum, deadline);

}