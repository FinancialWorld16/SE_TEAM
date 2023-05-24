#include "CompanyMember.h"

CompanyMember::CompanyMember(){

}

CompanyMember::CompanyMember(string name, string code, string id, string pw): Member(name, id, pw){

	this->businessCode=code;

}


Member* CompanyMember::createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments){

	CompanyMember *companyMember=new CompanyMember(name, code, id, pw);

	recruitments->addPersonalRecruitmentList(companyMember->recruitmentList); //전체 DB에 이 회사회원의 채용정보 리스트 주소 저장

	return companyMember;

}


void CompanyMember::addNewRecruitment(string workName, string personNum, string deadline){

	pRecruitment=new Recruitment(this->getName(), this->businessCode, workName, personNum, deadline);
	this->recruitmentList[numberOfRecruitments++]=*pRecruitment;

}

int CompanyMember::getNumberOfRecruitments(){
	
	return numberOfRecruitments;

}


Recruitment* CompanyMember::listRecruitments(){

	return recruitmentList;
}

/*
함수 이름 : CompanyMember::getRecruitmentStatistics()
기능 : 업무명과 해당 업무의 지원 횟수를 배열에 저장
*/
void CompanyMember::getRecruitmentStatistics(string* forPrint){

	for(int i=0; i<numberOfRecruitments; i++){ // 채용 정보 개수만큼 반복
		forPrint[i]=recruitmentList[i].getWorkName()+" "+to_string(recruitmentList[i].getNumberOfApplicants());
	}

}