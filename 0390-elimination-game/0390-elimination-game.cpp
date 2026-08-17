class Solution {
public:
    int lastRemaining(int n) {

        int first = 1;
        int step = 1;
        int count = n;

        bool leftToRight = true;

        while(count > 1) {

            if(leftToRight || count % 2 == 1) {
                first = first + step;
            }

            count = count / 2;

            step = step * 2;

            leftToRight = !leftToRight;
        }

        return first;
    }
};