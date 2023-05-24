#include "ShowApplyInfoUI.h"


void ShowApplyInfoUI::showApplyInfo(ifstream* fin, ofstream* fout, Member* currentUser){

    //4.3. ���� ���� ��ȸ

    string forPrint[20]; //UI ��� �迭
    GeneralMember* generalMember = (GeneralMember*)currentUser; //�Ϲ�ȸ������ �� ��ȯ

    //Control ���� & ����
    ShowApplyInfoControl* showApplyInfoControl = new ShowApplyInfoControl();
    showApplyInfoControl->showApplyInfo(generalMember, forPrint);

    //UI ���
    *fout << "4.3. ���� ���� ��ȸ\n";
    for (int i = 0; forPrint[i] != ""; i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout << "\n";

}