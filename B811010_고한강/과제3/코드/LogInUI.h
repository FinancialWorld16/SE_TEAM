#ifndef LOGIN_UI_H
#define LOGIN_UI_H
#include "LogInControl.h"
#include <fstream>
using namespace std;

class LogInUI {
public:

	static void logIn(ifstream* fin, ofstream* fout);

};
#endif