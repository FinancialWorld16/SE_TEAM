#include "CompanyMember.h"

CompanyMember::CompanyMember() {

}

CompanyMember::CompanyMember(string name, string code, string id, string pw) : Member(name, id, pw) {

	this->businessCode = code;

}


Member* CompanyMember::createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments) {

	CompanyMember* companyMember = new CompanyMember(name, code, id, pw);

	recruitments->addPersonalRecruitmentList(companyMember->recruitmentList); //��ü DB�� �� ȸ��ȸ���� ä������ ����Ʈ �ּ� ����

	return companyMember;

}


void CompanyMember::addNewRecruitment(string workName, string personNum, string deadline) {

	pRecruitment = new Recruitment(this->getName(), this->businessCode, workName, personNum, deadline);
	this->recruitmentList[numberOfRecruitments++] = *pRecruitment;

}

int CompanyMember::getNumberOfRecruitments() {

	return numberOfRecruitments;

}


Recruitment* CompanyMember::listRecruitments() {

	return recruitmentList;
}


void CompanyMember::getRecruitmentStatistics(string* forPrint) {

	for (int i = 0; i < numberOfRecruitments; i++) {
		forPrint[i] = recruitmentList[i].getWorkName() + " " + to_string(recruitmentList[i].getNumberOfApplicants());
	}

}