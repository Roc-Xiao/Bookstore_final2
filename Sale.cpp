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
#include"assist.h"

using namespace std;

const double TAX = 0.06;

void Sale(BookData books[], int& bookCount)   //收银模块
{
    string isbn;
    int quantity;
    double price, total, tax, finalAmount;
    //销售模块菜单
    cout << setw(50) << setfill('-') << " " << endl;
    cout << endl << "前台销售模块" << endl;
    cout << "请输入书的ISBN号: ";
    cin >> isbn;
    int index = findBookByISBN(books, bookCount, isbn);
    if (index == -1)
    {
        cout << "未找到此书" << endl;
        return;
    }
    cout << "请输入购买数量: ";
    cin >> quantity;
    if (quantity > books[index].getQty())
    {
        cout << "库存不足，当前库存量为: " << books[index].getQty() << endl;
        return;
    }
    //计算金额
    price = books[index].getRetail();
    total = price * quantity;
    tax = total * TAX;
    finalAmount = total + tax;

    //更新库存
    books[index].setQty(books[index].getQty() - quantity);

    //输出收据
    cout << endl << "销售收据" << endl;
    cout << "ISBN 号: " << isbn << endl;
    cout << "书名: " << books[index].getTitle() << endl;
    cout << "单价: RMB " << fixed << setprecision(2) << price << endl;
    cout << "数量: " << quantity << endl;
    cout << "销售合计: RMB " << total << endl;
    cout << "零售税: RMB " << tax << endl;
    cout << "应付总额: RMB " << finalAmount << endl << endl;
    cout << "谢谢光临！" << endl;
}
