#include "LogInControl.h"

//�α���
bool LogInControl::logIn(string id, string pw, Member* currentUser){

	return currentUser->logIn(id, pw);

}