#include "ShowRecruitmentsUI.h"

//4.1. ä�� ���� �˻�
void ShowRecruitmentsUI::showRecruitments(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments){

    //Ÿ�� üũ�Ͽ� �Ϲ�ȸ���� �����ϰ�!
    if (typeid(*currentUser) != typeid(GeneralMember)) {
        *fout << "�Ϲ� ȸ���� �˻� �����մϴ�." << endl;
        *fout << "\n";
        return;
    }

    string forPrint[20]; //UI ��¿� string �迭
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