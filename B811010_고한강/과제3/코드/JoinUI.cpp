#include "JoinUI.h"

Member* JoinUI::join(ifstream* fin, ofstream* fout, Recruitments* recruitments){

    int memberType;
    string name, code, id, pw;

    Member* pMember;

    *fin >> memberType >> name >> code >> id >> pw;

    //Control ���� & ����
    JoinControl* joinControl = new JoinControl();
    pMember = joinControl->createNewAccount(memberType, name, code, id, pw, recruitments);

    //UI ���
    *fout << "1.1. ȸ������\n> " << name << " " << code << " " << id << " " << pw << endl;
    *fout << "\n";

    return pMember;

}