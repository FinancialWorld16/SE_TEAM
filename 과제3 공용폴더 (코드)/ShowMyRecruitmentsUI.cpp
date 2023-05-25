#include "ShowMyRecruitmentsUI.h"

// 3.2. ��ϵ� ä�� ���� ��ȸ
void ShowMyRecruitmentsUI::showMyRecruitments(ifstream* fin, ofstream* fout, Member* currentUser){

    string forPrint[20]; //UI ��¿� string �迭

    CompanyMember* companyMember = (CompanyMember*)currentUser; //ȸ��ȸ������ �� ��ȯ

    //Control ���� & ����
    ShowMyRecruitmentsControl* showMyRecruitmentsControl = new ShowMyRecruitmentsControl();
    showMyRecruitmentsControl->showRecruitments(companyMember, forPrint);

    //UI ���
    *fout << "3.2. ��ϵ� ä�� ���� ��ȸ\n";
    for (int i = 0; i < companyMember->getNumberOfRecruitments(); i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout << "\n";

}