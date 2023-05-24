#include "ApplyControl.h"

void ApplyControl::apply(GeneralMember* generalmember, string businessCode, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList(); //ȸ�縮��Ʈ �޾ƿ���

	generalmember->apply(businessCode, recruitments);

	
	int j = 0;
	for (int i = 0; i < recruitments->getCnt(); i++) { //��ü ����Ʈ����,
		if (recruitmentList[i][j].getBusinessCode() == businessCode) {
			for (int j = 0; recruitmentList[i][j].getCompanyName() != ""; j++) { //ȸ���̸��� ������ �ߴ�
				forPrint[j] = recruitmentList[i][j].applyReturn();  //�������� �� ȸ�� ���� ���
			}
		}
	}

}