#ifndef RECRUITMENTS_H
#define RECRUITMENTS_H
#include "Recruitment.h"
#include <string>

//��ü ä�������� �����ϴ� Class (ȸ��ȸ������ ä������ ����Ʈ�� �ּҸ� ����)
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