// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
// Problem     For Loop in C
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-11, 07:47 p.m.
// Technique   iterative-conditional-mapping
// Time        O(b - a)
// Space       O(1)
// Insight     The implementation iterates through the inclusive range [a, b] and applies conditional logic to map integers 1-9 to their English names or classify integers greater than 9 as even or odd.
// Interview   Before: "I would use a series of if-else statements to handle the range and parity checks." After: "I implemented an O(b - a) loop that maps 1-9 using an array index and uses modulo arithmetic for numbers greater than 9, ensuring all constraints are met."
// Pitfalls    (1) Accessing the words array with index i instead of i-1, which causes an off-by-one error for the English representation.  (2) Failing to handle the inclusive range [a, b] by using i < b instead of i <= b in the loop condition.  (3) Neglecting to check the i >= 1 condition, which could lead to out-of-bounds access if the input range includes non-positive integers.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    // an array of strings represnting lowercase english words for numbers 1-9
    const char *words[] = {"one", "two", "three" , "four", "five", "six", "seven", "eight", "nine"};
    
  	// Complete the code.
    for (int i = a; i <= b; i++){
        if (i >= 1 && i <= 9){
            printf("%s\n", words[i - 1]);
        }
        else if (i > 9){
            if (i % 2 == 0){
                printf("even\n");
            }
            else {
                printf("odd\n");
            }
        }
    }

    return 0;
}

