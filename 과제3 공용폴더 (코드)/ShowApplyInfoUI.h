#include "ShowApplyInfoControl.h"
#include "Member.h"
#include <fstream>

//지원정보 조회 Boundary Class
class ShowApplyInfoUI{

public:

	static void showApplyInfo(ifstream* fin, ofstream* fout, Member* currentUser);

};