# 📘 Student Record Manager (C++)
## 📌 Overview
  The Student Record Manager is a simple,menu-driven C++ application that allows users to manage records.
  It demonstrates core Object-Oriented Programming(OOP) concepts such as classes, encapsulation, and separation of concerns.
  This project was built as a learning exercise to strengthen C++ fundamentals and real-world program structure.
##  ✨ Features
 - Add a new student(Id, name, marks)
 - Display all student records
 - Update student marks
 - Removve a student
 - Calculate average marks
 - Menu-driven command-line interface
## 🧠 OOP Concepts Used
- Classes and Objects
- Encapsulation( private data, public methods)
- Has-A relationship(StudentManager owns students)
- Vectors
- Const-correctness
- Modular design using .h and .cpp files


## 📁 Project Structure
```text
student-record-manager/
├── include/
│   ├── Student.h
│   └── StudentManager.h
├── src/
│   ├── Student.cpp
│   ├── StudentManager.cpp
│   └── main.cpp
├── docs/
│   └── UML diagrams 
├── README.md
└── .gitignore
```
## ▶️ How to Compile and Run
🔷compile from the project root
- g++ -I../include Student.cpp StudentManager.cpp main.cpp -o program.exe
  
🔷Run
- ./program.exe
## 🧪 Sample Usage
====Student Record Manager===
1. Add Student
2. Display All Student
3. search Student by ID
4. Update Student Marks
5. Remove Student
6. Calculate Average Marks
0. Exit
## 🚀 Future Improvement
- File saving/loading(persistent storage)
- Input validation enhancement
- Sorting student by marks or name
- Exception handling
- Unit testing
## 👨‍💻 Author
Ritik Gupta<br>
Computer Science Student<br>
ritik.3.gupta@ucdenver.edu
