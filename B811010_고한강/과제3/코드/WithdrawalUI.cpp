#include "WithdrawalUI.h"

void WithdrawalUI::withdrawal(ifstream* fin, ofstream* fout, Member* currentUser) {

    
    WithdrawalControl* withdrawalControl = new WithdrawalControl();
    withdrawalControl->deleteUserInfo(currentUser);

    
    *fout << "1.2. È¸¿øÅ»Åð\n> " << currentUser->getId();
    *fout << "\n";

}