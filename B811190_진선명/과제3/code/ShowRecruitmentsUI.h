#include "ShowRecruitmentsControl.h"
#include "Member.h"
#include "Recruitments.h"
#include <fstream>

//ä�� ���� �˻�UI
class ShowRecruitmentsUI{
public:

	static void showRecruitments(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments); //ä�� ���� �˻�

};