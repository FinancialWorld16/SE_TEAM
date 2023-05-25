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


// �Լ� ����
void doTask();
int program_exit();


//���� ����¿� ��ü
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

    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    Recruitments* recruitments=new Recruitments(); //��ü ä������ DB Entity

    Member *currentUser=NULL; //���� ����ڰ� � ȸ������ �Ǵ�

    while (!is_program_exit){

        fin>>menu_level_1>>menu_level_2;

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1){
        case 1: 
            switch (menu_level_2){
            case 1: //1.1 ȸ������ (DB��� ȸ������ �ϸ� �ٷ� �α��� �Ǵ� �������� ��)
                currentUser=JoinUI::join(&fin, &fout, recruitments);
                break;
            case 2: //1.2 ȸ��Ż�� (���� DB ���� ������)
                WithdrawalUI::withdrawal(&fin, &fout, currentUser);
                currentUser=NULL;
                break;
            }
            break;

        case 2:
            switch (menu_level_2) {
            case 1: //2.1 �α��� (ȸ������ ���ڸ��� �α��� ���ϸ� �Ұ����ϰ� ������ ó��)
                LogInUI::logIn(&fin, &fout, currentUser);
                break;

            case 2: //2.2 �α׾ƿ� (�ý��������� �Ͼ�� �� ���� ������)
                LogOutUI::logOut(&fin, &fout, currentUser);
                currentUser=NULL;
                break;
            }
            break;

        case 3:
            switch (menu_level_2) {
            case 1: //3.1 ä�� ���� ���
                AddNewRecruitmentUI::addNewRecruitment(&fin, &fout, currentUser);
                break;

            case 2: //��ϵ� ä�� ���� ��ȸ
                ShowMyRecruitmentsUI::showMyRecruitments(&fin, &fout, currentUser);
                break;
            }
            break;

        case 4:
            switch (menu_level_2) {
            case 1: //4.1 ä�� ���� �˻� (�������� �� �ʿ� X)
                ShowRecruitmentsUI::showRecruitments(&fin, &fout, currentUser, recruitments);
                break;

            case 2: //4.2 ä�� ����
                ApplyUI::apply(&fin, &fout, currentUser, recruitments);
                break;

            case 3: //4.3 ���� ���� ��ȸ
                ShowApplyInfoUI::showApplyInfo(&fin, &fout, currentUser);
                break;

            case 4: //4.4 ���� ���
                CancelApplyUI::cancelApply(&fin, &fout, currentUser, recruitments);
                break;
            }
            break;

        case 5: 
            switch (menu_level_2) {
            case 1: //5.1 ���� ���� ���
                ShowStatisticsUI::showStatistics(&fin, &fout, currentUser);
                break;
            }
            break;

        case 6: 
            switch (menu_level_2) {
            case 1: //6.1 ����
                is_program_exit = program_exit();
                break;
            }
            break;
        }  
    } 
}


//6.1. ����
int program_exit(){

    //UI ���
    fout<<"6.1. ����"<< endl;

    return 1;

}