#include "ShowStatisticsUI.h"

void ShowStatisticsUI::showStatistics(ifstream* fin, ofstream* fout, Member* currentUser){

    //5.1. ���� ���� ���

    string forPrint[20]; //UI ��¿� string �迭

    //Case 1: ȸ��ȸ�� �϶�, Control ���� & ����
    if (typeid(CompanyMember) == typeid(*currentUser)) {
        ShowRecruitmentStatisticsControl* showRecruitmentStatisticsControl = new ShowRecruitmentStatisticsControl(); //ȸ��ȸ���� control
        CompanyMember* companyMember = (CompanyMember*)currentUser;
        showRecruitmentStatisticsControl->showStatistics(companyMember, forPrint);
    }

    //Case 2: �Ϲ�ȸ�� �϶�, Control ���� & ����
    else {
        ShowApplyInfoStatisticsControl* showApplyInfoStatisticsControl = new ShowApplyInfoStatisticsControl(); //�Ϲ�ȸ����
        GeneralMember* generalMember = (GeneralMember*)currentUser;
        showApplyInfoStatisticsControl->showStatistics(generalMember, forPrint);
    }

    //UI ���
    *fout << "5.1. ���� ���� ���\n";
    for (int i = 0; forPrint[i] != ""; i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout<<"\n";

}