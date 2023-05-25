#ifndef LOGIN_UI_H
#define LOGIN_UI_H
#include "LogInControl.h"
#include <fstream>
#include "Member.h"
using namespace std;

//·Î±×ÀÎ Boundary Class
class LogInUI {
public:

	static void logIn(ifstream* fin, ofstream* fout, Member* currentUser);

};
#endif