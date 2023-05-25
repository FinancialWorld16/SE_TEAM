#include "ShowStatisticsUI.h"

void ShowStatisticsUI::showStatistics(ifstream* fin, ofstream* fout, Member* currentUser){

    //5.1. 지원 정보 통계

    string forPrint[20]; //UI 출력용 string 배열

    //Case 1: 회사회원 일때, Control 생성 & 실행
    if (typeid(CompanyMember) == typeid(*currentUser)) {
        ShowRecruitmentStatisticsControl* showRecruitmentStatisticsControl = new ShowRecruitmentStatisticsControl(); //회사회원용 control
        CompanyMember* companyMember = (CompanyMember*)currentUser;
        showRecruitmentStatisticsControl->showStatistics(companyMember, forPrint);
    }

    //Case 2: 일반회원 일때, Control 생성 & 실행
    else {
        ShowApplyInfoStatisticsControl* showApplyInfoStatisticsControl = new ShowApplyInfoStatisticsControl(); //일반회원용
        GeneralMember* generalMember = (GeneralMember*)currentUser;
        showApplyInfoStatisticsControl->showStatistics(generalMember, forPrint);
    }

    //UI 출력
    *fout << "5.1. 지원 정보 통계\n";
    for (int i = 0; forPrint[i] != ""; i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout<<"\n";

}