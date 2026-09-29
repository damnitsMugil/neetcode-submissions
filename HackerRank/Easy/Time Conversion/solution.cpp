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
