# Birthday Cake Candles

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Birthday Cake Candles](https://www.hackerrank.com/challenges/birthday-cake-candles/problem)

## Problem Description

You are in charge of the cake for a child's birthday. It will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Your task is to count how many candles are the tallest.

**Example**

The tallest candles are `4` units high. There are `2` candles with this height, so the function should return `2`.

**Function Description**

Complete the function  with the following parameter(s):

* : the candle heights

**Returns**

* : the number of candles that are tallest

**Input Format**

The first line contains a single integer, , the size of . **
The second line contains  space-separated integers, where each integer  describes the height of .

Constraints**

*

*

**Sample Input 0**

```
4
3 2 1 3

```

**Sample Output 0**

```
2

```

**Explanation 0**

Candle heights are .  The tallest candles are  units, and there are  of them.

## Examples



## Constraints



## Solution

```cpp
// HackerRank Problem: Birthday Cake Candles
// Link: https://www.hackerrank.com/challenges/birthday-cake-candles/problem
// Difficulty: Easy
// Language: cpp

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> c) {
  int maxel = *max_element(c.begin(), c.end());
  int countel = count(c.begin(), c.end(), maxel);
  return countel;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string candles_count_temp;
    getline(cin, candles_count_temp);

    int candles_count = stoi(ltrim(rtrim(candles_count_temp)));

    string candles_temp_temp;
    getline(cin, candles_temp_temp);

    vector<string> candles_temp = split(rtrim(candles_temp_temp));

    vector<int> candles(candles_count);

    for (int i = 0; i < candles_count; i++) {
        int candles_item = stoi(candles_temp[i]);

        candles[i] = candles_item;
    }

    int result = birthdayCakeCandles(candles);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
