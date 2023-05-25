#include "ShowMyRecruitmentsControl.h"
#include "Member.h"
#include <fstream>
class ShowMyRecruitmentsUI{

public:
	static void showMyRecruitments(ifstream* fin, ofstream* fout, Member* currentUser);

};