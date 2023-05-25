#include "AddNewRecruitmentUI.h"


void AddNewRecruitmentUI::addNewRecruitment(ifstream* fin, ofstream* fout, Member* currentUser){

    //3.1. ä�� ���� ���
    string workName, personNum, deadline;

    //Control ���� & ����
    CompanyMember* companyMember = (CompanyMember*)currentUser;

    *fin >> workName >> personNum >> deadline;

    AddNewRecruitmentControl* addNewRecruitmentControl = new AddNewRecruitmentControl();
    addNewRecruitmentControl->addNewRecruitment(companyMember, workName, personNum, deadline);

    //UI ���
    *fout << "3.1. ä�� ���� ���\n> " << workName << " " << personNum << " " << deadline << endl;
    *fout << "\n";


}