// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true
// Problem     Bitwise Operators
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-11, 08:01 p.m.
// Technique   nested-loop-bitwise-comparison
// Time        O(n^2)
// Space       O(1)
// Insight     The algorithm iterates through all unique pairs (i, j) where 1 ≤ i < j ≤ n and updates the maximum bitwise result for each operator if the result is strictly less than the threshold k.
// Interview   Before: "I could use a bit manipulation trick to find the maximums in O(n) time." After: "Given the constraints and the requirement to check all pairs, an O(n^2) brute-force approach is sufficient and correctly handles the threshold k for each bitwise operation."
// Pitfalls    (1) Failing to initialize maximum variables to zero, which causes incorrect results when no valid comparison exists below the threshold k.  (2) Using an incorrect inner loop range, such as starting from 1 instead of i + 1, which leads to redundant comparisons and potential self-comparison errors.  (3) Misinterpreting the threshold condition by using <= k instead of < k, which violates the requirement that the result must be strictly less than k.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int max_and = 0;
  int max_or = 0;
  int max_xor = 0;
  for (int i = 1; i <= n; i++){
    for (int j = i + 1; j <= n; j++){
        int and_res = i & j;
        int or_res = i | j;
        int xor_res = i ^ j;
        
        if (and_res < k && and_res > max_and) {
            max_and = and_res;
        }
        if (or_res < k && or_res > max_or){
            max_or = or_res;
        }
        if (xor_res < k && xor_res > max_xor) {
            max_xor = xor_res;
        }
    }
  }
  printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
