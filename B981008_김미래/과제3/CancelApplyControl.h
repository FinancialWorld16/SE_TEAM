#ifndef CANCEL_APPLY_H
#define CANCEL_APPLY_H
#include <iostream>
#include <string>
#include "GeneralMember.h"
#include "Recruitments.h"
using namespace std;

class CancelApplyControl { // 지원 취소 control 클래스 정의

public:

	void cancelApply(GeneralMember* generalMember, string businessCode, Recruitments* recruitments, string* forPrint);

};
#endif