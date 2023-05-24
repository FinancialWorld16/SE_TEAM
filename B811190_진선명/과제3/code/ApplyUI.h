#include "ApplyControl.h"
#include "Member.h"
#include "Recruitments.h"
#include <fstream>

//지원UI
class ApplyUI{

public:
	static void apply(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments); //지원하기

};