#include "WithdrawalUI.h"

void WithdrawalUI::withdrawal(ifstream* fin, ofstream* fout, Member* currentUser){

    //Control 생성 & 실행
    WithdrawalControl* withdrawalControl = new WithdrawalControl();
    withdrawalControl->deleteUserInfo(currentUser);

    //UI 출력
    *fout << "1.2. 회원탈퇴\n> " << currentUser->getId();
    *fout << "\n";

}