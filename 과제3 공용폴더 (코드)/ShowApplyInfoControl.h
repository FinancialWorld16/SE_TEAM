#ifndef SHOW_APPLY_INFO_H
#define SHOW_APPLY_INFO_H
#include "GeneralMember.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//지원정보 조회 Control Class
class ShowApplyInfoControl {

public:

	void showApplyInfo(GeneralMember* generalMember, string* forPrint);

};
#endif