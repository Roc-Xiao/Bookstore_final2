//
// Created by 肖鹏楊 on 24-12-19.
//

#ifndef ASSIST_H
#define ASSIST_H

#include"BookData.h"

void mainMenu();
void Sale(BookData books[], int& bookCount);
void bookMenu(BookData books[], int& bookCount);
void table(BookData books[], int bookCount);
int findBookByISBN(BookData books[], int bookCount, const string& isbn);
void deleteBook(int& bookCount, BookData books[]);
void lookUpBook(BookData books[]);
void editBook(BookData books[]);
void addBook(int& bookCount, BookData books[]);


#endif //ASSIST_H
