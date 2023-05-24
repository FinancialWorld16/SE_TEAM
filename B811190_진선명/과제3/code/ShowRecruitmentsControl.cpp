#include "ShowRecruitmentsControl.h"

void ShowRecruitmentsControl::showRecruitments(string companyName, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList(); //Recuruitments���� ��ü ����Ʈ ��������

	for (int i = 0; i < recruitments->getCnt(); i++) { //��ü ȸ�� ����Ʈ
		if (recruitmentList[i][0].getCompanyName() == companyName) { //ȸ���̸��� ��ġ�ϸ� ��� �迭�� �ֱ�
			for (int j = 0; recruitmentList[i][j].getCompanyName()!=""; j++) { //ȸ���̸��� ������ �ߴ�
				forPrint[j] = recruitmentList[i][j].getRecruitmentDetails(); //ã�� ȸ���� ������ UI ��¿� �迭�� ����
			}
		}
	}

}