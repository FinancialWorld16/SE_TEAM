#include "Recruitments.h"

Recruitment** Recruitments::getRecruitmetList() {

	return recruitmentList;

}

void Recruitments::addPersonalRecruitmentList(Recruitment* recruitmentList) {

	this->recruitmentList[cnt++] = recruitmentList;

}

int Recruitments::getCnt() {

	return cnt;

}