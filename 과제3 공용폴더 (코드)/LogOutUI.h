#include "LogOutControl.h"
#include "Member.h"
#include <fstream>

class LogOutUI{

public:

	static void logOut(ifstream* fin, ofstream* fout, Member* currentUser);

};