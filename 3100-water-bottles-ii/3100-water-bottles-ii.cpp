class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {

        int total = numBottles;

        while (numBottles>=numExchange) {

            numBottles = numBottles - numExchange;

            numExchange++;

            total++;

            numBottles++;
        }

        return total;
    }
};