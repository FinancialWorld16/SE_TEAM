#include "ApplyControl.h"

//채용지원
void ApplyControl::apply(GeneralMember* generalmember, string businessCode, Recruitments* recruitments, string* forPrint) {

	Recruitment** recruitmentList = recruitments->getRecruitmetList(); //전체 채용정보 리스트

	generalmember->apply(businessCode, recruitments); //지원 처리

	int j = 0;
	for (int i = 0; i < recruitments->getCnt(); i++) { //전체 리스트에서,
		if (recruitmentList[i][j].getBusinessCode() == businessCode) { //사업자 번호가 일치하는 것만 출력배열에...
			for (int j = 0; recruitmentList[i][j].getCompanyName() != ""; j++) { //회사이름이 없으면 stop
				forPrint[j] = recruitmentList[i][j].applyReturn(); //채용 지원시 반환하는 정보들 저장
			}
		}
	}

}