#include "ShowApplyInfoStatisticsControl.h"
#include "ShowRecruitmentStatisticsControl.h"
#include "Member.h"
#include <fstream>

class ShowStatisticsUI{ // ��� ��� UI Ŭ���� ����

public:
	
	static void showStatistics(ifstream* fin, ofstream* fout, Member* currentUser);


};