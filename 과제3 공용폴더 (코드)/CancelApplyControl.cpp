#include "CancelApplyControl.h"

void CancelApplyControl::cancelApply(GeneralMember* generalMember, string businessCode, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList(); //��ü ä�� ����Ʈ

	//����� ������ �� ��������Ʈ���� �̸� ����... �ֳ��ϸ� ���� ��Ҹ� �ϸ� �� ��������Ʈ���� ��ϵ��� �����ϱ� �ϴ� �������� ����
	int j = 0;
	for (int i = 0; i < generalMember->getApplyCnt(); i++) {
		if (generalMember->listApplyInfo()[i]->getBusinessCode() == businessCode) {
			forPrint[j] = generalMember->listApplyInfo()[i]->applyCancelReturn();
			j++;
		}
	}

	generalMember->cancelApply(businessCode, recruitments);

}