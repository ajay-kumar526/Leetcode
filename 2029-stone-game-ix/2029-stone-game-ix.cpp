class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {0};

        for (int x : stones) {
            cnt[x % 3]++;
        }

        if (cnt[1] == 0 && cnt[2] == 0)
            return false;

        int mx = max(cnt[1], cnt[2]);
        int mn = min(cnt[1], cnt[2]);

        if (cnt[0] % 2 == 0)
            return mn > 0;

        return mx - 2 > mn;
    }
};