#include "ShowApplyInfoControl.h"

void ShowApplyInfoControl::showApplyInfo(GeneralMember* generalMember, string* forPrint) {

	Recruitment** recruitmentList = generalMember->listApplyInfo(); //���� ȸ�� ����Ʈ �޾ƿ�

	for (int i = 0; i < generalMember->getApplyCnt(); i++) {
		forPrint[i] = recruitmentList[i]->getRecruitmentDetails(); //������ ȸ���� �������� ����
	}

}