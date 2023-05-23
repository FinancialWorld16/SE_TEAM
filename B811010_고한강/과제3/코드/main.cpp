#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Member.h"
#include "Recruitments.h"


#include "JoinUI.h"
#include "WithdrawalUI.h"
#include "LogInUI.h"

//���� ����¿� ��ü
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

    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    Recruitments* recruitments = new Recruitments();

    Member* currentUser = NULL;

    while (!is_program_exit) {

        fin >> menu_level_1 >> menu_level_2;

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1) {
        case 1:
            switch (menu_level_2) {
            case 1: //1.1 ȸ������
                currentUser = JoinUI::join(&fin, &fout, recruitments);
                break;
            case 2: //1.2 ȸ��Ż��
                WithdrawalUI::withdrawal(&fin, &fout, currentUser);
                currentUser = NULL;
                break;
            }
            break;

        case 2:
            switch (menu_level_2) {
            case 1: //2.1 �α���
                LogInUI::logIn(&fin, &fout);
                break;

            case 2: //2.2 �α׾ƿ�
                break;
            }
            break;

        case 3:
            switch (menu_level_2) {
            case 1: //3.1 ä�� ���� ���
                break;

            case 2: //��ϵ� ä�� ���� ��ȸ
                break;
            }
            break;

        case 4:
            switch (menu_level_2) {
            case 1: //4.1 ä�� ���� �˻�
                break;

            case 2: //4.2 ä�� ����
                break;

            case 3: //4.3 ���� ���� ��ȸ
                break;

            case 4: //4.4 ���� ���
                break;
            }
            break;

        case 5:
            switch (menu_level_2) {
            case 1: //5.1 ���� ���� ���
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
int program_exit() {

    fout << "6.1. ����" << endl;

    return 1;

}