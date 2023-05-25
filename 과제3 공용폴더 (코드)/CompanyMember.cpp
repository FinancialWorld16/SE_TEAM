#include "CompanyMember.h"

//�⺻ ������
CompanyMember::CompanyMember(){

}

//�Ű������� �ִ� ������
CompanyMember::CompanyMember(string name, string code, string id, string pw): Member(name, id, pw){

	this->businessCode=code;

}

//ȸ������ (ȸ��ȸ��)
Member* CompanyMember::createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments){

	CompanyMember *companyMember=new CompanyMember(name, code, id, pw);

	recruitments->addPersonalRecruitmentList(companyMember->recruitmentList); //��ü ä������ ����Ʈ�� �� ȸ��ȸ���� ä������ ����Ʈ �ּ� ����

	return companyMember;

}

//ä������ ���
void CompanyMember::addNewRecruitment(string workName, string personNum, string deadline){

	pRecruitment=new Recruitment(this->getName(), this->businessCode, workName, personNum, deadline);

	this->recruitmentList[numberOfRecruitments++]=*pRecruitment; //���ο� ä�������� �ڽ��� ä������ ����Ʈ�� ����

}

//ä������ ���� ����
int CompanyMember::getNumberOfRecruitments(){
	
	return numberOfRecruitments;

}

//ä������ ����Ʈ ����
Recruitment* CompanyMember::listRecruitments(){

	return recruitmentList;
}

//ä������ ���
void CompanyMember::getRecruitmentStatistics(string* forPrint){

	for(int i=0; i<numberOfRecruitments; i++){
		forPrint[i]=recruitmentList[i].getWorkName()+" "+to_string(recruitmentList[i].getNumberOfApplicants());
	}

}