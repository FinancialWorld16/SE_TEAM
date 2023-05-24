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
	for (int i = 0; i < recruitments->getCnt(); i++) { //��ü ����Ʈ����,
		if (recruitmentList[i][j].getBusinessCode() == businessCode) {
			for (int j = 0; recruitmentList[i][j].getCompanyName() != ""; j++) { //ȸ���̸��� ������ �ߴ��Ұ���
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

	//���� ����Ʈ���� ���� ����
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

	string workNameList[20]; //�ߺ� �����ؼ� �������� ����
	int cnt[20]={0}; //������ ����Ƚ���� ����


	//�������� �ߺ� �����ϴ� ����
	int k=0;
	for(int i=0; i<applyCnt; i++){ //��������Ʈ ��� ��ȸ�ϸ鼭
		int check = 0; //�Ȱ��� ���� �ִ��� ������ üũ. ������ 0�̸� ���� �߰�
		for(int j=0; workNameList[j]!=""; j++){
			if(workNameList[j]==applyList[i]->getWorkName()){
				check=1; //������ �̸��� �����ϸ� check bit�� 1�� on
			}
		}
		if(check==0){
			workNameList[k++]= applyList[i]->getWorkName();
		}
	}
	

	//�ߺ����ŵ� �������� ���� Ƚ�� ī��Ʈ
	for(int i=0; workNameList[i]!=""; i++){
		for(int j=0; j<applyCnt; j++){
			if(workNameList[i]== applyList[j]->getWorkName()){
				cnt[i]++;
			}
		}
	}


	//������+����Ƚ�� string �迭�� ����
	for(int i=0; workNameList[i]!=""; i++){
		forPrint[i]=workNameList[i]+" "+to_string(cnt[i]);
	}

}