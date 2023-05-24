#include "CancelApplyControl.h"

/*
	함수 이름 : CancelApplyControl::cancelApply()
	기능	  : 지원을 취소하기 전에 출력할 지원 정보를 배열에 저장한 뒤, 지원 취소 함수를 부른다. 
*/
void CancelApplyControl::cancelApply(GeneralMember* generalMember, string businessCode, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList(); //전체 채용 리스트 가져옴

	//지원 취소 전에 지원리스트에서 미리 출력할 정보를 저장하는 과정 
	int j = 0;
	for (int i = 0; i < generalMember->getApplyCnt(); i++) { // 해당 회원의 지원횟수만큼 반복
		if (generalMember->listApplyInfo()[i]->getBusinessCode() == businessCode) { //전달받은 businessCode와 회원의 지원리스트의 businessCode를 비교하여 같다면,
			forPrint[j] = generalMember->listApplyInfo()[i]->applyCancelReturn(); // 해당 지원 정보를 배열에 저장함
			j++;
		}
	}

	generalMember->cancelApply(businessCode, recruitments); //지원 취소함수 부름

	//int j = 0;
	//for (int i = 0; i < recruitments->getCnt(); i++) {
	//	if (recruitmentList[i][0].getBusinessCode() == businessCode) {
	//		for (int j = 0; recruitmentList[i][j].getCompanyName() != ""; j++) { //회사이름이 없으면 중단할거임
	//			forPrint[j] = recruitmentList[i][j].applyCancelReturn();
	//		}
	//	}
	//}


}