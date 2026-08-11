class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total=numBottles;
        int n;
        while(numBottles >= numExchange){
            n=numBottles/numExchange;
            total+=n;
            numBottles=numBottles%numExchange;
            numBottles+=n;
            

        }
        return total;

        
    }
};