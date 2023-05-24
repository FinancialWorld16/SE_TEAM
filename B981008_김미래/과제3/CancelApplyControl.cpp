#include "CancelApplyControl.h"

/*
	�Լ� �̸� : CancelApplyControl::cancelApply()
	���	  : ������ ����ϱ� ���� ����� ���� ������ �迭�� ������ ��, ���� ��� �Լ��� �θ���. 
*/
void CancelApplyControl::cancelApply(GeneralMember* generalMember, string businessCode, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList(); //��ü ä�� ����Ʈ ������

	//���� ��� ���� ��������Ʈ���� �̸� ����� ������ �����ϴ� ���� 
	int j = 0;
	for (int i = 0; i < generalMember->getApplyCnt(); i++) { // �ش� ȸ���� ����Ƚ����ŭ �ݺ�
		if (generalMember->listApplyInfo()[i]->getBusinessCode() == businessCode) { //���޹��� businessCode�� ȸ���� ��������Ʈ�� businessCode�� ���Ͽ� ���ٸ�,
			forPrint[j] = generalMember->listApplyInfo()[i]->applyCancelReturn(); // �ش� ���� ������ �迭�� ������
			j++;
		}
	}

	generalMember->cancelApply(businessCode, recruitments); //���� ����Լ� �θ�

	//int j = 0;
	//for (int i = 0; i < recruitments->getCnt(); i++) {
	//	if (recruitmentList[i][0].getBusinessCode() == businessCode) {
	//		for (int j = 0; recruitmentList[i][j].getCompanyName() != ""; j++) { //ȸ���̸��� ������ �ߴ��Ұ���
	//			forPrint[j] = recruitmentList[i][j].applyCancelReturn();
	//		}
	//	}
	//}


}