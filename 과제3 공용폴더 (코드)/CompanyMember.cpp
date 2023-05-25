#include "CompanyMember.h"

//기본 생성자
CompanyMember::CompanyMember(){

}

//매개변수가 있는 생성자
CompanyMember::CompanyMember(string name, string code, string id, string pw): Member(name, id, pw){

	this->businessCode=code;

}

//회원가입 (회사회원)
Member* CompanyMember::createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments){

	CompanyMember *companyMember=new CompanyMember(name, code, id, pw);

	recruitments->addPersonalRecruitmentList(companyMember->recruitmentList); //전체 채용정보 리스트에 이 회사회원의 채용정보 리스트 주소 저장

	return companyMember;

}

//채용정보 등록
void CompanyMember::addNewRecruitment(string workName, string personNum, string deadline){

	pRecruitment=new Recruitment(this->getName(), this->businessCode, workName, personNum, deadline);

	this->recruitmentList[numberOfRecruitments++]=*pRecruitment; //새로운 채용정보를 자신의 채용정보 리스트에 저장

}

//채용정보 개수 리턴
int CompanyMember::getNumberOfRecruitments(){
	
	return numberOfRecruitments;

}

//채용정보 리스트 리턴
Recruitment* CompanyMember::listRecruitments(){

	return recruitmentList;
}

//채용정보 통계
void CompanyMember::getRecruitmentStatistics(string* forPrint){

	for(int i=0; i<numberOfRecruitments; i++){
		forPrint[i]=recruitmentList[i].getWorkName()+" "+to_string(recruitmentList[i].getNumberOfApplicants());
	}

}