int reverse(int x){
  int rev=0;
  while(x!=0){
    int a=x%10;
     if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && a > 7)) {
            return 0;
        }
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && a < -8)) {
            return 0;
        }
    rev=rev*10+a;
    x=x/10;
  }

 return rev;
}