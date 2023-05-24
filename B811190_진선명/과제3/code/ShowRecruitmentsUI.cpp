#include "ShowRecruitmentsUI.h"

//ä�� ���� �˻�
void ShowRecruitmentsUI::showRecruitments(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments){

    //4.1. ä�� ���� �˻� 

    //Ÿ�� üũ�Ͽ� �Ϲ�ȸ���� ����
    if (typeid(*currentUser) != typeid(GeneralMember)) {
        *fout << "�Ϲ� ȸ���� �˻� �����մϴ�." << endl;
        *fout << "\n";
        return;
    }

    string forPrint[20]; //UI ��� 
    string companyName;

    *fin >> companyName;

    //Control ���� & ����
    ShowRecruitmentsControl* showRecruitmentsControl = new ShowRecruitmentsControl();
    showRecruitmentsControl->showRecruitments(companyName, recruitments, forPrint);

    //UI ���
    *fout << "4.1. ä�� ���� �˻�\n";
    for (int i = 0; forPrint[i] != ""; i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout << "\n";

}