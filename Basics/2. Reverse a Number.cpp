/*
Problem :- Reverse the Given Number;
*/

int reverseNumber(int n){
    int revNum = 0;
    while(n>0){
        int digit = n % 10;
        revNum = revNum * 10 + digit;
        digit /= 10;
    }
    return revNum;
}

// Time Complexity :- O(Log10(n)+1);