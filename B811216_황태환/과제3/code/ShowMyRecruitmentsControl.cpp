#include "ShowMyRecruitmentsControl.h"

ShowMyRecruitmentsControl::ShowMyRecruitmentsControl(){

		//...//
}


void ShowMyRecruitmentsControl::showRecruitments(CompanyMember* companyMember, string* forPrint){

	//채용정보 리스트 받아오기
	Recruitment* recruitmentList = companyMember->listRecruitments(); 

	//채용정보 한건 한건 반복문으로 정보 받아오기
	for (int i = 0; i<companyMember->getNumberOfRecruitments(); i++) {
		forPrint[i]=recruitmentList[i].getRecruitmentInfo();
	}

}