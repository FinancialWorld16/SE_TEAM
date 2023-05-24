#include "GeneralMember.h"

GeneralMember::GeneralMember(){

}

GeneralMember::GeneralMember(string name, string code, string id, string pw): Member(name, id, pw){
	this->personalCode=code;
}

Member* GeneralMember::createNewAccount(string name, string code, string id, string pw, Recruitments* recruitments){

	GeneralMember *generalMember = new GeneralMember(name, code, id, pw);


	return generalMember;

}


void GeneralMember::apply(string businessCode, Recruitments* recruitments){

	Recruitment** recruitmentList = recruitments->getRecruitmetList();

	int j = 0;
	for (int i = 0; i < recruitments->getCnt(); i++) { //전체 리스트에서,
		if (recruitmentList[i][j].getBusinessCode() == businessCode) {
			for (int j = 0; recruitmentList[i][j].getCompanyName() != ""; j++) { //회사이름이 없으면 중단할거임
				recruitmentList[i][j].applied();
				applyList[applyCnt++]= &recruitmentList[i][j];
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

	//개인 리스트에서 삭제 로직
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

void GeneralMember::getApplyInfoStatistics(string* forPrint){

	string workNameList[20]; //중복 제거해서 업무명을 저장
	int cnt[20]={0}; //업무별 지원횟수를 저장


	//업무명을 중복 제거하는 로직
	int k=0;
	for(int i=0; i<applyCnt; i++){ //지원리스트 모두 조회하면서
		int check = 0; //똑같은 놈이 있는지 없는지 체크. 끝까지 0이면 새로 추가
		for(int j=0; workNameList[j]!=""; j++){
			if(workNameList[j]==applyList[i]->getWorkName()){
				check=1; //동일한 이름이 존재하면 check bit를 1로 on
			}
		}
		if(check==0){
			workNameList[k++]= applyList[i]->getWorkName();
		}
	}
	

	//중복제거된 업무명별로 지원 횟수 카운트
	for(int i=0; workNameList[i]!=""; i++){
		for(int j=0; j<applyCnt; j++){
			if(workNameList[i]== applyList[j]->getWorkName()){
				cnt[i]++;
			}
		}
	}


	//지원명+지원횟수 string 배열을 리턴
	for(int i=0; workNameList[i]!=""; i++){
		forPrint[i]=workNameList[i]+" "+to_string(cnt[i]);
	}

}