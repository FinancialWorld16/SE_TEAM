#include "ShowMyRecruitmentsControl.h"

//�⺻ ������
ShowMyRecruitmentsControl::ShowMyRecruitmentsControl(){

		//...//
}

//ä������ ��ȸ
void ShowMyRecruitmentsControl::showRecruitments(CompanyMember* companyMember, string* forPrint){

	
	Recruitment* recruitmentList = companyMember->listRecruitments(); //ä������ ����Ʈ �޾ƿ���

	//ä������ �Ѱ� �Ѱ� �ݺ������� ���� �޾ƿ���
	for (int i = 0; i<companyMember->getNumberOfRecruitments(); i++) {
		forPrint[i]=recruitmentList[i].getRecruitmentInfo();
	}

}