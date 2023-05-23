#ifndef RECRUITMENT_H
#define RECRUITMENT_H
#include <iostream>
#include <string>
using namespace std;

class Recruitment {

private:

	string companyName; //ȸ���̸�

	string businessCode; //����� ��ȣ

	string workName; //����

	string personNum; //�ο� ��

	string deadline; //��û ������

	int applicantNum = 0;

public:

	Recruitment();

	Recruitment(string companyName, string businessCode, string workName, string personNum, string deadline);

	string getRecruitmentInfo();

	string getCompanyName();

	string getBusinessCode();

	string getWorkName();

	string getRecruitmentDetails();

	void applied();

	string applyReturn();

	int getNumberOfApplicants();

	void applyCanceled();

	string applyCancelReturn();

};
#endif