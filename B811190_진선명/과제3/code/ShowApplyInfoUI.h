#include "ShowApplyInfoControl.h"
#include "Member.h"
#include <fstream>

//지원 정보 조회 UI
class ShowApplyInfoUI{

public:

	static void showApplyInfo(ifstream* fin, ofstream* fout, Member* currentUser); //지원 정보 조회

};