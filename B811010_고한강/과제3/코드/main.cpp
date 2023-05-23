#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Member.h"
#include "Recruitments.h"


#include "JoinUI.h"
#include "WithdrawalUI.h"
#include "LogInUI.h"

//파일 입출력용 객체
ofstream fout;
ifstream fin;

int main() {

    fout.open("output.txt", ios::out);
    fin.open("input.txt", ios::in);

    doTask();

    fout.close();
    fin.close();

    return 0;

}

void doTask() {

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    Recruitments* recruitments = new Recruitments();

    Member* currentUser = NULL;

    while (!is_program_exit) {

        fin >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1) {
        case 1:
            switch (menu_level_2) {
            case 1: //1.1 회원가입
                currentUser = JoinUI::join(&fin, &fout, recruitments);
                break;
            case 2: //1.2 회원탈퇴
                WithdrawalUI::withdrawal(&fin, &fout, currentUser);
                currentUser = NULL;
                break;
            }
            break;

        case 2:
            switch (menu_level_2) {
            case 1: //2.1 로그인
                LogInUI::logIn(&fin, &fout);
                break;

            case 2: //2.2 로그아웃
                break;
            }
            break;

        case 3:
            switch (menu_level_2) {
            case 1: //3.1 채용 정보 등록
                break;

            case 2: //등록된 채용 정보 조회
                break;
            }
            break;

        case 4:
            switch (menu_level_2) {
            case 1: //4.1 채용 정보 검색
                break;

            case 2: //4.2 채용 지원
                break;

            case 3: //4.3 지원 정보 조회
                break;

            case 4: //4.4 지원 취소
                break;
            }
            break;

        case 5:
            switch (menu_level_2) {
            case 1: //5.1 지원 정보 통계
                break;
            }
            break;

        case 6:
            switch (menu_level_2) {
            case 1: //6.1 종료
                is_program_exit = program_exit();
                break;
            }
            break;
        }
    }
}


//6.1. 종료
int program_exit() {

    fout << "6.1. 종료" << endl;

    return 1;

}