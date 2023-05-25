#include "WithdrawalUI.h"

//1.2 È¸¿øÅ»Åð
void WithdrawalUI::withdrawal(ifstream* fin, ofstream* fout, Member* currentUser){

    //Control »ý¼º & ½ÇÇà
    WithdrawalControl* withdrawalControl = new WithdrawalControl();
    withdrawalControl->deleteUserInfo(currentUser);

    //UI Ãâ·Â
    *fout << "1.2. È¸¿øÅ»Åð\n> " << currentUser->getId();
    *fout << "\n";

}