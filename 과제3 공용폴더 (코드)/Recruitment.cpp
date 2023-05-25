#include "Recruitment.h"

//�⺻ ������
Recruitment::Recruitment(){

}

//�Ű������� �ִ� ������
Recruitment::Recruitment(string companyName, string businessCode, string workName, string personNum, string deadline){

	this->companyName=companyName;
	this->businessCode=businessCode;
	this->workName=workName;
	this->personNum=personNum;
	this->deadline=deadline;

}

//ä������(����, �ο���, ��û ������) ����
string Recruitment::getRecruitmentInfo(){

	return workName+" "+personNum+" "+deadline;

}

//ȸ���̸� ����
string Recruitment::getCompanyName(){

	return companyName;

}

//����� ��ȣ ����
string Recruitment::getBusinessCode(){

	return businessCode;

}

//ä�� �� ���� ����
string Recruitment::getRecruitmentDetails() {

	return companyName + " " + businessCode + " " + workName + " " + personNum + " " + deadline;

}

//���� ó��
void Recruitment::applied(){

	applicantNum++; //Ư�� ä�������� ����ó�� �Ǹ� ������ ���� ������Ų��

}

//���� �� ȸ���̸�, ����ڹ�ȣ, ���� ���� ����
string Recruitment::applyReturn() {

	return companyName + " " + businessCode + " " + workName;

}

//������ �� ����
int Recruitment::getNumberOfApplicants(){

	return applicantNum;

}

//���� ��� ó��
void Recruitment::applyCanceled(){

	applicantNum--;

}

//���� ��� �� ȸ���̸�, ����ڹ�ȣ, ���� ���� ����
string Recruitment::applyCancelReturn() {

	return companyName + " " + businessCode + " " + workName;

}

//������ ����
string Recruitment::getWorkName(){

	return workName;
}