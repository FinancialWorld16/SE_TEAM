#ifndef LOG_IN_H
#define LOG_IN_H
#include <iostream>
#include <string>
#include "Member.h"
using namespace std;

//�α��� Control Class
class LogInControl{

public:

	bool logIn(string id, string pw, Member* currrentUser);

};
#endif