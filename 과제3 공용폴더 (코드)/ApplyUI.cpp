#include "ApplyUI.h"

//4.2. 채용 지원
void ApplyUI::apply(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments){

    string forPrint[20]; //UI 출력용 string 배열
    string businessCode;
    GeneralMember* generalMember = (GeneralMember*)currentUser; //일반회원으로 형 변환

    *fin >> businessCode;

    //Control 생성 & 실행
    ApplyControl* applyControl = new ApplyControl();
    applyControl->apply(generalMember, businessCode, recruitments, forPrint);

    //UI 출력
    *fout << "4.2. 채용 지원\n";
    for (int i = 0; forPrint[i] != ""; i++) {
        *fout << "> " << forPrint[i] << endl;
    }
    *fout << "\n";

}