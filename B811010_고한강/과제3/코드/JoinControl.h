#ifndef JOIN_CONTROL_H
#define JOIN_CONTROL_H
#include "Member.h"
#include "GeneralMember.h"
#include "CompanyMember.h"
#include "Recruitments.h"


#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class JoinControl {

private:

	Member* pMember;

	GeneralMember* pGeneralMember;

	CompanyMember* pCompanyMember;

public:

	Member* createNewAccount(int memberType, string name, string code, string id, string pw, Recruitments* recruitments);

};
#endif