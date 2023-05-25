#ifndef RECRUITMENT_H
#define RECRUITMENT_H
#include <iostream>
#include <string>
using namespace std;

//채용정보 Class
class Recruitment{

private:

	string companyName; //회사이름

	string businessCode; //사업자 번호

	string workName; //업무

	string personNum; //인원 수

	string deadline; //신청 마감일

	int applicantNum=0;

public:

	Recruitment();

	Recruitment(string companyName, string businessCode, string workName, string personNum, string deadline);

	string getRecruitmentInfo();

	string getCompanyName();

	string getBusinessCode();

	string getWorkName();

	string getRecruitmentDetails();

	void applied(); //지원 받으면 지원자 수++;

	string applyReturn(); //지원 완료하면 보여주는 정보...

	int getNumberOfApplicants();

	void applyCanceled();

	string applyCancelReturn(); //지원 취소하면 보여주는 정보...

	/*void setDetails();
	void setDeadline();
	void deleteRecruitment();*/
	
};
#endif