#include "JoinControl.h"

Member* JoinControl::createNewAccount(int memberType, string name, string code, string id, string pw, Recruitments* recruitments){

	Member* createdMember=NULL;

	//���Ÿ��: ȸ��ȸ��(1), �Ϲ�ȸ��(2)
	if (memberType == 1){
		pMember = new CompanyMember();
	}
	else{
		pMember = new GeneralMember();
	}

	createdMember =pMember->createNewAccount(name, code, id, pw, recruitments);

	return createdMember;

}