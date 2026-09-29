# Arrays

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Arrays](https://www.hackerrank.com/challenges/np-arrays/problem)

## Problem Description

The *NumPy* (Numeric Python) package helps us manipulate large arrays and matrices of numeric data.

To use the *NumPy* module, we need to import it using:

```
import numpy

```

[**Arrays**](http://docs.scipy.org/doc/numpy/reference/arrays.html)

A *NumPy* array is a grid of values. They are similar to lists, except that every element of an array must be the same type.

```
import numpy

a = numpy.array([1,2,3,4,5])
print a[1]          #2

b = numpy.array([1,2,3,4,5],float)
print b[1]          #2.0

```

In the above example, `numpy.array()` is used to convert a list into a *NumPy* array. The second argument (float) can be used to set the type of array elements.

**Task**

You are given a space separated list of numbers. **
Your task is to print a reversed *NumPy* array with the element type `float`.

Input Format**

A single line of input containing space separated numbers.

**Output Format**

Print the reverse *NumPy* array with type float.

**Sample Input**

```
1 2 3 4 -8 -10

```

**Sample Output**

```
[-10.  -8.   4.   3.   2.   1.]

```

## Examples



## Constraints



## Solution

```pypy3
// HackerRank Problem: Arrays
// Link: https://www.hackerrank.com/challenges/np-arrays/problem
// Difficulty: Easy
// Language: pypy3



def arrays(arr):
    arr.reverse()
    arr = numpy.array(arr,float)
    return arr


```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
