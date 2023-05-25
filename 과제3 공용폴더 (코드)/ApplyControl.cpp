#include "ApplyControl.h"

void ApplyControl::apply(GeneralMember* generalmember, string businessCode, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList();

	generalmember->apply(businessCode, recruitments);

	
	int j = 0;
	for (int i = 0; i < recruitments->getCnt(); i++) { //��ü ����Ʈ����,
		if (recruitmentList[i][j].getBusinessCode() == businessCode) {
			for (int j = 0; recruitmentList[i][j].getCompanyName() != ""; j++) { //ȸ���̸��� ������ �ߴ��Ұ���
				forPrint[j] = recruitmentList[i][j].applyReturn();
			}
		}
	}

}