class Solution {
public:

    long long MOD = 1000000007;

    long long fastPower(long long a, long long b) {
        long long ans = 1;

        while (b > 0) {

            if (b % 2 == 1) {
                ans = (ans * a) % MOD;
            }

            a = (a * a) % MOD;
            b = b / 2;
        }

        return ans;
    }

    int countGoodNumbers(long long n) {

        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long a = fastPower(5, even);
        long long b = fastPower(4, odd);

        return (a * b) % MOD;
    }
};