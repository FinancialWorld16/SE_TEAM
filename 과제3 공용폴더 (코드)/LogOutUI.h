#include "LogOutControl.h"
#include "Member.h"
#include <fstream>

//�α׾ƿ� Boundary Class
class LogOutUI{

public:

	static void logOut(ifstream* fin, ofstream* fout, Member* currentUser);

};