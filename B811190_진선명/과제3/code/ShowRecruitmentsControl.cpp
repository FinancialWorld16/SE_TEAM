#include "ShowRecruitmentsControl.h"

void ShowRecruitmentsControl::showRecruitments(string companyName, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList(); //Recuruitments에서 전체 리스트 가져오기

	for (int i = 0; i < recruitments->getCnt(); i++) { //전체 회사 리스트
		if (recruitmentList[i][0].getCompanyName() == companyName) { //회사이름이 일치하면 출력 배열에 넣기
			for (int j = 0; recruitmentList[i][j].getCompanyName()!=""; j++) { //회사이름이 없으면 중단
				forPrint[j] = recruitmentList[i][j].getRecruitmentDetails(); //찾은 회사의 정보를 UI 출력용 배열에 저장
			}
		}
	}

}