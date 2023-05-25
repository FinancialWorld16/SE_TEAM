#include "LogOutUI.h"

void LogOutUI::logOut(ifstream* fin, ofstream* fout, Member* currentUser){

    //2.2. 로그아웃

    LogOutControl* logOutControl=new LogOutControl();
    logOutControl->logOut(currentUser);

    //UI 출력
    *fout << "2.2. 로그아웃\n> " << currentUser->getId() << endl;
    *fout << "\n";

}