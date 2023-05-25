#include "ShowMyRecruitmentsControl.h"

//기본 생성자
ShowMyRecruitmentsControl::ShowMyRecruitmentsControl(){

		//...//
}

//채용정보 조회
void ShowMyRecruitmentsControl::showRecruitments(CompanyMember* companyMember, string* forPrint){

	
	Recruitment* recruitmentList = companyMember->listRecruitments(); //채용정보 리스트 받아오기

	//채용정보 한건 한건 반복문으로 정보 받아오기
	for (int i = 0; i<companyMember->getNumberOfRecruitments(); i++) {
		forPrint[i]=recruitmentList[i].getRecruitmentInfo();
	}

}