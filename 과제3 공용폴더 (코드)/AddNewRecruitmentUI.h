#ifndef ADD_NEW_RECRUITMENT_UI_H
#define ADD_NEW_RECRUITMENT_UI_H

#include "Member.h"
#include "CompanyMember.h"
#include "AddNewRecruitmentControl.h"
#include <fstream>
using namespace std;

//ä������ ��� Boundary Class
class AddNewRecruitmentUI{

public:

	static void addNewRecruitment(ifstream* fin, ofstream* fout, Member* currentUser);

};
#endif