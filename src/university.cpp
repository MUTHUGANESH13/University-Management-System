#include <bits/stdc++.h>
using namespace std;

class University {
private:
    string RollNo, Name, Subject, Address;
public:
    University() : RollNo(""), Name(""), Subject(""), Address("") {}

    void setRollNo(string rollNo) {
        RollNo = rollNo;
    }

    void setName(string name) {
        Name = name;
    }

    void setSubject(string subject) {
        Subject = subject;
    }

    void setAddress(string address) {
        Address = address;
    }

    string getRollNo() {
        return RollNo;
    }

    string getName() {
        return Name;
    }

    string getSubject() {
        return Subject;
    }

    string getAddress() {
        return Address;
    }
};

class UniversitySystem {
private:
    vector<University> students;

public:
    void add() {
        string rollNo, name, subject, address;
        University student;

        cout << "\tEnter RollNo Of Student: ";
        cin >> rollNo;
        student.setRollNo(rollNo);

        cout << "\tEnter Name Of Student: ";
        cin >> name;
        student.setName(name);

        cout << "\tEnter Subject Of Student: ";
        cin >> subject;
        student.setSubject(subject);

        cout << "\tEnter Address Of Student: ";
        cin >> address;
        student.setAddress(address);

        students.push_back(student);

        cout << "\tStudent Added Successfully!" << endl;
    }

    void search() {
        string rollNo;
        cout << "\tEnter RollNo Of Student: ";
        cin >> rollNo;

        bool found = false;
        for (auto& student : students) {
            if (student.getRollNo() == rollNo) {
                cout << "\t" << student.getRollNo() << " : " << student.getName() << " : " 
                     << student.getSubject() << " : " << student.getAddress() << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "\tStudent Not Found!" << endl;
        }
    }

    void update() {
        string rollNo;
        cout << "\tEnter RollNo Of Student: ";
        cin >> rollNo;

        bool found = false;
        for (auto& student : students) {
            if (student.getRollNo() == rollNo) {
                string address;
                cout << "\tEnter New Address: ";
                cin >> address;
                student.setAddress(address);
                cout << "\tData Updated!" << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "\tStudent Not Found!" << endl;
        }
    }
};

int main() {
    UniversitySystem system;
    bool exit = false;

    while (!exit) {
        int val;
        cout << "\tWelcome To University Management System" << endl;
        cout << "\t***************************************" << endl;
        cout << "\t1. Add Student." << endl;
        cout << "\t2. Search Student." << endl;
        cout << "\t3. Update Data Of Student." << endl;
        cout << "\t4. Exit." << endl;
        cout << "\tEnter Your Choice: ";
        cin >> val;

        if (val == 1) {
            system.add();
        }
        else if (val == 2) {
            system.search();
        }
        else if (val == 3) {
            system.update();
        }
        else if (val == 4) {
            exit = true;
            cout << "\tGood Luck!" << endl;
        }
    }

    return 0;
}
