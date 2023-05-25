#include "ShowApplyInfoControl.h"

//지원정보 조회
void ShowApplyInfoControl::showApplyInfo(GeneralMember* generalMember, string* forPrint) {

	Recruitment** recruitmentList = generalMember->listApplyInfo(); //지원정보 리스트를 가져옴

	//지원정보의 상세정보를 저장
	for (int i = 0; i < generalMember->getApplyCnt(); i++) {
		forPrint[i] = recruitmentList[i]->getRecruitmentDetails();
	}

	//결과를 오름차순으로 정렬
	sort(forPrint, forPrint+generalMember->getApplyCnt());

}