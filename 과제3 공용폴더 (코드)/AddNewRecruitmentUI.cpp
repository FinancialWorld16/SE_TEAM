#include "AddNewRecruitmentUI.h"

//3.1. ä�� ���� ���
void AddNewRecruitmentUI::addNewRecruitment(ifstream* fin, ofstream* fout, Member* currentUser){

    string workName, personNum, deadline;
    CompanyMember* companyMember = (CompanyMember*)currentUser; //�Ϲ�ȸ������ �� ��ȯ

    *fin >> workName >> personNum >> deadline;

    //Control ���� & ����
    AddNewRecruitmentControl* addNewRecruitmentControl = new AddNewRecruitmentControl();
    addNewRecruitmentControl->addNewRecruitment(companyMember, workName, personNum, deadline);

    //UI ���
    *fout << "3.1. ä�� ���� ���\n> " << workName << " " << personNum << " " << deadline << endl;
    *fout << "\n";


}