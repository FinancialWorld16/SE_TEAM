#include "GeneralMember.h"

GeneralMember::GeneralMember() {

}

GeneralMember::GeneralMember(string name, string code, string id, string pw) : Member(name, id, pw) {
	this->personalCode = code;
}

Member* GeneralMember::createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments) {

	GeneralMember* generalMember = new GeneralMember(name, code, id, pw);


	return generalMember;

}


void GeneralMember::apply(string businessCode, Recruitments* recruitments) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList();

	int j = 0;
	for (int i = 0; i < recruitments->getCnt(); i++) { 
		if (recruitmentList[i][j].getBusinessCode() == businessCode) {
			for (int j = 0; recruitmentList[i][j].getCompanyName() != ""; j++) { 
				recruitmentList[i][j].applied();
				applyList[applyCnt++] = &recruitmentList[i][j];
			}
		}
	}

}


Recruitment** GeneralMember::listApplyInfo() {

	return applyList;

}


int GeneralMember::getApplyCnt() {

	return applyCnt;

}


void GeneralMember::cancelApply(string businessCode, Recruitments* recruitments) {

	
	for (int i = 0; i < applyCnt; i++) {
		if (applyList[i]->getBusinessCode() == businessCode) {
			applyList[i]->applyCanceled();
			for (int j = i; j < applyCnt - 1; j++) {
				applyList[j] = applyList[j + 1];
			}
			applyCnt--;
			i--;
		}
	}
}

void GeneralMember::getApplyInfoStatistics(string* forPrint) {

	string workNameList[20];
	int cnt[20] = { 0 };


	//업무명을 중복 제거하는 로직
	int k = 0;
	for (int i = 0; i < applyCnt; i++) { 
		int check = 0; 
		for (int j = 0; workNameList[j] != ""; j++) {
			if (workNameList[j] == applyList[i]->getWorkName()) {
				check = 1; 
			}
		}
		if (check == 0) {
			workNameList[k++] = applyList[i]->getWorkName();
		}
	}


	
	for (int i = 0; workNameList[i] != ""; i++) {
		for (int j = 0; j < applyCnt; j++) {
			if (workNameList[i] == applyList[j]->getWorkName()) {
				cnt[i]++;
			}
		}
	}


	
	for (int i = 0; workNameList[i] != ""; i++) {
		forPrint[i] = workNameList[i] + " " + to_string(cnt[i]);
	}

}