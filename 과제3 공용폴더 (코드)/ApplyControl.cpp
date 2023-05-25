#include "ApplyControl.h"

void ApplyControl::apply(GeneralMember* generalmember, string businessCode, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList();

	generalmember->apply(businessCode, recruitments);

	
	int j = 0;
	for (int i = 0; i < recruitments->getCnt(); i++) { //전체 리스트에서,
		if (recruitmentList[i][j].getBusinessCode() == businessCode) {
			for (int j = 0; recruitmentList[i][j].getCompanyName() != ""; j++) { //회사이름이 없으면 중단할거임
				forPrint[j] = recruitmentList[i][j].applyReturn();
			}
		}
	}

}