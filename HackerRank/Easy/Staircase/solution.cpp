// HackerRank Problem: Staircase
// Link: https://www.hackerrank.com/challenges/staircase/problem
// Difficulty: Easy
// Language: cpp

#include <iostream>
using namespace std;

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ') << string(i, '#') << endl;
    }
}

int main() {
    int n;
    cin >> n;
    staircase(n);
    return 0;
}
