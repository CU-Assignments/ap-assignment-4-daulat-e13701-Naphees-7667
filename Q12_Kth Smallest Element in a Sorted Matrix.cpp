#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        for (auto& row : matrix)
            for (int num : row) {
                pq.push(num);
                if (pq.size() > k) pq.pop();
            }
        return pq.top();
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {{1, 5, 9}, {10, 11, 13}, {12, 13, 15}};
    int k = 8;
    cout << sol.kthSmallest(matrix, k) << endl;
    return 0;
}
