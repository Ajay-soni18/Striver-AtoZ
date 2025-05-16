/*
Problem :- we Have given the Number/string need to tell whether is it palindrome or not
*/

// Method 1 :-
 bool isPalindrome(int x){
        if(x<0)
            return false;
        int revNum = 0;
        int original = x;
        while(x>0){
            int digit = x % 10;
            revNum = revNum * 10 + digit;
            x /= 10;
        }
        return revNum==original;
    }

    // Time Complexity :- O(Log10(x)+1);

// Method 2 :-

    bool isPalindrome(int x) {
        string original = to_string(x);
        string reversed = string(original.rbegin(), original.rend());
        return original == reversed;
    }


    // Time complexity :- n = log10(x) , O(n)+O(n)+O(n)