#ifndef JOIN_UI_H
#define JOIN_UI_H
#include "Member.h"
#include "Recruitments.h"
#include "JoinControl.h"

//회원가입 Boundary Class
class JoinUI{
public:

	static Member* join(ifstream* fin, ofstream* fout, Recruitments* recruitments);

};
#endif