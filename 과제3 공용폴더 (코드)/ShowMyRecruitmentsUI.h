#include "ShowMyRecruitmentsControl.h"
#include "Member.h"
#include <fstream>

//ȸ��ȸ���� ä������ ��ȸ Boundary Class
class ShowMyRecruitmentsUI{

public:
	static void showMyRecruitments(ifstream* fin, ofstream* fout, Member* currentUser);

};