#include "CancelApplyControl.h"
#include "Member.h"
#include "Recruitments.h"
#include <fstream>

//���� ��� Boundary Class
class CancelApplyUI{

public:

	static void cancelApply(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments);

};