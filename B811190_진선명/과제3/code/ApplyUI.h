#include "ApplyControl.h"
#include "Member.h"
#include "Recruitments.h"
#include <fstream>

//����UI
class ApplyUI{

public:
	static void apply(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments); //�����ϱ�

};