// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true
// Problem     Functions in C
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-11, 07:33 p.m.
// Technique   sequential-comparison-max-tracking
// Time        O(1)
// Space       O(1)
// Insight     The function maintains a running maximum by sequentially comparing the current maximum against each subsequent argument.
// Interview   Before: "I would use a sorting algorithm to find the maximum." After: "Since we only have four fixed inputs, a simple sequential comparison is more efficient, resulting in O(1) time and O(1) space complexity."
// Pitfalls    (1) Failing to initialize the max variable with the first argument, which could lead to incorrect results if all inputs are negative.  (2) Using an incorrect comparison operator, such as >= instead of >, which does not affect the result but is logically redundant.
// ──────────────────────────────────────────────────

#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max = a;
    
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    return max;
}
int main()
{
    int a, b, c,  d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    return 0;
}
