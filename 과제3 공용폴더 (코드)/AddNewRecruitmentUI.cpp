#include "AddNewRecruitmentUI.h"


void AddNewRecruitmentUI::addNewRecruitment(ifstream* fin, ofstream* fout, Member* currentUser){

    //3.1. 채용 정보 등록
    string workName, personNum, deadline;

    //Control 생성 & 실행
    CompanyMember* companyMember = (CompanyMember*)currentUser;

    *fin >> workName >> personNum >> deadline;

    AddNewRecruitmentControl* addNewRecruitmentControl = new AddNewRecruitmentControl();
    addNewRecruitmentControl->addNewRecruitment(companyMember, workName, personNum, deadline);

    //UI 출력
    *fout << "3.1. 채용 정보 등록\n> " << workName << " " << personNum << " " << deadline << endl;
    *fout << "\n";


}