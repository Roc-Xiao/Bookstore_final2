//
// Created by 肖鹏楊 on 24-12-19.
//
#include<iostream>
#include<iomanip>
#include<string>
#include<cstdbool>
#include <utility>
//#include <windows.h> //UTF-8设置
#include"BookData.h"
#include"assist.h"

using namespace std;

//书库管理模块
void bookMenu(BookData books[], int& bookCount)
{
    int choice;
    do {
        cout << setw(40) << "长空御风图书管理系统" << endl;
        cout << setw(22) << "书库管理模块" << endl << endl;
        cout << left << setw(0) << "1.查找某本书的信息" << endl;
        cout << left << setw(0) << "2.增加书" << endl;
        cout << left << setw(0) << "3.修改书的信息" << endl;
        cout << left << setw(0) << "4.删除书" << endl;
        cout << left << setw(0) << "5.返回到主菜单" << endl;
        cout << "输入选择：" << endl;
        cout << setw(45) << setfill('-') << " " << endl;

        cin >> choice;

        switch (choice) {
            case 1: lookUpBook(books); break;
            case 2: addBook(bookCount, books); break;
            case 3: editBook(books); break;
            case 4: deleteBook(bookCount, books); break;
            case 5: break;
            default: cout << "输入错误，请重新输入！" << endl;
        }
    } while (choice != 5);
}

//报表模块
void table(BookData books[], int bookCount)
{
    cout << "书库报表" << endl;
    cout << setw(15) << "ISBN";
    cout << setw(20) << "书名";
    cout << setw(10) << "库存量";
    cout << setw(10) << "零售价" << endl;
    for (int i = 0; i < bookCount; ++i)
    {
        cout << setw(15) << books[i].getISBN() << setw(20) << books[i].getTitle()
             << setw(10) << books[i].getQty()
             << "RMB " << fixed << setprecision(2) << books[i].getRetail() << endl;
    }
}
