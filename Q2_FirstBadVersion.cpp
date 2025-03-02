#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isBadVersion(int version) {
        return version >= 4; // Example bad version
    }

    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid))
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};

int main() {
    Solution sol;
    cout << sol.firstBadVersion(5) << endl;
    return 0;
}
