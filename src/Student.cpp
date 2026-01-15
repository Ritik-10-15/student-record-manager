#include"Student.h"
#include<iostream>
using namespace std;
//Default constructor
Student::Student(){
    studentId=0;
    studentName="";
    studentMarks=0.0;
}
//parameterized constructor
Student::Student(int id,string name,double marks){
    studentId=id;
    studentName=name;
    studentMarks=marks;
}
//setters
void Student::setStudentName(string name){
    studentName=name;
}
void Student::setStudentId(int id){
    studentId=id;
}
void Student::setStudentMarks(double marks){
    studentMarks=marks;
}
//getters
int Student::getStudentId(){
    return studentId;
}
string Student::getStudentName(){
    return studentName;
}
double Student::getStudentMarks(){
    return studentMarks;
}
void Student::display() const{
    cout<<"ID:"<<studentId;
    cout<<"Name:"<<studentName;
    cout<<"Marks:"<<studentMarks;
}