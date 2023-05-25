#include "ShowRecruitmentsControl.h"

void ShowRecruitmentsControl::showRecruitments(string companyName, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList(); //DB에서 전체 리스트 가져오기

	for (int i = 0; i < recruitments->getCnt(); i++) { //전체 리스트에서,
		if (recruitmentList[i][0].getCompanyName() == companyName) { //회사이름이 일치하는 놈만 출력배열에...
			for (int j = 0; recruitmentList[i][j].getCompanyName()!=""; j++) { //회사이름이 없으면 중단할거임
				forPrint[j] = recruitmentList[i][j].getRecruitmentDetails(); //UI 출력용 배열에 저장...
			}
		}
	}

}