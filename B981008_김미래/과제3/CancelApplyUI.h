#include "CancelApplyControl.h"
#include "Member.h"
#include "Recruitments.h"
#include <fstream>
class CancelApplyUI{//���� ��� UI Ŭ���� ����

public:

	static void cancelApply(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments);

};