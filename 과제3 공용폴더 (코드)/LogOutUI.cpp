#include "LogOutUI.h"

//2.2. 로그아웃
void LogOutUI::logOut(ifstream* fin, ofstream* fout, Member* currentUser){

    //Control 생성 & 실행
    LogOutControl* logOutControl=new LogOutControl();
    logOutControl->logOut(currentUser);

    //UI 출력
    *fout << "2.2. 로그아웃\n> " << currentUser->getId() << endl;
    *fout << "\n";

}