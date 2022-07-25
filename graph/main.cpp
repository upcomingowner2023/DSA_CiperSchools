#include <bits/stdc++.h>

using namespace std;

int sumOfIndices(int arr[], int n, int target)
{
    unordered_map<int, int> f;
    for (int i = 0; i < n; i++)
    {
        int r = target - arr[i];
        if (f[r])
            return f[r] + i;
        f[arr[i]] = i;
    }
    for (auto m : f)
    {
        cout << m.second;
    }
    return -1;
}

int SumOrProduct(int a, int b, int c, char op)
{
    switch (op)
    {
    case '+':
        return ((b * -1) / a) + (c / a);
    case '*':
        return ((b * -1) / a) * (c / a);
    }
    return -1;
}

int Discriminant(int a, int b, int c)
{
    return b * b - (4 * a * c);
}

bool isDigitExist(int n, int k)
{
    while (n != 0)
    {
        if (n % 10 == k)
            return true;
        n = n / 10;
    }
    return false;
}

int kNumber(int k, int n)
{
    int num = k;
    while (n > 0)
    {
        if (num % k == 0 || isDigitExist(num, k))
        {
            n--;
            if (n == 0)
                return num;
        }
        num++;
    }
    return num;
}

struct array_single_int
{
    int *data;
    int size;
};

int minLength(array_single_int systemState, array_single_int dist)
{
    int answer = 0;
    for (int i = 1; i < systemState.size; i++)
    {
        if (systemState.data[i] == 0)
        {
            int a = 0, b = 0;
            if (systemState.data[i - 1] == 1)
                a = (dist.data[i] - dist.data[i - 1]);
            else if (i < systemState.size && systemState.data[i + 1] == 1)
                b = (dist.data[i] - dist.data[i - 1]);

            answer += min(a, b);
        }
    }

    return answer;
}

int CurrencyConvertor(int code, int amount)
{
    switch (code)
    {
    case 1:
        return amount * 65;
    case 2:
        return amount * 96;
    case 3:
        return amount * 62;
    case 4:
        return amount * 74;
    case 5:
        return amount * 11;
    }
    return 0;
}

int **Transpose(int **matrix, int rowCount, int columnCount)
{
    int **transpose;
    transpose = new int *[rowCount];
    for (int i = 0; i < rowCount; ++i)
    {
        for (int j = 0; j < columnCount; ++j)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    return transpose;
}

int MCQResult(int n, int key[], int paper[])
{
    int rAns = 0, wAns = 0;
    for (int i = 0; i < n; i++)
    {
        if (key[i] == paper[i])
            rAns++;
        else
            wAns++;
    }

    return (rAns * 3) - (wAns * 1);
}

int main()
{
    // cout << CurrencyConvertor(2, 500);
    // cout << kNumber(7, 10) << endl;
    // struct array_single_int systemState;
    // systemState.size = 3;
    // systemState.data = new int(3);
    // systemState.data[0] = 1;
    // systemState.data[1] = 0;
    // systemState.data[2] = 0;
    // struct array_single_int array_single_int;
    // array_single_int.size = 3;
    // array_single_int.data = new int(3);
    // array_single_int.data[0] = 1;
    // array_single_int.data[1] = 5;
    // array_single_int.data[2] = 6;
    // cout << minLength(systemState, array_single_int) << endl;
    // cout << Discriminant(1, 4, 2);
    // cout << SumOrProduct(3, 9, 6, '+') << endl;
    // cout << SumOrProduct(4, -16, 8, '*') << endl;
    // int v, e;

    // cin >> v >> e;
    // vector<vector<int>> graph(v, vector<int>(v, 0));

    // for (int i = 0; i < e; i++)
    // {
    //     int s, d;
    //     cin >> s >> d;

    //     graph[s][d] = 1;
    //     graph[d][s] = 1;
    // }

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // cout << sumOfIndices(arr, 8, 14) << endl;
    // cout << sumFactorialDigits(124) << endl;
    // int p = 5, q = 11, r = 4;
    // for (int i = 5; i <= 9; i++)
    //     q = (11 + 12) + q;
    // for (int i = 3; i <= 6; i++)
    // {
    //     p = 3 ^ p;
    //     p = (q + r) + q;
    // }
    // cout << p << endl;
    // cout << q << endl;
    // cout << r << endl;
    return 0;
}