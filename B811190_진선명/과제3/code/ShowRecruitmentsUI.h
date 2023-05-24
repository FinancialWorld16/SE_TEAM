#include "ShowRecruitmentsControl.h"
#include "Member.h"
#include "Recruitments.h"
#include <fstream>

//채용 정보 검색UI
class ShowRecruitmentsUI{
public:

	static void showRecruitments(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments); //채용 정보 검색

};