#include "ShowMyRecruitmentsControl.h"
#include "Member.h"
#include <fstream>

//등록된 채용 정보 조회 UI
class ShowMyRecruitmentsUI{

public:
	static void showMyRecruitments(ifstream* fin, ofstream* fout, Member* currentUser);

};