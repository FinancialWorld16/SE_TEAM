#include "ShowRecruitmentsControl.h"
#include "Member.h"
#include "Recruitments.h"
#include <fstream>

class ShowRecruitmentsUI{
public:

	static void showRecruitments(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments);

};