#include "ShowMyRecruitmentsUI.h"

void ShowMyRecruitmentsUI::showMyRecruitments(ifstream* fin, ofstream* fout, Member* currentUser){

    // 3.2. 등록된 채용 정보 조회
    string forPrint[20]; //UI 출력용 string 배열

    CompanyMember* companyMember = (CompanyMember*)currentUser; //*회사원으로 형 변환

    //Control 생성 & 실행
    ShowMyRecruitmentsControl* showMyRecruitmentsControl = new ShowMyRecruitmentsControl();
    showMyRecruitmentsControl->showRecruitments(companyMember, forPrint);

    //UI 출력
    *fout << "3.2. 등록된 채용 정보 조회\n";
    for (int i = 0; i < companyMember->getNumberOfRecruitments(); i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout << "\n";

}