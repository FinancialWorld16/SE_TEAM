#include "CancelApplyControl.h"

void CancelApplyControl::cancelApply(GeneralMember* generalMember, string businessCode, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList(); //전체 채용 리스트

	//출력할 정보를 내 지원리스트에서 미리 저장... 왜냐하면 지원 취소를 하면 내 지원리스트에서 목록들이 빠지니까 일단 정보먼저 빼기
	int j = 0;
	for (int i = 0; i < generalMember->getApplyCnt(); i++) {
		if (generalMember->listApplyInfo()[i]->getBusinessCode() == businessCode) {
			forPrint[j] = generalMember->listApplyInfo()[i]->applyCancelReturn();
			j++;
		}
	}

	generalMember->cancelApply(businessCode, recruitments);

}