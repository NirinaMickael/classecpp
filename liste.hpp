#pragma once
#include<string>
using namespace std;
struct student {
    string name;
    student *pNext;
    void display();
};
struct school {
    student *head;
    void initData();
    void addStud();
    void display();
    void remStud();
    void purge();
};