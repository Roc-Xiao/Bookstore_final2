//
// Created by 肖鹏楊 on 24-12-19.
//
#include<iostream>
#include<iomanip>
#include<string>
#include<cstdbool>
#include<utility>
//#include<windows.h> //UTF-8设置
#include"BookData.h"

using namespace std;


void BookData::setISBN(const string& i)   //输入isbn
{
    isbn = i;
}
void BookData::setTitle(const string& t)  //输入书名
{
    bookTitle = t;
}
void BookData::setQty(int q)  //输入库存
{
    qtyOnHand = q;
}
void BookData::setRetail(double r)    //输入零售价
{
    retail = r;
}

string BookData::getISBN() const  //输出isbn
{
    return isbn;
}
string BookData::getTitle() const //输出书名
{
    return bookTitle;
}
int BookData::getQty() const  //输出库存
{
    return qtyOnHand;
}
double BookData::getRetail() const    //输出零售价
{
    return retail;
}

void BookData::BookInfo() const   //显示书籍信息
{
    cout << setw(50) << setfill('-') << " " << endl;
    cout << setw(35) << "长空御风图书管理系统" << endl;
    cout << setw(42) << endl;
    cout << setw(15) << "ISBN 号:" << isbn << endl;
    cout << setw(15) << "书名:" << bookTitle << endl;
    cout << setw(15) << "库存量:" << qtyOnHand << endl;
    cout << setw(15) << "零售价: RMB " << fixed << setprecision(2) << retail << endl;
    cout << setw(50) << setfill('-') << " " << endl;
}