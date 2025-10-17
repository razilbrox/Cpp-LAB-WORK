#include <iostream>
using namespace std;

class Student {
protected:
    string Name;
    int Rollno;
    string Course;

public:
    void getStudentDetails() {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Roll Number: ";
        cin >> Rollno;
        cout << "Enter Course: ";
        cin >> Course;
    }

    void displayStudentDetails() const {
        cout << "Name: " << Name << endl;
        cout << "Roll Number: " << Rollno << endl;
        cout << "Course: " << Course << endl;
    }
};

class Test : virtual public Student {
protected:
    float mark1, mark2, mark3;

public:
    void getMarks() {
        cout << "Enter marks for 3 subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }

    void displayMarks() const {
        cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
    }

    float getTotalMarks() const {
        return mark1 + mark2 + mark3;
    }
};

class GraceMarks : virtual public Student {
protected:
    float BonusMark;

public:
    void getBonusMark() {
        cout << "Enter bonus mark: ";
        cin >> BonusMark;
    }

    void displayBonusMark() const {
        cout << "Bonus Mark: " << BonusMark << endl;
    }

    float getBonus() const {
        return BonusMark;
    }
};


class Result : public Test, public GraceMarks {
private:
    float Total;

public:
    void calculateTotal() {
        Total = getTotalMarks() + getBonus();
    }

    void displayResult() {
        displayStudentDetails();
        displayMarks();
        displayBonusMark();
        cout << "Total Marks (including bonus): " << Total << endl;
    }
};

int main() {
    Result r;
    r.getStudentDetails();
    r.getMarks();
    r.getBonusMark();
    r.calculateTotal();
    cout << "\n=== Student Result ===\n";
    r.displayResult();

    return 0;
}
