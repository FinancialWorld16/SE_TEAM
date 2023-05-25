#include "ShowRecruitmentsControl.h"

void ShowRecruitmentsControl::showRecruitments(string companyName, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList(); //DB���� ��ü ����Ʈ ��������

	for (int i = 0; i < recruitments->getCnt(); i++) { //��ü ����Ʈ����,
		if (recruitmentList[i][0].getCompanyName() == companyName) { //ȸ���̸��� ��ġ�ϴ� �� ��¹迭��...
			for (int j = 0; recruitmentList[i][j].getCompanyName()!=""; j++) { //ȸ���̸��� ������ �ߴ��Ұ���
				forPrint[j] = recruitmentList[i][j].getRecruitmentDetails(); //UI ��¿� �迭�� ����...
			}
		}
	}

}