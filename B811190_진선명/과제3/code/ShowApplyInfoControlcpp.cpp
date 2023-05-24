#include "ShowApplyInfoControl.h"

void ShowApplyInfoControl::showApplyInfo(GeneralMember* generalMember, string* forPrint) {

	Recruitment** recruitmentList = generalMember->listApplyInfo(); //지원 회사 리스트 받아옴

	for (int i = 0; i < generalMember->getApplyCnt(); i++) {
		forPrint[i] = recruitmentList[i]->getRecruitmentDetails(); //지원한 회사의 정보들을 저장
	}

}