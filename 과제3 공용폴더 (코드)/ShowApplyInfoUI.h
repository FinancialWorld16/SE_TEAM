#include "ShowApplyInfoControl.h"
#include "Member.h"
#include <fstream>

//�������� ��ȸ Boundary Class
class ShowApplyInfoUI{

public:

	static void showApplyInfo(ifstream* fin, ofstream* fout, Member* currentUser);

};