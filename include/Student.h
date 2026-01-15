#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;
class Student{
    private:
    int studentId;
    string studentName;
    double studentMarks;
    public:
    //constructor
    Student();
    Student(int id,string name,double marks);
    //setters
    void setStudentId(int id);
    void setStudentName(string name);
    void setStudentMarks(double marks);
    //getters
    int getStudentId();
    string getStudentName();
    double getStudentMarks();
    //Display student info
    void display() const;

};
#endif