class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int time = arrivalTime+delayedTime;
        if(time > 24){
            return time%24;
        }
        else if(time < 24){
            return time;
        }
        else{
            return 0;
        }
    }
};