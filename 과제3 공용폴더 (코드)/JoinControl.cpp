#include "JoinControl.h"

//회원가입
Member* JoinControl::createNewAccount(int memberType, string name, string code, string id, string pw, Recruitments* recruitments){

	Member* createdMember=NULL;

	//멤버타입: 회사회원(1), 일반회원(2)... 타입에 따라 회원 생성
	if (memberType == 1){
		pMember = new CompanyMember();
	}
	else{
		pMember = new GeneralMember();
	}

	createdMember =pMember->createNewAccount(name, code, id, pw, recruitments);

	return createdMember;

}