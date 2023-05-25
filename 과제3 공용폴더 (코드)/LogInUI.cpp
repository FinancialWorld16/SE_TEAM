#include "LogInUI.h"

//2.1 �α���
void LogInUI::logIn(ifstream* fin, ofstream* fout, Member* currentUser){

    string id, pw;
    bool isValid;

    *fin >> id >> pw;

    //Control ���� & ����
    LogInControl* logInControl = new LogInControl();
    isValid=logInControl->logIn(id, pw, currentUser);

    //UI ���
    if(isValid){
        *fout << "2.1. �α���\n> " << id << " " << pw << endl;
        *fout << "\n";
    }
    else{
        *fout << "2.1. �α��� ����!\n> " << id << " " << pw << endl;
        *fout << "\n";
    }

}