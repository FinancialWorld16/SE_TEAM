#include "CancelApplyUI.h"

//4.4. 지원 취소
void CancelApplyUI::cancelApply(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments){ 


    string forPrint[20]; //UI 출력용 string 배열
    string businessCode;
    GeneralMember* generalMember = (GeneralMember*)currentUser; //일반회원으로 형 변환

    *fin >> businessCode;

    //Control 생성 & 실행
    CancelApplyControl* cancelApplyControl = new CancelApplyControl();
    cancelApplyControl->cancelApply(generalMember, businessCode, recruitments, forPrint);

    //UI 출력
    *fout << "4.4. 지원 취소\n";
    for (int i = 0; forPrint[i] != ""; i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout << "\n";


}