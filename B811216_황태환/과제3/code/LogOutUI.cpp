#include "LogOutUI.h"

void LogOutUI::logOut(ifstream* fin, ofstream* fout, Member* currentUser){

    //2.2. �α׾ƿ�

    LogOutControl* logOutControl=new LogOutControl();
    logOutControl->logOut(currentUser);

    //UI ���
    *fout << "2.2. �α׾ƿ�\n> " << currentUser->getId() << endl;
    *fout << "\n";

}