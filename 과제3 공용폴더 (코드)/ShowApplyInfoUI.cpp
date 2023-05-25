#include "ShowApplyInfoUI.h"

//4.3. ���� ���� ��ȸ
void ShowApplyInfoUI::showApplyInfo(ifstream* fin, ofstream* fout, Member* currentUser){

    string forPrint[20]; //UI ��¿� string �迭
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