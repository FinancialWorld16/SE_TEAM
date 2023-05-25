#include "ShowApplyInfoControl.h"

//�������� ��ȸ
void ShowApplyInfoControl::showApplyInfo(GeneralMember* generalMember, string* forPrint) {

	Recruitment** recruitmentList = generalMember->listApplyInfo(); //�������� ����Ʈ�� ������

	//���������� �������� ����
	for (int i = 0; i < generalMember->getApplyCnt(); i++) {
		forPrint[i] = recruitmentList[i]->getRecruitmentDetails();
	}

	//����� ������������ ����
	sort(forPrint, forPrint+generalMember->getApplyCnt());

}