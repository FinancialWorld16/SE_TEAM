#include "Recruitments.h"

//전체 채용정보 리스트 리턴
Recruitment** Recruitments::getRecruitmetList(){

	return recruitmentList;

}

//회사회원의 채용정보 리스트 추가
void Recruitments::addPersonalRecruitmentList(Recruitment* recruitmentList){

	this->recruitmentList[cnt++]=recruitmentList; //리스트에 특정 회사회원의 채용정보 리스트 주소를 저장

}

//회사회원의 리스트 수 리턴
int Recruitments::getCnt(){

	return cnt;

}