class Solution {
public:
    bool isPalindrome(int x) 
    {

        if(x<0)
            return false;
        long  remainder, y=0;
        int temp=x;
        while(x>0)
        {
            remainder=x%10;
            y=y*10+remainder;
            x=x/10;


        }
        return (temp==y);
    }
};
