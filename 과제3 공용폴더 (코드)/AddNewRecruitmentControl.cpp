#include "AddNewRecruitmentControl.h"

//채용정보 등록
void AddNewRecruitmentControl::addNewRecruitment(CompanyMember* compnayMember, string workName, string personNum, string deadline){

	compnayMember->addNewRecruitment(workName, personNum, deadline);

}