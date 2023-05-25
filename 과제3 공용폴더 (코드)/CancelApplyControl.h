#ifndef CANCEL_APPLY_H
#define CANCEL_APPLY_H
#include <iostream>
#include <string>
#include "GeneralMember.h"
#include "Recruitments.h"
using namespace std;

class CancelApplyControl {

public:

	void cancelApply(GeneralMember* generalMember, string businessCode, Recruitments* recruitments, string* forPrint);

};
#endif