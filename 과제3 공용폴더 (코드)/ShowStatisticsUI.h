#include "ShowApplyInfoStatisticsControl.h"
#include "ShowRecruitmentStatisticsControl.h"
#include "Member.h"
#include <fstream>

//(채용, 지원) 정보 통계보기 Boundary Class
class ShowStatisticsUI{

public:
	
	static void showStatistics(ifstream* fin, ofstream* fout, Member* currentUser);


};