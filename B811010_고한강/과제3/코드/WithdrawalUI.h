#ifndef WITHDRAWAL_UI_H
#define WITHDRAWAL_UI_H
#include "Member.h"
#include "WithdrawalControl.h"
#include <fstream>

class WithdrawalUI {
public:

	static void withdrawal(ifstream* fin, ofstream* fout, Member* currentUser);

};
#endif