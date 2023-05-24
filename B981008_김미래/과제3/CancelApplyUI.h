#include "CancelApplyControl.h"
#include "Member.h"
#include "Recruitments.h"
#include <fstream>
class CancelApplyUI{//지원 취소 UI 클래스 정의

public:

	static void cancelApply(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments);

};