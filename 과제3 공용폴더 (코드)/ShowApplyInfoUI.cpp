#include "ShowApplyInfoUI.h"

//4.3. 지원 정보 조회
void ShowApplyInfoUI::showApplyInfo(ifstream* fin, ofstream* fout, Member* currentUser){

    string forPrint[20]; //UI 출력용 string 배열
    GeneralMember* generalMember = (GeneralMember*)currentUser; //일반회원으로 형 변환

    //Control 생성 & 실행
    ShowApplyInfoControl* showApplyInfoControl = new ShowApplyInfoControl();
    showApplyInfoControl->showApplyInfo(generalMember, forPrint);

    //UI 출력
    *fout << "4.3. 지원 정보 조회\n";
    for (int i = 0; forPrint[i] != ""; i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout << "\n";

}