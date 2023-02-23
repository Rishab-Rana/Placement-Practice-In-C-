class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
      long int temp=0,rev;
        int actual=x;
        while(x!=0)
        {
            rev=(x%10);
            temp=(temp*10)+rev;
            x=x/10;
        }
        if(actual==temp)
        {
            return true;
        }
        else
        {
        return false;
        }
    }
};