#include "ShowApplyInfoControl.h"

void ShowApplyInfoControl::showApplyInfo(GeneralMember* generalMember, string* forPrint) {

	Recruitment** recruitmentList = generalMember->listApplyInfo();

	for (int i = 0; i < generalMember->getApplyCnt(); i++) {
		forPrint[i] = recruitmentList[i]->getRecruitmentDetails();
	}

	//결과를 오름차순으로 정렬
	sort(forPrint, forPrint+generalMember->getApplyCnt());

}