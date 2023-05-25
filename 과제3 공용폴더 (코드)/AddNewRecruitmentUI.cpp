#include "AddNewRecruitmentUI.h"

//3.1. 채용 정보 등록
void AddNewRecruitmentUI::addNewRecruitment(ifstream* fin, ofstream* fout, Member* currentUser){

    string workName, personNum, deadline;
    CompanyMember* companyMember = (CompanyMember*)currentUser; //일반회원으로 형 변환

    *fin >> workName >> personNum >> deadline;

    //Control 생성 & 실행
    AddNewRecruitmentControl* addNewRecruitmentControl = new AddNewRecruitmentControl();
    addNewRecruitmentControl->addNewRecruitment(companyMember, workName, personNum, deadline);

    //UI 출력
    *fout << "3.1. 채용 정보 등록\n> " << workName << " " << personNum << " " << deadline << endl;
    *fout << "\n";


}