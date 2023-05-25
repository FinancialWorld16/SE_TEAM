#include "ApplyUI.h"

//4.2. ä�� ����
void ApplyUI::apply(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments){

    string forPrint[20]; //UI ��¿� string �迭
    string businessCode;
    GeneralMember* generalMember = (GeneralMember*)currentUser; //�Ϲ�ȸ������ �� ��ȯ

    *fin >> businessCode;

    //Control ���� & ����
    ApplyControl* applyControl = new ApplyControl();
    applyControl->apply(generalMember, businessCode, recruitments, forPrint);

    //UI ���
    *fout << "4.2. ä�� ����\n";
    for (int i = 0; forPrint[i] != ""; i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout << "\n";

}