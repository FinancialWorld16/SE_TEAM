#include "Recruitment.h"

Recruitment::Recruitment(){

}

Recruitment::Recruitment(string companyName, string businessCode, string workName, string personNum, string deadline){

	this->companyName=companyName;
	this->businessCode=businessCode;
	this->workName=workName;
	this->personNum=personNum;
	this->deadline=deadline;

}

string Recruitment::getRecruitmentInfo(){

	return workName+" "+personNum+" "+deadline;

}

string Recruitment::getCompanyName(){

	return companyName;

}


string Recruitment::getBusinessCode(){

	return businessCode;

}

string Recruitment::getRecruitmentDetails() {

	return companyName + " " + businessCode + " " + workName + " " + personNum + " " + deadline;

}

void Recruitment::applied(){

	applicantNum++;

}


string Recruitment::applyReturn() {

	return companyName + " " + businessCode + " " + workName;

}

int Recruitment::getNumberOfApplicants(){

	return applicantNum;

}

void Recruitment::applyCanceled(){

	applicantNum--;

}

string Recruitment::applyCancelReturn() {

	return companyName + " " + businessCode + " " + workName;

}


string Recruitment::getWorkName(){

	return workName;
}