#include "Recruitment.h"

//기본 생성자
Recruitment::Recruitment(){

}

//매개변수가 있는 생성자
Recruitment::Recruitment(string companyName, string businessCode, string workName, string personNum, string deadline){

	this->companyName=companyName;
	this->businessCode=businessCode;
	this->workName=workName;
	this->personNum=personNum;
	this->deadline=deadline;

}

//채용정보(업무, 인원수, 신청 마감일) 리턴
string Recruitment::getRecruitmentInfo(){

	return workName+" "+personNum+" "+deadline;

}

//회사이름 리턴
string Recruitment::getCompanyName(){

	return companyName;

}

//사업자 번호 리턴
string Recruitment::getBusinessCode(){

	return businessCode;

}

//채용 상세 정보 리턴
string Recruitment::getRecruitmentDetails() {

	return companyName + " " + businessCode + " " + workName + " " + personNum + " " + deadline;

}

//지원 처리
void Recruitment::applied(){

	applicantNum++; //특정 채용정보가 지원처리 되면 지원자 수를 증가시킨다

}

//지원 시 회사이름, 사업자번호, 업무 정보 리턴
string Recruitment::applyReturn() {

	return companyName + " " + businessCode + " " + workName;

}

//지원자 수 리턴
int Recruitment::getNumberOfApplicants(){

	return applicantNum;

}

//지원 취소 처리
void Recruitment::applyCanceled(){

	applicantNum--;

}

//지원 취소 시 회사이름, 사업자번호, 업무 정보 리턴
string Recruitment::applyCancelReturn() {

	return companyName + " " + businessCode + " " + workName;

}

//업무명 리턴
string Recruitment::getWorkName(){

	return workName;
}