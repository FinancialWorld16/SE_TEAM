#include "WithdrawalUI.h"

void WithdrawalUI::withdrawal(ifstream* fin, ofstream* fout, Member* currentUser){

    //Control ���� & ����
    WithdrawalControl* withdrawalControl = new WithdrawalControl();
    withdrawalControl->deleteUserInfo(currentUser);

    //UI ���
    *fout << "1.2. ȸ��Ż��\n> " << currentUser->getId();
    *fout << "\n";

}