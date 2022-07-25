#include <bits/stdc++.h>

using namespace std;

class MaxHeap
{
    vector<int> v;

public:
    bool empty()
    {
        return v.empty();
    }

    void push(int val)
    {
        v.push_back(val);
        int childIdx = v.size() - 1;
        int parentIdx = (childIdx - 1) / 2;
        while (childIdx >= 0)
        {
            if (v[childIdx] > v[parentIdx])
            {
                swap(v[childIdx], parentIdx);
            }
            else
                break;
            childIdx = parentIdx;
            parentIdx = (childIdx - 1) / 2;
        }
    }

    int getMax()
    {
        if (v.size() == 0)
            return -1;
        return v[0];
    }

    int remove()
    {
        if (v.size() == 0)
            return -1;
        int ans = v[0];
        swap(v[0], v[v.size() - 1]);
        v.pop_back();

        int parentIdx = 0;
        int lci = 2 * parentIdx + 1;
        int rci = 2 * parentIdx + 2;
        while (lci < v.size())
        {
            int minIdx = parentIdx;
            if (v[minIdx] < v[lci])
            {
                minIdx = lci;
            }
            if (v[minIdx] < v[rci])
            {
                minIdx = rci;
            }

            if (minIdx == parentIdx)
                break;

            swap(v[minIdx], v[parentIdx]);
            parentIdx = minIdx;
            lci = 2 * parentIdx + 1;
            rci = 2 * parentIdx + 2;
        }
    }
};

int main()
{
    MaxHeap mh;
    mh.push(100);

    // for (int i = 10; i < 100; i++)
    //     mh.push(i);

    // cout << mh.getMax() << endl;
}