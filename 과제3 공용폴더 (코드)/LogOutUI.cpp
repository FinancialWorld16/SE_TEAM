#include "LogOutUI.h"

//2.2. �α׾ƿ�
void LogOutUI::logOut(ifstream* fin, ofstream* fout, Member* currentUser){

    //Control ���� & ����
    LogOutControl* logOutControl=new LogOutControl();
    logOutControl->logOut(currentUser);

    //UI ���
    *fout << "2.2. �α׾ƿ�\n> " << currentUser->getId() << endl;
    *fout << "\n";

}