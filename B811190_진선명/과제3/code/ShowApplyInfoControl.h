#ifndef SHOW_APPLY_INFO_H
#define SHOW_APPLY_INFO_H
#include "GeneralMember.h"
#include <iostream>
#include <string>
using namespace std;

//지원 정보 조회 Control
class ShowApplyInfoControl {

public:

	void showApplyInfo(GeneralMember* generalMember, string* forPrint); //지원 회사 정보 받기

};
#endif