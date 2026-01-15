#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include"Student.h"
#include<vector>

class StudentManager{
    private:
    vector<Student> students;
    //helper function
    int findbyId(int id);
    public:
    void addStudent(const Student& s);
    void displayAll();
    bool searchId(int id);
    bool updateMarks(int id,double marks);
    bool removeStudent(int id);
    double calculateAverage();
    bool isEmpty();

};
#endif