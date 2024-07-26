class Solution {
public:
    double angleClock(int hour, int minutes) {
        // 1 hour = 30 deg => 360/12 (First year maths)
        //  1minutes in degree = 360/60  => 6 degree
        //  1hour in one minute =  30 / 60 = 0.5 degreee
        float hour_position = (hour % 12) * 30 + minutes * 0.5;
        float minutes_position = minutes * 6;
        float angle = abs(minutes_position - hour_position);
        angle = min(angle, 360 - angle);
        return angle;
    }
};