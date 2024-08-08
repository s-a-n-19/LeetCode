bool isPalindrome(char* s) {
    int n=strlen(s);
    if (n <= 1) {
        return true;
    }
    if (!isalnum(s[0])) {
        return isPalindrome(s + 1);
    }
    if (!isalnum(s[n - 1])) {
        s[n - 1] = '\0';  
        return isPalindrome(s);
    }
    if (tolower(s[0]) != tolower(s[n - 1])) {
        return false;
    }
    s[n - 1] = '\0';
    return isPalindrome(s + 1);
}