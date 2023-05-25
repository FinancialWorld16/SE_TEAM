#include "LogOutControl.h"
#include "Member.h"
#include <fstream>

//로그아웃 UI
class LogOutUI{

public:

	static void logOut(ifstream* fin, ofstream* fout, Member* currentUser);

};