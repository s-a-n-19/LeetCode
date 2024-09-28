class Solution {
public:
    int countDigits(int num) {
        int cnt=0;
        int a=num;
        while(num!=0){
            int rem=num%10;
            if(a%rem==0){
                cnt++;
            }
            num=num/10;
        }
        return cnt;
    }
};