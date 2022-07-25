#include <bits/stdc++.h>

using namespace std;

class Matrix
{
    vector<vector<int>> mat;

public:
    Matrix(int a = 0) : mat(vector<vector<int>>(10, vector<int>(10, a)))
    {
    }

    Matrix operator+(Matrix m)
    {
        Matrix res;
        for (int i = 0; i < this->mat.size(); i++)
        {
            for (int j = 0; j < this->mat[i].size(); j++)
                res.mat[i][j] = this->mat[i][j] + m.mat[i][j];
        }
        return res;
    }

    void display()
    {
        for (vector<int> row : mat)
        {
            for (int e : row)
                cout << e << " ";
            cout << endl;
        }
    }
};

int main()
{
    Matrix m1(10);
    Matrix m2(20);
    Matrix m3 = m1 + m2;
    m1.display();
    cout << "=========================\n";
    m2.display();
    cout << "=========================\n";
    m3.display();
    return 0;
}