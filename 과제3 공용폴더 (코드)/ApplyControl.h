#ifndef APPLY_H
#define APPLY_H
#include <iostream>
#include <string>
#include "Recruitments.h"
#include "GeneralMember.h"
using namespace std;

class ApplyControl {

public:

	void apply(GeneralMember* generalMember, string businessCode, Recruitments* recruitments, string* forPrint);

};
#endif