#include "ShowMyRecruitmentsControl.h"

ShowMyRecruitmentsControl::ShowMyRecruitmentsControl(){

		//...//
}


void ShowMyRecruitmentsControl::showRecruitments(CompanyMember* companyMember, string* forPrint){

	//ä������ ����Ʈ �޾ƿ���
	Recruitment* recruitmentList = companyMember->listRecruitments(); 

	//ä������ �Ѱ� �Ѱ� �ݺ������� ���� �޾ƿ���
	for (int i = 0; i<companyMember->getNumberOfRecruitments(); i++) {
		forPrint[i]=recruitmentList[i].getRecruitmentInfo();
	}

}