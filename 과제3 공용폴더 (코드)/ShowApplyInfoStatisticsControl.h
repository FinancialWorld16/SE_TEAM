#ifndef SHOW_APPLY_INFO_STATISTICS_H
#define SHOW_APPLY_INFO_STATISTICS_H
#include <iostream>
#include <string>
#include "GeneralMember.h"
using namespace std;

//지원정보 통계보기 Control Class
class ShowApplyInfoStatisticsControl {

public:

	void showStatistics(GeneralMember * generalMember, string *forPrint);

};
#endif