# Daily-Coding
Just a challenge for me to see how far I can keep up by doing one coding question per day!

***
## Day 1
### Problem Statement: Exactly 3 divisors
Given a number N, print all numbers in the range from 1 to N having exactly 3 divisors. <br />
https://www.geeksforgeeks.org/numbers-exactly-3-divisors/

**Examples:** <br />
Input : N = 16 <br />
Output : 4 9 <br />
4 and 9 have exactly three divisors.

Input : N = 49 <br />
Output : 4 9 25 49 <br />
4, 9, 25 and 49 have exactly three divisors.

Expected Time Complexity : O(N1/2 * N1/4) <br />
Expected Auxilliary Space :  O(1) <br />

Constraints : 1 <= N <= 109

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day1(3_divisors).py) 

***
## Day 2
### Problem Statement: Modular multiplicative inverse
Given two integers ‘a’ and ‘m’, find modular multiplicative inverse of ‘a’ under modulo ‘m’.
The modular multiplicative inverse is an integer ‘x’ such that: a x ≅ 1 (mod m).
The value of x should be in {0, 1, 2, … m-1}, i.e., in the range of integer modulo m. <br />
https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/

**Examples:** <br />
Input:  a = 3, m = 11 <br />
Output: 4 <br />
Since (4*3) mod 11 = 1, 4 is modulo inverse of 3(under 11).
One might think, 15 also as a valid output as "(15*3) mod 11" 
is also 1, but 15 is not in ring {0, 1, 2, ... 10}, so not 
valid.

Input:  a = 10, m = 17 <br />
Output: 12 <br />
Since (10*12) mod 17 = 1, 12 is modulo inverse of 10(under 17).

Expected Time Complexity : O(m) <br />
Expected Auxilliary Space : O(1) <br />

Constraints: <br />
1 <= a <= 104 <br />
1 <= m <= 104

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day2(Modular_multiplicative_inverse).py)

***
## Day 3
### Problem Statement: First Repeating Element
Given an array of integers, find the first repeating element in it. 
We need to find the element that occurs more than once and whose index of first occurrence is smallest. <br />
https://www.geeksforgeeks.org/find-first-repeating-element-array-integers/

**Examples:** <br />
Input:  arr[] = {10, 5, 3, 4, 3, 5, 6} <br />
Output: 5 [5 is the first element that repeats] 

Input:  arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10} <br />
Output: 6 [6 is the first element that repeats]

Expected Time Complexity: O(NlogN) <br />
Expected Auxilliary Space: O(N) <br />

Constraints:<br />
1 <= N <= 106 <br />
0 <= Ai<= 106

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day3(Repeating_element).py)

***
## Day 4
### Problem Statement: Rearrange an array with O(1) extra space
Given an array arr[] of size n where every element is in range from 0 to n-1. 
Rearrange the given array so that arr[i] becomes arr[arr[i]].
This should be done with O(1) extra space. <br />
https://www.geeksforgeeks.org/rearrange-given-array-place/

**Examples:** <br />
Input: <br />
N = 2 <br />
arr[] = {1,0} <br />
Output: 0 1 <br />

Input: <br />
N = 5 <br />
arr[] = {4,0,2,1,3} <br />
Output: 3 4 2 0 1 <br />
arr[arr[0]] is 3 so arr[0] in output array is 3
arr[arr[1]] is 4 so arr[1] in output array is 4
arr[arr[2]] is 2 so arr[2] in output array is 2
arr[arr[3]] is 0 so arr[3] in output array is 0
arr[arr[4]] is 1 so arr[4] in output array is 1

Expected Time Complexity: O(N) <br />
Expected Auxiliary Space: O(1) <br />
 
Constraints: <br />
1 <= N <= 107 <br />
0 <= Arr[i] < N

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day4(O(1)_extra_sp).py)

***
## Day 5
### Problem Statement: Trapping Rain Water 
Given n non-negative integers representing an elevation map where the width of each bar is 1, 
compute how much water it is able to trap after raining. <br />
https://www.geeksforgeeks.org/trapping-rain-water/

**Examples:** <br />
Input: arr[]   = {2, 0, 2} <br />
Output: 2 <br />
We can trap 2 units of water in the middle gap.

Input: arr[]   = {3, 0, 2, 0, 4} <br />
Output: 7 <br />
We can trap "3 units" of water between 3 and 2,"1 unit" on top of bar 2 and "3 units" between 2 and 4.

Expected Time Complexity: O(N) <br />
Expected Auxiliary Space: O(N)

Constraints: <br />
3 <= N <= 107 <br />
0 <= Ai <= 108

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day5(Trapping_water).py)

***
## Day 6
### Problem Statement: Merge with O(1) extra space
We are given two sorted arrays. 
We need to merge these two arrays such that the initial numbers (after complete sorting) 
are in the first array and the remaining numbers are in the second array.
Extra space allowed in O(1). <br />
https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/

**Examples:** <br />
Input: ar1[] = {10}; <br />
       ar2[] = {2, 3};<br />
Output: ar1[] = {2} <br />
        ar2[] = {3, 10} <br />

Input: ar1[] = {1, 5, 9, 10, 15, 20}; <br />
       ar2[] = {2, 3, 8, 13}; <br />
Output: ar1[] = {1, 2, 3, 5, 8, 9} <br />
        ar2[] = {10, 13, 15, 20} <br />
        
Expected Time Complexity:  O((n+m) log(n+m)) <br />
Expected Auxilliary Space: O(1)
 
Constraints:<br />
1 <= X, Y <= 5*104 <br />
0 <= arr1i, arr2i <= 109 

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day6(Merging_in_O(1)).py)
