#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter number: ";
    cin >> num;

    // STEP 1 — Ask yourself: "Do I need to compare at end?"
    // YES → write this    NO → skip it
    int original = num;

    // STEP 2 — Always start answer at 0
    int answer = 0;

    // STEP 3 — Loop (same every time, never changes!)
    while(num > 0){
        
        int digit = num % 10;  // GET last digit (never changes)

        // STEP 4 — Only THIS line changes per program! 👇
        // Sum of digits → answer = answer + digit;
        // Reverse       → answer = answer * 10 + digit;
        // Armstrong     → answer = answer + (digit*digit*digit);
        // Palindrome    → answer = answer * 10 + digit;

        num = num / 10;        // REMOVE last digit (never changes)
    }

    // STEP 5 — Ask yourself: "Do I compare or just print?"
    // JUST PRINT       → cout << answer;
    // COMPARE          → if(answer == original)

    return 0;
}