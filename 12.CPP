#include <iostream>
using namespace std;


class Student {
protected:
    int rollNo;
public:
    void getStudentData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
    void showStudentData() {
        cout << "Roll Number: " << rollNo << endl;
    }
};


class Sports {
protected:
    float score;
public:
    void getSportsData() {
        cout << "Enter Sports Score: ";
        cin >> score;
    }
    void showSportsData() {
        cout << "Sports Score: " << score << endl;
    }
};


class Result : public Student, public Sports {
    float total;
public:
    void displayResult() {
        total = score; 
        cout << "---------- Result ----------" << endl;
        showStudentData();
        showSportsData();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result r;
    r.getStudentData();
    r.getSportsData();
    r.displayResult();
    return 0;
}
