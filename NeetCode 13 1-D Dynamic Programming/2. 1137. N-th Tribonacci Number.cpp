bool done = false;
int ans[38];

class Solution {
public:
    int tribonacci(int n) {
        if (!done) {
            done = true;
            ans[0] = 0;
            ans[1] = 1;
            ans[2] = 1;
            for (int i = 3; i <= 37; i++) {
                ans[i] = ans[i - 1] + ans[i - 2] + ans[i - 3];
            }
        }
        return ans[n];
    }
};
