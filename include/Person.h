#pragma once
#include <iostream>
#include <string>
using namespace std;
struct student{
    string name;
    int age;
    student* next;
    student* last;
    student(string n = "0", int a = 0) : name(n), age(a), next(nullptr), last(nullptr) {}
};
struct teacher{
    string name;
    int age;
    student* head;
    teacher* next;
    teacher* last;
    teacher(string n = "0", int a = 0) : name(n), age(a), head(nullptr), next(nullptr), last(nullptr) {}
};
void show_Person(teacher* head);
void add_teacher(teacher*& head);
void add_student(teacher* head);
teacher* find_teacher(teacher* head, string name);