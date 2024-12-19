//
// Created by 肖鹏楊 on 24-12-19.
//

#ifndef TABLE_H
#define TABLE_H

//
// Created by 肖鹏楊 on 24-12-19.
//
#include<iostream>
#include"BookData.h"

using namespace std;

//书库管理模块
void bookMenu(BookData books[], int& bookCount);
//报表模块
void table(BookData books[], int bookCount);

#endif //TABLE_H
