#include "Recruitments.h"

//��ü ä������ ����Ʈ ����
Recruitment** Recruitments::getRecruitmetList(){

	return recruitmentList;

}

//ȸ��ȸ���� ä������ ����Ʈ �߰�
void Recruitments::addPersonalRecruitmentList(Recruitment* recruitmentList){

	this->recruitmentList[cnt++]=recruitmentList; //����Ʈ�� Ư�� ȸ��ȸ���� ä������ ����Ʈ �ּҸ� ����

}

//ȸ��ȸ���� ����Ʈ �� ����
int Recruitments::getCnt(){

	return cnt;

}