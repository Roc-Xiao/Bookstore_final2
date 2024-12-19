//
// Created by 肖鹏楊 on 24-12-19.
//
#include<iostream>
#include<iomanip>
#include<string>
#include<cstdbool>
#include <utility>
#include <windows.h> //UTF-8设置
#include"BookData.h"

using namespace std;

const int MAX_BOOKS = 100;
BookData books[MAX_BOOKS]; //创建书库
const double TAX = 0.06;

int findBookByISBN(BookData books[], int bookCount, const string& isbn) //通过isbn查找
{
    for (int i = 0; i < bookCount; ++i) {
        if (books[i].getISBN() == isbn) {
            return i;
        }
    }
    return -1;
}

//查找书籍
void lookUpBook() {
    string isbn;
    cout << "请输入 ISBN 号: ";
    cin >> isbn;

    int index = findBookByISBN(books, MAX_BOOKS, isbn);
    if (index == -1) {
        cout << "未找到该书籍！" << endl;
    } else {
        books[index].BookInfo();
    }
}

//添加书籍
void addBook(int& bookCount) {
    if (bookCount >= MAX_BOOKS) {
        cout << "书库已满，无法增加！" << endl;
        return;
    }

    string isbn, title;
    int qty;
    double retail;

    cout << "请输入书籍信息: " << endl;

    cout << "ISBN 号: ";
    cin >> isbn;
    cin.ignore();  // 忽略上一个输入留下的换行符

    cout << "书名: ";
    getline(cin, title);

    cout << "库存量: ";
    cin >> qty;

    cout << "零售价: ";
    cin >> retail;

    books[bookCount] = BookData(isbn, title, qty, retail);
    bookCount++;

    cout << "书籍添加成功！" << endl;
}

// 修改书籍信息
void editBook() {
    string isbn;
    cout << "请输入要修改的书的 ISBN 号: ";
    cin >> isbn;

    int index = findBookByISBN(books, MAX_BOOKS, isbn);
    if (index == -1) {
        cout << "未找到该书籍！" << endl;
        return;
    }

    cout << "输入新库存量: ";
    int qty;
    cin >> qty;
    books[index].setQty(qty);

    cout << "输入新零售价: ";
    int retail;
    cin >> retail;
    books[index].setRetail(retail);

    cout << "书籍信息已更新！" << endl;
}

// 删除书籍
void deleteBook(int& bookCount) {
    string isbn;
    cout << "请输入要删除的书的 ISBN 号: ";
    cin >> isbn;

    int index = findBookByISBN(books, MAX_BOOKS, isbn);
    if (index == -1) {
        cout << "未找到该书籍！" << endl;
        return;
    }

    for (int i = index; i < bookCount - 1; i++) {
        books[i] = books[i + 1];
    }
    bookCount--;
    cout << "书籍已删除" << endl;
}
