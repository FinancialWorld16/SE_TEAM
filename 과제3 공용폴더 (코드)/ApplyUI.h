#include "ApplyControl.h"
#include "Member.h"
#include "Recruitments.h"
#include <fstream>

//ä�� ���� Boundary Class
class ApplyUI{

public:

	static void apply(ifstream* fin, ofstream* fout, Member* currentUser, Recruitments* recruitments);

};