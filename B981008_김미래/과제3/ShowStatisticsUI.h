#include "ShowApplyInfoStatisticsControl.h"
#include "ShowRecruitmentStatisticsControl.h"
#include "Member.h"
#include <fstream>

class ShowStatisticsUI{ // 통계 출력 UI 클래스 정의

public:
	
	static void showStatistics(ifstream* fin, ofstream* fout, Member* currentUser);


};