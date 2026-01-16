#include<iostream>
#include"StudentManager.h"
using namespace std;
int main(){
    StudentManager manager;
    int choice;
    do{
        cout<<"\n=====Student Record Manager====\n";
        cout<<"1.Add student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Update Student Marks\n";
        cout << "5. Remove Student\n";
        cout << "6. Calculate Average Marks\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin>>choice;
        if(choice==1){
            int id;
            string name;
            double marks;
            cout<<"Enter ID:";
            cin>>id;
            cin.ignore();
            cout<<"Enter name:";
            getline(cin,name);
            cout<<"enter marks:";
            cin>>marks;
            Student s(id,name,marks);
            manager.addStudent(s);
        
        }
        else if(choice==2){
            manager.displayAll();
        }
        else if(choice==3){
            int id;
            cout<<"enter Id to search:";
            cin>>id;
            manager.searchId(id);
        }
    }
    while(choice!=0);
    cout<<"exiting program.\n";
    return 0;
}