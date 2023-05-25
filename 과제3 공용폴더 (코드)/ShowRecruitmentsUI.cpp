#include "ShowRecruitmentsUI.h"

//4.1. 채용 정보 검색
void ShowRecruitmentsUI::showRecruitments(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments){

    //타입 체크하여 일반회원만 가능하게!
    if (typeid(*currentUser) != typeid(GeneralMember)) {
        *fout << "일반 회원만 검색 가능합니다." << endl;
        *fout << "\n";
        return;
    }

    string forPrint[20]; //UI 출력용 string 배열
    string companyName;

    *fin >> companyName;

    //Control 생성 & 실행
    ShowRecruitmentsControl* showRecruitmentsControl = new ShowRecruitmentsControl();
    showRecruitmentsControl->showRecruitments(companyName, recruitments, forPrint);

    //UI 출력
    *fout << "4.1. 채용 정보 검색\n";
    for (int i = 0; forPrint[i] != ""; i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout << "\n";

}