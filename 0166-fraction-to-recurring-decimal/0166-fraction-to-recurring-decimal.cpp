class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {

        long long num = numerator;
        long long den = denominator;

        if (num == 0) {
            return "0";
        }

        string ans = "";

        if ((num < 0) ^ (den < 0)) {
            ans += "-";
        }

        num = llabs(num);
        den = llabs(den);

        ans += to_string(num / den);

        long long rem = num % den;

        if (rem == 0) {
            return ans;
        }

        ans += ".";

        unordered_map<long long, int> mp;

        while (rem != 0) {

            if (mp.count(rem)) {
                ans.insert(mp[rem], "(");
                ans += ")";
                break;
            }

            mp[rem] = ans.size();

            rem *= 10;

            int digit = rem / den;
            ans += to_string(digit);

            rem %= den;
        }

        return ans;
    }
};