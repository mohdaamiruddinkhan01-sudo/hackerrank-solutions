// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=true
// Problem     Conditional Statements in C
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-11, 08:05 p.m.
// Technique   if-else-ladder-mapping
// Time        O(1)
// Space       O(1)
// Insight     The implementation maps each integer from one to nine to its corresponding English word using a sequential conditional ladder, defaulting to a specific string for any value greater than nine.
// Interview   Before: "I would use a switch statement or an array of strings to handle these mappings." After: "Using an if-else ladder provides O(1) time complexity, which is optimal for this range, while correctly handling the 'Greater than 9' requirement for inputs outside the 1-9 range."
// Pitfalls    (1) Failing to handle the 'Greater than 9' case explicitly as required by the problem statement.  (2) Incorrectly assuming the input is always a single digit, ignoring the requirement to print 'Greater than 9' for larger integers.  (3) Using an incorrect string literal for the English word representation of the integer.
// ──────────────────────────────────────────────────

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    // Write Your Code Here
    if (n == 1) {
        printf("one\n");
    } else if (n == 2) {
        printf("two\n");
    } else if (n == 3) {
        printf("three\n");
    } else if (n == 4) {
        printf("four\n");
    } else if (n == 5) {
        printf("five\n");
    } else if (n == 6) {
        printf("six\n");
    } else if (n == 7) {
        printf("seven\n");
    } else if (n == 8) {
        printf("eight\n");
    } else if (n == 9) {
        printf("nine\n");
    } else if (n > 9) {
        printf("Greater than 9\n");
    }

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);
    return data;
}
