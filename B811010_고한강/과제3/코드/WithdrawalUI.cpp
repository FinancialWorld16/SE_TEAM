#include "WithdrawalUI.h"

void WithdrawalUI::withdrawal(ifstream* fin, ofstream* fout, Member* currentUser) {

    
    WithdrawalControl* withdrawalControl = new WithdrawalControl();
    withdrawalControl->deleteUserInfo(currentUser);

    
    *fout << "1.2. ȸ��Ż��\n> " << currentUser->getId();
    *fout << "\n";

}