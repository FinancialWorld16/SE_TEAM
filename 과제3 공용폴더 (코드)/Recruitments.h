#ifndef RECRUITMENTS_H
#define RECRUITMENTS_H
#include "Recruitment.h"
#include <string>

//전체 채용정보를 저장하는 Class (회사회원들의 채용정보 리스트의 주소를 가짐)
class Recruitments{
private:

	Recruitment* recruitmentList[50];

	int cnt=0;

public:
	
	Recruitment** getRecruitmetList();

	void addPersonalRecruitmentList(Recruitment* recruitmentList);

	int getCnt();

};
#endif