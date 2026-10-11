// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
// Problem     For Loop in C
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-11, 07:47 p.m.
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

