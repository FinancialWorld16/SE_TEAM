#include "ShowRecruitmentsControl.h"
#include "Member.h"
#include "Recruitments.h"
#include <fstream>

//채용정보 검색 Boundary Class
class ShowRecruitmentsUI{
public:

	static void showRecruitments(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments);

};