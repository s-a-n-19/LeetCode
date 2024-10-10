class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        tm time_in = {0, 0, 0, day, month - 1, year - 1900};
         time_t time_temp = mktime(&time_in);
         int day_of_week = localtime(&time_temp)->tm_wday;
         string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
 return days[day_of_week];
        
    }
};