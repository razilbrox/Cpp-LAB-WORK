#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3];

public:

    Matrix() {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                mat[i][j] = 0;
    }

 
    void input() {
        cout << "Enter matrix elements (3x3):\n";
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                cin >> mat[i][j];
    }

    
    Matrix operator+(const Matrix& m) {
        Matrix result;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                result.mat[i][j] = this->mat[i][j] + m.mat[i][j];
        return result;
    }

    
    void display() const {
        cout << "Matrix:\n";
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix A, B, C;

    cout << "Matrix A:\n";
    A.input();

    cout << "Matrix B:\n";
    B.input();

    C = A + B;

    cout << "Result of A + B:\n";
    C.display();

    return 0;
}
