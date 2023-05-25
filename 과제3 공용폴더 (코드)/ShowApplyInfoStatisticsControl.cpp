#include "ShowApplyInfoStatisticsControl.h"

//지원정보 통계 보기
void ShowApplyInfoStatisticsControl::showStatistics(GeneralMember* generalMember, string* forPrint){
	
	generalMember->getApplyInfoStatistics(forPrint);

}