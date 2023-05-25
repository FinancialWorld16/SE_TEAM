#include "ShowMyRecruitmentsControl.h"
#include "Member.h"
#include <fstream>

//회사회원의 채용정보 조회 Boundary Class
class ShowMyRecruitmentsUI{

public:
	static void showMyRecruitments(ifstream* fin, ofstream* fout, Member* currentUser);

};