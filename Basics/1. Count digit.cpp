/*
Problem :- Count the number of digits in a number
*/
// Method 1 :- 
int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n != 0){
        n /= 10;
        count++;
    }
    cout << count << endl;
    return 0;
}

// Time complexity for this problem is O(log10(n) +1)

// Method 2 :- 

int countDigit(int n){
    int count = (int)(log10(n) + 1);
    return count;
}

// Time Complexity for this method :- O(1)