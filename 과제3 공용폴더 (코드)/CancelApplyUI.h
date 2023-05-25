#include "CancelApplyControl.h"
#include "Member.h"
#include "Recruitments.h"
#include <fstream>

//지원 취소 Boundary Class
class CancelApplyUI{

public:

	static void cancelApply(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments);

};