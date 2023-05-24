#ifndef SHOW_APPLY_INFO_STATISTICS_H
#define SHOW_APPLY_INFO_STATISTICS_H
#include <iostream>
#include <string>
#include "GeneralMember.h"
using namespace std;

class ShowApplyInfoStatisticsControl { //지원 정보 통계 control 클래스 정의

public:

	void showStatistics(GeneralMember * generalMember, string *forPrint);

};
#endif