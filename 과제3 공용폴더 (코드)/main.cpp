#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Entity Class
#include "Member.h"
#include "Recruitments.h"


//Boundary Class
#include "JoinUI.h"
#include "WithdrawalUI.h"
#include "LogInUI.h"
#include "LogOutUI.h"
#include "AddNewRecruitmentUI.h"
#include "ShowMyRecruitmentsUI.h"
#include "ShowRecruitmentsUI.h"
#include "ApplyUI.h"
#include "ShowApplyInfoUI.h"
#include "CancelApplyUI.h"
#include "ShowStatisticsUI.h"


// 함수 선언
void doTask();
int program_exit();


//파일 입출력용 객체
ofstream fout;
ifstream fin;

int main(){

    fout.open("output.txt", ios::out);
    fin.open("input.txt", ios::in);

    doTask();

    fout.close();
    fin.close();

    return 0;

}

void doTask(){

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    Recruitments* recruitments=new Recruitments(); //전체 채용정보 DB Entity

    Member *currentUser=NULL; //현재 사용자가 어떤 회원인지 판단

    while (!is_program_exit){

        fin>>menu_level_1>>menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1){
        case 1: 
            switch (menu_level_2){
            case 1: //1.1 회원가입 (DB없어서 회원가입 하면 바로 로그인 되는 느낌으로 함)
                currentUser=JoinUI::join(&fin, &fout, recruitments);
                break;
            case 2: //1.2 회원탈퇴 (따로 DB 구현 안했음)
                WithdrawalUI::withdrawal(&fin, &fout, currentUser);
                currentUser=NULL;
                break;
            }
            break;

        case 2:
            switch (menu_level_2) {
            case 1: //2.1 로그인 (회원가입 하자마자 로그인 안하면 불가능하게 정도로 처리)
                LogInUI::logIn(&fin, &fout, currentUser);
                break;

            case 2: //2.2 로그아웃 (시스템적으로 일어나는 일 구현 안했음)
                LogOutUI::logOut(&fin, &fout, currentUser);
                currentUser=NULL;
                break;
            }
            break;

        case 3:
            switch (menu_level_2) {
            case 1: //3.1 채용 정보 등록
                AddNewRecruitmentUI::addNewRecruitment(&fin, &fout, currentUser);
                break;

            case 2: //등록된 채용 정보 조회
                ShowMyRecruitmentsUI::showMyRecruitments(&fin, &fout, currentUser);
                break;
            }
            break;

        case 4:
            switch (menu_level_2) {
            case 1: //4.1 채용 정보 검색 (오름차순 할 필요 X)
                ShowRecruitmentsUI::showRecruitments(&fin, &fout, currentUser, recruitments);
                break;

            case 2: //4.2 채용 지원
                ApplyUI::apply(&fin, &fout, currentUser, recruitments);
                break;

            case 3: //4.3 지원 정보 조회
                ShowApplyInfoUI::showApplyInfo(&fin, &fout, currentUser);
                break;

            case 4: //4.4 지원 취소
                CancelApplyUI::cancelApply(&fin, &fout, currentUser, recruitments);
                break;
            }
            break;

        case 5: 
            switch (menu_level_2) {
            case 1: //5.1 지원 정보 통계
                ShowStatisticsUI::showStatistics(&fin, &fout, currentUser);
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
int program_exit(){

    //UI 출력
    fout<<"6.1. 종료"<< endl;

    return 1;

}