#include "JoinUI.h"

Member* JoinUI::join(ifstream* fin, ofstream* fout, Recruitments* recruitments){

    int memberType;
    string name, code, id, pw;

    Member* pMember;

    *fin >> memberType >> name >> code >> id >> pw;

    //Control 생성 & 실행
    JoinControl* joinControl = new JoinControl();
    pMember = joinControl->createNewAccount(memberType, name, code, id, pw, recruitments);

    //UI 출력
    *fout << "1.1. 회원가입\n> " << name << " " << code << " " << id << " " << pw << endl;
    *fout << "\n";

    return pMember;

}