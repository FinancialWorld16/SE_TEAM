#include "ApplyControl.h"

//ä������
void ApplyControl::apply(GeneralMember* generalmember, string businessCode, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList(); //��ü ä������ ����Ʈ

	generalmember->apply(businessCode, recruitments); //���� ó��

	int j = 0;
	for (int i = 0; i < recruitments->getCnt(); i++) { //��ü ����Ʈ����,
		if (recruitmentList[i][j].getBusinessCode() == businessCode) { //����� ��ȣ�� ��ġ�ϴ� �͸� ��¹迭��...
			for (int j = 0; recruitmentList[i][j].getCompanyName() != ""; j++) { //ȸ���̸��� ������ stop
				forPrint[j] = recruitmentList[i][j].applyReturn(); //ä�� ������ ��ȯ�ϴ� ������ ����
			}
		}
	}

}