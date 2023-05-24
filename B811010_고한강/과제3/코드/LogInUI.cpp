#include "LogInUI.h"

void LogInUI::logIn(ifstream* fin, ofstream* fout, Member* currentUser){

    //2.1 로그인
    string id, pw;
    bool isValid;

    *fin >> id >> pw;

    //Control 생성 & 실행
    LogInControl* logInControl = new LogInControl();
    isValid=logInControl->logIn(id, pw, currentUser);

    //UI 출력
    if(isValid){
        *fout << "2.1. 로그인\n> " << id << " " << pw << endl;
        *fout << "\n";
    }
    else{
        *fout << "2.1. 로그인 실패!\n> " << id << " " << pw << endl;
        *fout << "\n";
    }

}