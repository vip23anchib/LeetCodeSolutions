
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();

        int currentScore = 0;
        for(int i = 0; i < k; i++) {
            currentScore += cardPoints[i];
        }

        int maxScore = currentScore;

        int right = n - 1;

        for(int i = k - 1; i >= 0; i--) {

            currentScore -= cardPoints[i];

            currentScore += cardPoints[right];

            right--;

            maxScore = max(maxScore, currentScore);
        }

        return maxScore;
    }
};