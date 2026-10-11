// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
// Problem     Sum and Difference of Two Numbers
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-11, 07:14 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int int1, int2;
    float float1, float2;
    
    scanf("%d %d", &int1, &int2);
    scanf("%f %f", &float1, &float2);
    
    printf("%d %d\n", int1 + int2, int1 - int2);
    printf("%.1f %.1f", float1 + float2, float1- float2);
    
    return 0;
}
