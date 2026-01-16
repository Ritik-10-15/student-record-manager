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
//find index of student by ID
int StudentManager::findbyId(int id){
    for(int i=0;i<students.size();i++){
        if(students[i].getStudentId()==id){
            return i;
        }
    }
    return -1;
}
//search student by Id
bool StudentManager::searchId(int id){
    int index=findbyId(id);
    if(index==-1){
        cout<<"student not found.\n";
        return false;
    }
    students[index].display();
    return true;
}