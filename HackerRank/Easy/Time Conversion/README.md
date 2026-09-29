# Time Conversion

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Time Conversion](https://www.hackerrank.com/challenges/time-conversion/problem)

## Problem Description

Given a time in [-hour AM/PM format](https://en.wikipedia.org/wiki/12-hour_clock), convert it to military (24-hour) time.

Note:
- 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock. **
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example**

*

Return '12:01:00'.

*

Return '00:01:00'.

**Function Description**

Complete the  function with the following parameter(s):

* : a time in  hour format

**Returns**

* : the time in  hour format

**Input Format**

A single string  that represents a time in -hour clock format (i.e.:  or ).

**Constraints**

* All input times are valid

**Sample Input 0**

```
07:05:45PM

```

**Sample Output 0**

```
19:05:45

```

## Examples



## Constraints



## Solution

```cpp
// HackerRank Problem: Time Conversion
// Link: https://www.hackerrank.com/challenges/time-conversion/problem
// Difficulty: Easy
// Language: cpp

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
  int timing = stoi(s.substr(0,2));
  if((s[s.length()-2] == 'P') && timing != 12){
    timing += 12; 
  }
  else if ((s[s.length() - 2] == 'A') && timing == 12)  {
    timing = 0;
  }
  s.erase(0,2);
  s.pop_back();
  s.pop_back();
  string hours = (timing < 10 ? "0" : "") + to_string(timing);
  return hours + s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
