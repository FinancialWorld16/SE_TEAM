#include "CancelApplyUI.h"

//4.4. ���� ���
void CancelApplyUI::cancelApply(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments){ 


    string forPrint[20]; //UI ��¿� string �迭
    string businessCode;
    GeneralMember* generalMember = (GeneralMember*)currentUser; //�Ϲ�ȸ������ �� ��ȯ

    *fin >> businessCode;

    //Control ���� & ����
    CancelApplyControl* cancelApplyControl = new CancelApplyControl();
    cancelApplyControl->cancelApply(generalMember, businessCode, recruitments, forPrint);

    //UI ���
    *fout << "4.4. ���� ���\n";
    for (int i = 0; forPrint[i] != ""; i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout << "\n";


}