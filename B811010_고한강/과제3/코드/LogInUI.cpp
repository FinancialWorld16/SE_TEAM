#include "LogInUI.h"

void LogInUI::logIn(ifstream* fin, ofstream* fout) {

    string id, pw;

    *fin >> id >> pw;

    
    LogInControl* logInControl = new LogInControl();
    logInControl->logIn();

    *fout << "2.1. ·Î±×ÀÎ\n> " << id << " " << pw << endl;
    *fout << "\n";

}