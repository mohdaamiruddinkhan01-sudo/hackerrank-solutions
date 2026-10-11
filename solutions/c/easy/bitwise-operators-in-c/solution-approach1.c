// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true
// Problem     Bitwise Operators
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-11, 08:01 p.m.
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
