//
// Created by 肖鹏楊 on 24-12-19.
//

#ifndef BOOKDATA_H
#define BOOKDATA_H

#include<iostream>
#include<iomanip>
#include<string>
#include<cstdbool>
#include <utility>
// #include <windows.h> //UTF-8设置
using namespace std;

class BookData  //定义类
{
private:
    string isbn;
    string bookTitle;
    int qtyOnHand;
    double retail;

public:
    BookData(string i = "", string t = "", int q = 0, double r = 0.0)   //初始化BookData
    {
        isbn = move(i);
        bookTitle = move(t);
        qtyOnHand = q;
        retail = r;
    }

    void setISBN(const string& i);    //输入isbn
    void setTitle(const string& t); //输入书名
    void setQty(int q);  //输入库存
    void setRetail(double r);    //输入零售价
    string getISBN() const ; //输出isbn
    string getTitle() const ;//输出书名
    int getQty() const ; //输出库存
    [[nodiscard]] double getRetail() const ;   //输出零售价
    void BookInfo() const ;  //显示书籍信息
};



#endif //BOOKDATA_H
