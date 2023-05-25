#include "LogOutControl.h"
#include "Member.h"
#include <fstream>

//·Î±×¾Æ¿ô Boundary Class
class LogOutUI{

public:

	static void logOut(ifstream* fin, ofstream* fout, Member* currentUser);

};