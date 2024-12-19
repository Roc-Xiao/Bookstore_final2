//
// Created by 肖鹏楊 on 24-12-19.
//

#include<iostream>
#include<iomanip>
#include<string>
// #include <windows.h> //UTF-8设置
#include"BookData.h"
#include"assist.h"
#include"Sale.h"
#include"table.h"

using namespace std;

const int MAX_BOOKS = 100;
BookData books[MAX_BOOKS]; //创建书库
const double TAX = 0.06;

int main()
{
    // // 设置控制台输出和输入编码为 UTF-8
    // SetConsoleOutputCP(CP_UTF8);
    // SetConsoleCP(CP_UTF8);

    BookData books[MAX_BOOKS];
    int bookCount = 0;  //初始化库存
    int choice;

    do {
        mainMenu();
        cin >> choice;

        switch (choice)
        {
            case 1: //选项一，收银模块
                Sale(books, bookCount);
            break;
            case 2: //选项二，书库管理模块
                bookMenu(books, bookCount);
            break;
            case 3: //选项三，报表模块
                table(books, bookCount);
            break;
            case 4: //选项四，退出系统
                cout << "退出系统" << endl;
            break;
            default:
                cout << "输入有误，请重新输入";
        }
    } while (choice != 4);

    return 0;
}

void mainMenu()  //主菜单
{
    cout << setw(40) << "长空御风图书管理系统" << endl;
    cout << setw(25) << "主菜单" << endl << endl;
    cout << left << setw(0) << "1.收银模块" << endl;
    cout << left << setw(0) << "2.书库管理模块" << endl;
    cout << left << setw(0) << "3.报表模块" << endl;
    cout << left << setw(0) << "4.退出系统" << endl;
    cout << "输入选择" << endl;
    cout << "请输入1-4之间的数" << endl;
    cout << setw(45) << setfill('-') << " " << endl;
}
