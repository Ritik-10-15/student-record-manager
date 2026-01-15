#include"StudentManager.h"
#include<iostream>
using namespace std;
//add a student
void StudentManager::addStudent(const Student& s){
    students.push_back(s);
}
//Display all students
void StudentManager::displayAll(){
    if(students.empty()){
        cout<<"No student records available.\n";
        return;
    }
    for(const Student& s : students){
        s.display();
    }
}