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

Constraints : 1 <= N <= 10<sup>9</sup>

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
1 <= a <= 10<sup>4</sup> <br />
1 <= m <= 10<sup>4</sup>

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
1 <= N <= 10<sup>6</sup> <br />
0 <= Ai<= 10<sup>6</sup>

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
1 <= N <= 10<sup>7</sup> <br />
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
3 <= N <= 10<sup>7</sup> <br />
0 <= Ai <= 10<sup>8</sup>

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
1 <= X, Y <= 5*10<sup>4</sup> <br />
0 <= arr1i, arr2i <= 10<sup>9</sup> 

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day6(Merging_in_O(1)).py)

***
## Day 7
### Problem Statement: Search an element in sorted and rotated array
An element in a sorted array can be found in O(log n) time via binary search. 
But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. 
So for instance, 1 2 3 4 5 might become 3 4 5 1 2. 
Devise a way to find an element in the rotated array in O(log n) time.<br />
https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/

**Examples:** <br />
Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}; <br />
         key = 3 <br />
Output : Found at index 8

Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}; <br />
         key = 30<br />
Output : Not found

Input : arr[] = {30, 40, 50, 10, 20} <br />
        key = 10   <br />
Output : Found at index 3

Expected Time Complexity: O(log N). <br />
Expected Auxiliary Space: O(1). 

Constraints:<br />
1 ≤ N ≤ 10<sup>7</sup> <br />
0 ≤ Ai ≤ 10<sup>8</sup> <br />
1 ≤ K ≤ 10<sup>8</sup>

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day7(Search_in_sort_rotated).py)

***
## Day 8
### Problem Statement: Search an element in sorted and rotated array
Implement Merge Sort is a Divide and Conquer algorithm. 
It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. 
The merge() function is used for merging two halves. 
The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one. <br />
https://www.geeksforgeeks.org/merge-sort/

Expected Auxiliary Space: O(n) <br />
Expected Time Complexity: O(n) for the merge() function only.

Constraints:<br />
1 <= N <= 10<sup>5</sup> <br />
1 <= arr[i] <= 10<sup>3</sup>

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day8(Merge_sort).py)

***
## Day 9
### Problem Statement: Union of 2 sorted arrays
Given two sorted arrays, find their union. <br />
https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/

**Examples:** <br />
Input : arr1[] = {1, 3, 4, 5, 7} <br />
        arr2[] = {2, 3, 5, 6} <br />
Output : Union : {1, 2, 3, 4, 5, 6, 7}  

Input : arr1[] = {2, 5, 6} <br />
        arr2[] = {4, 6, 8, 10} <br />
Output : Union : {2, 4, 5, 6, 8, 10} 

Expected Time Complexity: O(N+M) <br />
Expected Auxiliary Space: O(N+M) <br />
 
Constraints: <br />
1 <= N, M <= 10<sup>5</sup> <br />
1 <= arr[i], brr[i] <= 10<sup>6</sup>

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day9(List_union).py)

***
## Day 10
### Problem Statement: Intersection of 2 sorted arrays
Given two sorted arrays, find their union. <br />
https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/

**Examples:** <br />
Input : arr1[] = {1, 3, 4, 5, 7} <br />
        arr2[] = {2, 3, 5, 6} <br />
Output : Intersection : {3, 5}

Input : arr1[] = {2, 5, 6} <br />
        arr2[] = {4, 6, 8, 10} <br />
Output : Intersection : {6}
        
Expected Time Complexity: O(N+M) <br />
Expected Auxiliary Space: O(N+M) <br />
 
Constraints: <br />
1 <= N, M <= 10<sup>5</sup> <br />
1 <= arr[i], brr[i] <= 10<sup>6</sup>

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day10(List_intersection).py)
       
***
## Day 11
### Problem Statement: Minimum number of swaps
Given an array of n distinct elements, find the minimum number of swaps required to sort the array.<br />
https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/

**Examples:** <br />
Input : {4, 3, 2, 1} <br />
Output : 2 <br />
Explanation : Swap index 0 with 3 and 1 with 2 to form the sorted array {1, 2, 3, 4}.

Input : {1, 5, 4, 3, 2}<br />
Output : 2

Expected Time Complexity: O(nlogn)<br />
Expected Auxiliary Space: O(n)

Constraints:<br />
1 ≤ n ≤ 10<sup>5</sup><br />
1 ≤ nums<sub>i</sub> ≤ 10<sup>6</sup>

**Solution:** [here]

***
## Day 12
### Problem Statement: Doubling and searching
Given an array “a[]” and integer “b”. Find whether b is present in a[] or not. 
If present, then double the value of b and search again. 
We repeat these steps until b is not found. Finally we return value of b.<br />
https://www.geeksforgeeks.org/repeatedly-search-element-doubling-every-successful-search/

**Examples:** <br />
Input : a[] = {1, 2, 3}<br />
        b = 1 <br />
Output :4<br />
Initially we start with b = 1. Since it is present in array, it becomes 2.
Now 2 is also present in array b becomes 4 .Since 4 is not present, we return 4.

Input : a[] = {1 3 5 2 12} <br />
        b = 3 <br />
Output :6

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day12(Doubling_after_search).py)

***
## Day 13
### Problem Statement: Minimum platforms
Given arrival and departure times of all trains that reach a railway station, 
the task is to find the minimum number of platforms required for the railway station so that no train waits. 
We are given two arrays which represent arrival and departure times of trains that stop.<br />
https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/

**Examples:** <br />
Input: arr[] = {9:00, 9:40, 9:50, 11:00, 15:00, 18:00} <br />
dep[] = {9:10, 12:00, 11:20, 11:30, 19:00, 20:00} <br />
Output: 3 <br />
Explantion: There are at-most three trains at a time (time between 11:00 to 11:20)

Input: arr[] = {9:00, 9:40} <br />
dep[] = {9:10, 12:00} <br />
Output: 1 <br />
Explantion: Only one platform is needed. 

Expected Time Complexity: O(nLogn) <br />
Expected Auxiliary Space: O(n)

Constraints:<br />
1 <= N <= 1000<br />
1 <= A[i] < D[i] <= 2359<br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day13(Minimum_platforms).py)

***
## Day 14
### Problem Statement: Find the Median
Given two sorted arrays, a[] and b[], 
the task is to find the median of these sorted arrays, 
in O(log n + log m) time complexity, when n is the number of elements in the first array, 
and m is the number of elements in the second array.<br />
https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/

**Examples:** <br />
Input: ar1[] = {-5, 3, 6, 12, 15}<br />
        ar2[] = {-12, -10, -6, -3, 4, 10}<br />
Output : The median is 3.<br />
Explanation : The merged array is :
        ar3[] = {-12, -10, -6, -5 , -3,
                 3, 4, 6, 10, 12, 15},
       So the median of the merged array is 3

Input: ar1[] = {2, 3, 5, 8}<br />
        ar2[] = {10, 12, 14, 16, 18, 20}<br />
Output : The median is 11.<br />
Explanation : The merged array is :
        ar3[] = {2, 3, 5, 8, 10, 12, 14, 16, 18, 20}
        if the number of the elements are even, 
        so there are two middle elements,
        take the average between the two :
        (10 + 12) / 2 = 11.
        
Expected Time Complexity : O(log(max(m,n)))  <br />
Expected Auxilliary Space : O(n)

Constraints:<br />
1 <= N, M <= 10^6<br />
1 <= arr[i], brr[i] <= 10^7

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day14(Find_median).py)

***
## Day 15
### Problem Statement: Sort array of 0s, 1s, 2s
Given an array A[] consisting 0s, 1s and 2s. 
The task is to write a function that sorts the given array. 
The functions should put all 0s first, then all 1s and all 2s in last.<br />
https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

**Examples:** <br />
Input: {0, 1, 2, 0, 1, 2}<br />
Output: {0, 0, 1, 1, 2, 2}

Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}<br />
Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}

Expected Time Complexity: O(N)<br />
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 10^5
0 <= A[i] <= 2

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day15(Array_of_0s1s2s).py)

***
## Day 16
### Problem Statement: Matrix operations
Demonstrate different matrix operations (Addition, Subtraction, Multiplication)<br />
https://www.geeksforgeeks.org/different-operation-matrices/

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day16(Matrix_ops).py)

***
## Day 17
### Problem Statement: Minimum maximum difference
Given an array of N elements, the task is to minimize the maximum difference of adjacent elements by inserting at most K elements in the array.<br />
https://www.geeksforgeeks.org/minimize-the-maximum-difference-of-adjacent-elements-after-at-most-k-insertions/

**Examples:** <br />

Input: arr = [2, 6, 8] K = 1 <br />
Output: 2 <br />
Explanation: 
After insertion of 4 in between 2 and 6, the array becomes [2, 4, 6, 8]. In this case the maximum difference between any adjacent element is 2, which is the minimum that can be.

Input: arr = [3, 12] K = 2 <br />
Output: 3 <br />
Explanation: 
After insertion of 6 and 9 in between 3 and 12, the array becomes [3, 6, 9, 12]. In this case the maximum difference between any adjacent element is 3, which is the minimum that can be. 

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day17(Min_max_diff).py)

***
## Day 18
### Problem Statement: Determinant of a matrix
Given a square matrix of size N x N. The task is to find the determinant of this matrix.
https://www.geeksforgeeks.org/determinant-of-a-matrix/

**Examples:** <br />

Input: N = 4<br />
matrix[][] = {{1, 0, 2, -1},<br />
              {3, 0, 0, 5},<br />
              {2, 1, 4, -3},<br />
              {1, 0, 5, 0}}<br />
Output: 30<br />
Explanation:
Determinant of the given matrix is 30. 

Input: N = 3<br /> 
matrix[][] = {{1, 2, 3},<br />
              {4, 5, 6},<br />
              {7, 10, 9}}<br />
Output: 12<br />
Explanation:
Determinant of the given matrix is 12.

Expected Time Complexity: O(N^4)<br />
Expected Auxiliary Space: O(N^2)

Constraints:<br />
1 <= N <= 8<br />
-10 <= mat[i][j] <= 10

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day18(Determinant).py)

***
## Day 19
### Problem Statement: Transpose of a matrix
Write a program to find the transpose of a square matrix of size N*N. 
Transpose of a matrix is obtained by changing rows to columns and columns to rows.<br />
https://www.geeksforgeeks.org/program-to-find-transpose-of-a-matrix/

**Examples:** <br />

Input:
N = 4<br />
mat[][] = {{1, 1, 1, 1},<br />
           {2, 2, 2, 2}<br />
           {3, 3, 3, 3}<br />
           {4, 4, 4, 4}}<br />
Output: <br />
{{1, 2, 3, 4},<br />  
 {1, 2, 3, 4}<br />  
 {1, 2, 3, 4}<br />
 {1, 2, 3, 4}} 

Input:
N = 2<br />
mat[][] = {{1, 2},<br />
           {-9, -2}}<br />
Output:<br />
{{1, -9}, <br />
 {2, -2}}
 
Expected Time Complexity: O(N * N)<br />
Expected Auxiliary Space: O(1)

Constraints:<br />
1 <= N <= 100<br />
-10^3 <= mat[i][j] <= 10^3

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day19(Transpose).py)

***
## Day 20
### Problem Statement: Rotate by 90 degree
Given a square matrix of size N x N. 
The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space. <br />
https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/

**Examples:** <br />

Input:
N = 3 <br />
matrix[][] = {{1, 2, 3},<br />
              {4, 5, 6}<br />
              {7, 8, 9}}<br />
Output: <br />
Rotated Matrix:<br />
3 6 9<br />
2 5 8<br />
1 4 7<br />

Input: 
N = 2<br />
matrix[][] = {{1, 2},<br />
              {3, 4}}<br />
Output: <br />
Rotated Matrix:<br />
2 4<br />
1 3<br />

Expected Time Complexity: O(N^2)<br />
Expected Auxiliary Space: O(1)<br />

Constraints:<br />
1 ≤ N ≤ 100<br />
1 <= matrix[][] <= 1000

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day20(Rotate_anti).py)

***
## Day 21
### Problem Statement: Spirally traversing a matrix
Given a matrix of size R*C. Traverse the matrix in spiral form. <br />
https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/

**Examples:** <br />

Input:
R = 4, C = 4<br />
matrix[][] = {{1, 2, 3, 4},<br />
           {5, 6, 7, 8},<br />
           {9, 10, 11, 12},<br />
           {13, 14, 15,16}}<br />
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10<br />

Expected Time Complexity: O(R*C)<br />
Expected Auxiliary Space: O(R*C)<br />

Constraints:<br />
1 <= R, C <= 100<br />
0 <= matrixi <= 100

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day21(Spiral_matrix).py)

***
## Day 22
### Problem Statement: Search in a row-column sorted Matrix
Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. 
Find whether element x is present in the matrix or not.<br />
https://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/

**Examples:** <br />

Input:<br />
n = 3, m = 3, x = 62 <br />
matrix[][] = {{ 3, 30, 38},<br />
              {36, 43, 60},<br />
              {40, 51, 69}}<br />
Output: 0 <br />
Explanation:
62 is not present in the matrix,  
so output is 0.<br />

Input: <br />
n = 1, m = 6, x = 55 <br />
matrix[][] = {{18, 21, 27, 38, 55, 67}} <br />
Output: 1 <br />
Explanation: 55 is present in the matrix. <br />

Expected Time Complexity: O(N + M) <br />
Expected Auxiliary Space: O(1)<br />

Constraints: <br />
1 <= N, M <= 1000 <br />
1 <= mat[][] <= 10^5 <br />
1 <= X <= 1000 <br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day22(Searching_sorted_mat).py)

***
## Day 23
### Problem Statement: Max rectangle
Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.<br />
https://www.geeksforgeeks.org/maximum-size-rectangle-binary-sub-matrix-1s/

**Examples:** <br />

Input:
n = 4, m = 4 <br />
M[][] = {{0 1 1 0},<br />
         {1 1 1 1},<br />
         {1 1 1 1},<br />
         {1 1 0 0}}<br />
Output: 8<br />
Explanation: For the above test case the matrix will look like<br />
0 1 1 0<br />
1 1 1 1<br />
1 1 1 1<br />
1 1 0 0<br />
the max size rectangle is <br />
1 1 1 1<br />
1 1 1 1<br />
and area is 4 *2 = 8.<br />

Expected Time Complexity : O(n*m)<br />
Expected Auixiliary Space : O(m)<br />

Constraints:<br />
1<=n,m<=1000<br />
0<=M[][]<=1<br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day23(Max_rect).py)

## Day 24
### Problem Statement: Convert to Roman No
Given a number, find its corresponding Roman numeral.  <br />
https://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/

**Examples:** <br />

Input : 9 <br />
Output : IX <br />

Input :  1904 <br />
Output : MCMIV <br />

Expected Time Complexity: O(log10N) <br />
Expected Auxiliary Space: O(log10N * 10)<br />

Constraints:<br />
1<=n<=3999<br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day24(Roman_num).py)

## Day 25
### Problem Statement: Maximum Occuring Character 
Given a string str. The task is to find the maximum occurring character in the string str. 
If more than one character occurs the maximum number of time then print the lexicographically smaller character.  <br />
https://www.geeksforgeeks.org/maximum-occurring-character-in-an-input-string-set-2/

**Examples:** <br />

Input: 
str = testsample  <br />
Output: e  <br />
Explanation: e is the character which
is having the highest frequency.  <br />

Input:
str = output  <br />
Output: t  <br />
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.  <br />

Expected Time Complexity: O(N). <br />
Expected Auxiliary Space: O(Number of distinct characters).<br />
Note: N = |s| <br />

Constraints: 
1 ≤ |s| ≤ 100

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day25(Max_occuring_char).py)

## Day 26
### Problem Statement: Maximum Occuring Character
You are given a string s. You need to find the missing characters in the string to make a panagram.
Note: The output characters will be lowercase and lexicographically sorted.<br />
https://www.geeksforgeeks.org/missing-characters-make-string-pangram/

**Examples:** <br />

Input: <br />
s = Abcdefghijklmnopqrstuvwxy  <br />
Output: z 

Input:  <br />
s = Abc <br />
Output: defghijklmnopqrstuvwxyz

Expected Time Complexity: O(|S|).<br />
Expected Auxiliary Space: O(1).

Constraints:<br />
1 <= |s| <= 10000<br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day26(Missing_char).py)

## Day 27
### Problem Statement: Validate an IP Address
The generalized form of an IPv4 address is (0-255).(0-255).(0-255).(0-255). 
Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered invalid.<br />
https://www.geeksforgeeks.org/program-to-validate-an-ip-address/

**Examples:** <br />

Input: 
ip = 222.111.111.111 <br />
Output: 1 

Input:
ip = 5555..555 <br />
Output: 0 <br />
Explanation: 5555..555 is not a valid
ip address, as the middle two portions
are missing. <br />

Expected Time Complexity: O(N), N = length of string. <br />
Expected Auxiliary Space: O(1)

Constraints: 
1<=length of string <=50 <br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day27(Validate_IP).py)

## Day 28
### Problem Statement: Find occurance of substring
Given two strings s1 and s2, find if s1 is a substring of s2. 
If yes, return the index of the first occurrence, else return -1.<br />
https://www.geeksforgeeks.org/check-string-substring-another/

**Examples:** <br />

Input: s1 = "for", s2 = "geeksforgeeks" <br />
Output: 5 <br />
Explanation:
String "for" is present as a substring
of s2.

Input: s1 = "practice", s2 = "geeksforgeeks" <br />
Output: -1.<br />
Explanation:
There is no occurrence of "practice" in
"geeksforgeeks" <br />

Expected Time Complexity: O(|s|*|x|) <br />
Expected Auxiliary Space: O(1) <br />

Constraints:
1 <= |s|,|x| <= 1000 <br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day28(Find_substr).py)

## Day 29
### Problem Statement: Isomorphic strings
Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible
for every character of str1 to every character of str2 while preserving the order.
https://www.geeksforgeeks.org/check-if-two-given-strings-are-isomorphic-to-each-other/

**Examples:** <br />

Input:  str1 = "aab", str2 = "xxy" <br />
Output: True <br />
'a' is mapped to 'x' and 'b' is mapped to 'y'.

Input:  str1 = "aab", str2 = "xyz" <br />
Output: False <br />
One occurrence of 'a' in str1 has 'x' in str2 and 
other occurrence of 'a' has 'y'.

Expected Time Complexity: O(|str1|+|str2|). <br />
Expected Auxiliary Space: O(Number of different characters). <br />
Note: |s| represents the length of string s.

Constraints:
1 <= |str1|, |str2| <= 10^3 <br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day29(Isomorphic).py)

## Day 30
### Problem Statement: Rotated strings
Given two strings s1 and s2. 
The task is to check if s2 is a rotated version of the string s1. 
The characters in the strings are in lowercase.<br />
https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/

**Examples:** <br />

Input: <br />
geeksforgeeks<br />
forgeeksgeeks<br />
Output: 1<br />
Explanation: s1 is geeksforgeeks, s2 is forgeeksgeeks. Clearly, s2 is a rotated 
version of s1 as s2 can be obtained by left-rotating s1 by 5 units. 
 
Input:<br />
mightandmagic<br />
andmagicmigth<br />
Output: 0<br />
Explanation: Here with any amount of rotation s2 can't be obtained by s1.

Expected Time Complexity: O(N)<br />
Expected Space Complexity: O(N)<br />

Constraints:
1 <= |s1|, |s2| <= 10^7<br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day30(Rotated_str).py)

## Day 31
### Problem Statement: Longest Substring Without Repeating Characters
Given a string S, find the length of its longest substring that does not have any repeating characters.<br />
https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/

**Examples:** <br />

Input:
S = geeksforgeeks <br />
Output: 7 <br />
Explanation: The longest substring
without repeated characters is "ksforge".

Input:
S = abbcdb <br />
Output: 3 <br />
Explanation: The longest substring is
"bcd". Here "abcd" is not a substring
of the given string.

Expected Time Complexity: O(N) <br />
Expected Auxiliary Space: O(1) <br />

Constraints: 
0<= N <= 10^5 <br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day31(Non-repeating_str).py)

## Day 32
### Problem Statement: Multiply two strings
Given two numbers as stings s1 and s2. Calculate their Product.<br />
https://www.geeksforgeeks.org/multiply-large-numbers-represented-as-strings/

**Examples:** <br />

Input : num1 = 4154 <br /> 
        num2 = 51454<br />
Output : 213739916 

Input :  num1 = 654154154151454545415415454  <br />
         num2 = 63516561563156316545145146514654 <br />
Output : 41549622603955309777243716069997997007620439937711509062916

Expected Time Complexity: O(n1* n2) <br />
Expected Auxiliary Space: O(n1 + n2) ; where n1 and n2 are sizes of strings s1 and s2 respectively.

Constraints:
1 <= length of s1 and s2 <= 10^3 

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day32(Multiply_strs).py)

## Day 33
### Problem Statement: Anagram
Given two strings a and b consisting of lowercase characters.
The task is to check whether two given strings are an anagram of each other or not. 
An anagram of a string is another string that contains the same characters, only the order of characters can be different. 
For example, “act” and “tac” are an anagram of each other.<br />
https://www.geeksforgeeks.org/check-whether-two-strings-are-anagram-of-each-other/

**Examples:** <br />

Input:
a = geeksforgeeks, b = forgeeksgeeks <br />
Output: YES <br />
Explanation: Both the string have same
characters with same frequency. So, 
both are anagrams.

Input:
a = allergy, b = allergic <br />
Output: NO <br />
Explanation:Characters in both the strings
are not same, so they are not anagrams.

Expected Time Complexity: O(|a|+|b|). <br />
Expected Auxiliary Space: O(Number of distinct characters).

Constraints:
1 ≤ |a|,|b| ≤ 10^5 

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day33(Anagram).py)

## Day 34
### Problem Statement: Excel Columns
Given a positive integer N, return its corresponding column title as it would appear in an Excel sheet.
For N =1 we have column A, for 27 we have AA and so on. <br />
https://www.geeksforgeeks.org/find-excel-column-name-given-number/

**Examples:** <br />

Input:
N = 51 <br />
Output: AY <br />

Expected Time Complexity: O(Log(N)) <br />
Expected Auxiliary Space: O(Log(N))

Constraints:
1 ≤ N ≤ 10^7

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day34(Excel_cols).py)

## Day 35
### Problem Statement: Reverse words in string
Given a String S, reverse the string without reversing its individual words. Words are separated by dots.<br />
https://www.geeksforgeeks.org/reverse-words-in-a-given-string/

**Examples:** <br />

Input:
S = i.like.this.program.very.much <br />
Output: much.very.program.this.like.i

Input:
S = pqr.mno <br />
Output: mno.pqr

Expected Time Complexity: O(|S|) <br />
Expected Auxiliary Space: O(|S|)

Constraints:
1 <= |S| <= 2000

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day35(Reverse_words).py)

## Day 36
### Problem Statement: Check if k-th bit is set or not
Given a number N and a bit number K, check if Kth bit of N is set or not.<br />
https://www.geeksforgeeks.org/check-whether-k-th-bit-set-not/ 

**Examples:** <br />

Input: N = 4, K = 0 <br />
Output: No <br />
Explanation: Binary representation of 4 is 100, 
in which 0th bit from LSB is not set. 
So, return false.

Input: N = 4, K = 2 <br />
Output: Yes <br />
Explanation: Binary representation of 4 is 100, 
in which 2nd bit from LSB is set. 
So, return true.

Expected Time Complexity: O(LogN). <br />
Expected Auxiliary Space: O(1).

Constraints: <br />
1 ≤ N ≤ 10^9  <br />
0 ≤ K ≤ floor(log2(N) + 1)

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day36(Check_set).py)

## Day 37
### Problem Statement: Powers of 2
Given a positive integer N. The task is to check if N is a power of 2. 
More formally, check if N can be expressed as 2x for some x.<br />
https://www.geeksforgeeks.org/program-to-find-whether-a-no-is-power-of-two/

**Examples:** <br />

Input: N = 1<br />
Output: true<br />
Explanation: 1 is equal to 2 raised to 0 (20 == 1).

Input: N = 98<br />
Output: false<br />
Explanation: 
98 cannot be obtained by any power of 2.

Expected Time Complexity: O(log N).<br />
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 10^18<br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day37(2s_powers).py)

## Day 38
### Problem Statement: Number is sparse or not
Check if a given number is Sparse or not.<br />
https://www.geeksforgeeks.org/check-if-a-given-number-is-sparse-or-not/

**Examples:** <br />

Input:  x  = 72<br />
Output: true<br />
Explanation:  Binary representation of 72 is 01001000. 
There are no two consecutive 1's in binary representation

Input:  x  = 12<br />
Output: false<br />
Explanation:  Binary representation of 12 is 1100. 
Third and fourth bits (from end) are set.

Expected Time Complexity: O(log N).<br />
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 10^6

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day38(Sparse).py)

## Day 39
### Problem Statement: Bit difference
You are given two numbers A and B. 
The task is to count the number of bits needed to be flipped to convert A to B.<br />
https://www.geeksforgeeks.org/count-number-of-bits-to-be-flipped-to-convert-a-to-b/

**Examples:** <br />

Input : a = 10, b = 20 <br />
Output : 4

Input : a = 7, b = 10<br />
Output : 3

Expected Time Complexity: O(log N). <br />
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 10^6

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day39(Bit_diff).py)

## Day 40
### Problem Statement: Binary-Gray conversions
Show binary-to-gray and gray-to-binary conversions of a number.<br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day40(Binary_Gray).py)

## Day 41
### Problem Statement: Find first set bit
Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
Note: If there is no set bit in the integer N, then return 0 from the function.  <br />
https://www.geeksforgeeks.org/position-of-rightmost-set-bit/

**Examples:** <br />

Input: N = 18 <br />
Output: 2 <br />
Explanation: Binary representation of 
18 is 010010,the first set bit from the 
right side is at position 2.

Input: N = 12 <br />
Output: 3  <br />
Explanation: Binary representation 
of  12 is 1100, the first set bit 
from the right side is at position 3.

Expected Time Complexity: O(log N) <br />
Expected Auxiliary Space: O(1)

Constraints:
0 <= N <= 10^8

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day41(First_set_right).py)

## Day 42
### Problem Statement: Count total set bits 
You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive) <br />
https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n/

**Examples:** <br />

Input: N = 4 <br />
Output: 5 <br /> 
Explanation:<br />
For numbers from 1 to 4. <br /> 
For 1: 0 0 1 = 1 set bits <br />
For 2: 0 1 0 = 1 set bits <br />
For 3: 0 1 1 = 2 set bits <br />
For 4: 1 0 0 = 1 set bits <br />
Therefore, the total set bits is 5.

Input: N = 17 <br />
Output: 35 <br />
Explanation: From numbers 1 to 17(both inclusive), 
the total number of set bits is 35.

Expected Time Complexity: O(log N) <br />
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 10^8 

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day42(Total_set).py)

## Day 43
### Problem Statement: Rightmost different bit
Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.<br />
https://www.geeksforgeeks.org/position-rightmost-different-bit/

**Examples:** <br />

Input: m = 11, n = 9 <br />
Output: 2 <br />
(11)10 = (1011)2 <br /> 
(9)10 = (1001)2 <br />
It can be seen that 2nd bit from
the right is different 

Input: m = 52, n = 4 <br />
Output: 5 <br />
(52)10 = (110100)2 <br />
(4)10 = (100)2 <br />
It can be seen that 5th bit from
the right is different

Expected Time Complexity: O(max(log m, log n)) <br />
Expected Auxiliary Space: O(1).

Constraints: <br />
1 <= M <= 10^9 <br />
1 <= N <= 10^9

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day43(Right_diff_bit).py)

## Day 44
### Problem Statement: Maximum subset XOR
Given an set of positive integers. Find the maximum XOR subset value in the given set. Expected time complexity O(n). <br />
https://www.geeksforgeeks.org/find-maximum-subset-xor-given-set/

**Examples:** <br />

Input: set[] = {2, 4, 5} <br />
Output: 7 <br />
The subset {2, 5} has maximum XOR value

Input: set[] = {9, 8, 5} <br />
Output: 13 <br />
The subset {8, 5} has maximum XOR value

Expected Time Complexity : O(N*Log(max(arr[i])))  <br />
Expected Auxiliary Space : O(1)
 
Contraints : <br />
1 <= N <= 10^5 <br />
1 <= arr[i] <= 10^6

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day44(Max_XOR).py)

## Day 45
### Problem Statement: Swapping even/odd bits
Given an unsigned integer N. The task is to swap all odd bits with even bits.<br />
https://www.geeksforgeeks.org/swap-all-odd-and-even-bits/

**Examples:** <br />

Input: N = 23  <br />
Output: 43 <br />
Explanation: 
Binary representation of the given number 
is 00010111 after swapping 
00101011 = 43 in decimal.

Input: N = 2  <br />
Output: 1

Expected Time Complexity: O(1) <br />
Expected Auxiliary Space: O(1) 

Constraints: 1 ≤ N ≤ 10^9

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day45(Even_odd_swap).py)

## Day 46
### Problem Statement: Equal arrays
Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. 
Two arrays are said to be equal if both of them contain same set of elements, 
arrangements (or permutation) of elements may be different though. <br />
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal. <br />
https://www.geeksforgeeks.org/check-if-two-arrays-are-equal-or-not/

**Examples:** <br />

Input:
N = 5 <br />
A[] = {1,2,5,4,0}<br />
B[] = {2,4,5,0,1}<br />
Output: 1<br />
Explanation: Both the array can be 
rearranged to {0,1,2,4,5}

Input:
N = 3<br />
A[] = {1,2,5}<br />
B[] = {2,4,15}<br />
Output: 0<br />
Explanation: A[] and B[] have only 
one common value.

Expected Time Complexity : O(N)<br />
Expected Auxilliary Space : O(N)

Constraints:<br />
1<=N<=10^7<br />
1<=A[],B[]<=10^18

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day46(Equal_arrays).py)

## Day 47
### Problem Statement: Max distance between same elements
Given an array with repeated elements, the task is to find the maximum distance two occurrences of an element. <br />
https://www.geeksforgeeks.org/maximum-distance-two-occurrences-element-array/

**Examples:** <br />

Input : arr[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2} <br />
Output: 10 <br />
Explanation: <br />
maximum distance for 2 is 11-1 = 10 <br />
maximum distance for 1 is 4-2 = 2 <br />
maximum distance for 4 is 10-5 = 5

Expected Time Complexity : O(N)<br />
Expected Auxilliary Space : O(N)

Constraints: 1<=N<=10^6<br />

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day47(Max_dist).py)

## Day 48
### Problem Statement: Two sum
Given an array of positive integers and an integer. 
Determine whether or not there exist two elements in A whose sum is exactly equal to that integer.<br />
https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/

**Examples:** <br />

Input: arr[] = {0, -1, 2, -3, 1}<br />
        sum = -2<br />
Output: -3, 1 <br />
If we calculate the sum of the output,
1 + (-3) = -2

Input: arr[] = {1, -2, 1, 0, 5}<br />
       sum = 0<br />
Output: -1<br />
No valid pair exists

Expected Time Complexity: O(N).<br />
Expected Auxiliary Space: O(N).

Constraints:<br />
1 ≤ N ≤ 10^5<br />
1 ≤ A[i] ≤ 10^5<br />
1 ≤ X ≤ 2*10^5

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day48(Two_sum).py)

## Day 49
### Problem Statement: Sorting by frequency
Given an array of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. 
If frequencies of two elements are same, then smaller number comes first.<br />
https://www.geeksforgeeks.org/sort-elements-by-frequency/

**Examples:** <br />

Input:  arr[] = {2, 5, 2, 8, 5, 6, 8, 8}<br />
Output: arr[] = {8, 8, 8, 2, 2, 5, 5, 6}

Input: arr[] = {2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8}<br />
Output: arr[] = {8, 8, 8, 2, 2, 5, 5, 6, -1, 9999999}

Expected Time Complexity: O(NLogN)<br />
Expected Auxiliary Space: O(N)

Constraints:<br />
1 ≤ N ≤ 10^5<br />
1 ≤ Ai ≤ 10^5 

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day49(Sorting_freq).py)

## Day 50
### Problem Statement: Non-repeating elements
Find all the non-repeating element in a given array of integers.

**Examples:** <br />

Input:<br />
n = 10<br />
arr[] = {1,1,2,2,3,3,4,5,6,7}<br />
Output: 4 5 6 7

Input:<br />
n = 5<br />
arr[] = {10,20,40,30,10}<br />
Output: 20 40 30

Expected Time Complexity: O(n)<br />
Expected Auxiliary Space: O(n).

Constraints:<br />
1 <= n <= 10^3<br />
0 <= arr_i <= 10^7

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day50(non_repeated).py)

## Day 51
### Problem Statement: Zero Sum Subarray
You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0. <br />
https://www.geeksforgeeks.org/print-all-subarrays-with-0-sum/

**Examples:** <br />

Input: <br />
n = 6 <br />
arr[] = {0,0,5,5,0,0} <br />
Output: 6 <br />
Explanation: The 6 subarrays are 
[0], [0], [0], [0], [0,0], and [0,0]. 

Input: <br />
n = 10 <br />
arr[] = {6,-1,-3,4,-2,2,4,6,-12,-7} <br />
Output: 4 <br />
Explanation: The 4 subarrays are [-1 -3 4]
[-2 2], [2 4 6 -12], and [-1 -3 4 -2 2]

Expected Time Complexity : O(n) <br />
Expected Auxilliary Space : O(n)
 
Constraints:     <br />
1<= n <= 10^7 <br />
-10^10 <= arr_i <= 10^10

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day51(Zero_subarray).py)

## Day 52
### Problem Statement: Top K frequency
Given a non-empty array of integers, find the top k elements which have the highest frequency in the array. 
If two numbers have the same frequency then the larger number should be given preference. <br />
https://www.geeksforgeeks.org/find-k-numbers-occurrences-given-array/

**Examples:** <br />

Input: <br />
nums = {1,1,1,2,2,3}<br />
k = 2<br />
Output: {1, 2}

Input: <br />
nums = {1,1,2,2,3,3,3,4}<br />
k = 2<br />
Output: {3, 2}<br />
Explanation: Elements 1 and 2 have the same frequency ie. 2. 
Therefore, in this case, the answer includes the element 2 as 2 > 1.


Expected Time Complexity : O(NlogN)<br />
Expected Auxilliary Space : O(N)

Constraints:<br />
1 <= N <= 10^3<br />
1<=A[i]<=10^4

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day52(TopK_freq).py)

## Day 53
### Problem Statement: Relative Sorting
Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. 
Sort the first array A1[ ] such that all the relative positions of the elements in the first array are the same 
as the elements in the second array A2[ ].<br />
https://www.geeksforgeeks.org/sort-array-according-order-defined-another-array/

**Examples:** <br />
Input: N = 11 M = 4 <br />
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}<br />
A2[] = {2, 1, 8, 3}<br />
Output: 2 2 1 1 8 8 3 5 6 7 9

Input: N = 11  M = 4<br />
A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}<br />
A2[] = {99, 22, 444, 56}<br />
Output: 1 1 2 2 3 5 6 7 8 8 9

Expected Time Complexity : O(NlogN)<br />
Expected Auxilliary Space : O(N)

Constraints:<br />
1 ≤ N, M ≤ 10^6<br />
1 ≤ A1[i], A2[i] ≤ 10^6

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day53(Relative_sort).py)

## Day 54
### Problem Statement: Largest subarray with 0 sum
Given an array having both positive and negative integers. 
The task is to compute the length of the largest subarray with sum 0.<br />
https://www.geeksforgeeks.org/find-the-largest-subarray-with-0-sum/

**Examples:** <br />

Input:<br />
N = 8<br />
A[] = {15,-2,2,-8,1,7,10,23}<br />
Output: 5<br />
Explanation: The largest subarray with
sum 0 will be -2 2 -8 1 7.

Expected Time Complexity : O(NlogN)<br />
Expected Auxilliary Space : O(N)<br />

Constraints:<br />
1 <= N <= 10^4<br />
-1000 <= A[i] <= 1000, for each valid i

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day54(Largest_0sum).py)

## Day 55
### Problem Statement: Four Sum
Given an array of integers, find anyone combination of four elements in the array whose sum is equal to a given value X.<br />
https://www.geeksforgeeks.org/find-four-elements-that-sum-to-a-given-value-set-2/

**Examples:** <br />

Input: array = {10, 2, 3, 4, 5, 9, 7, 8} <br />
       X = 23 <br />
Output: 3 5 7 8 <br />
Sum of output is equal to 23, 
i.e. 3 + 5 + 7 + 8 = 23.

Input: array = {1, 2, 3, 4, 5, 9, 7, 8}<br />
       X = 16 <br />
Output: 1 3 5 7<br />
Sum of output is equal to 16, 
i.e. 1 + 3 + 5 + 7 = 16.

Expected Time Complexity: O(N^3).<br />
Expected Auxiliary Space: O(N^2).<br />

Constraints:<br />
1 <= N <= 100<br />
-1000 <= K <= 1000<br />
-100 <= A[i] <= 100

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day55(Four_sum).py)

## Day 56
### Problem Statement: Window count
Given an array of size n and an integer k, return the count of distinct numbers in all windows of size k.<br />
https://www.geeksforgeeks.org/count-distinct-elements-in-every-window-of-size-k/

**Examples:** <br />

Input: arr[] = {1, 2, 1, 3, 4, 2, 3};<br />
       k = 4<br />
Output: 3 4 4 3

Explanation:<br />
First window is {1, 2, 1, 3}, count of distinct numbers is 3<br />
Second window is {2, 1, 3, 4} count of distinct numbers is 4<br />
Third window is {1, 3, 4, 2} count of distinct numbers is 4<br />
Fourth window is {3, 4, 2, 3} count of distinct numbers is 3

Expected Time Complexity: O(N*k).<br />
Expected Auxiliary Space: O(N).<br />

Constraints:<br />
1 <= N <= K <= 10^5<br />
1 <= A[i] <= 10^5 , for each valid i

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day56(Window_freq).py)

## Day 57
### Problem Statement: Print Linked List elements
Given a linked list. Print all the elements of the linked list

**Examples:** <br />

Input: N = 2 <br />
LinkedList= {1 , 2} <br />
Output: 1 2

Expected Time Complexity : O(N)<br />
Expected Auxiliary Space : O(1)
 
Constraints :<br />
1 <= N <= 100

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day57(Print_LL).cpp)

## Day 58
### Problem Statement: Reverse Linked List
Given a linked list of N nodes. The task is to reverse this list.<br />
https://www.geeksforgeeks.org/reverse-a-linked-list/

**Examples:** <br />

Input:<br />
LinkedList: 1->2->3->4->5->6<br />
Output: 6 5 4 3 2 1<br />
Explanation: After reversing the list, elements are 6->5->4->3->2->1

Expected Time Complexity: O(N).<br />
Expected Auxiliary Space: O(1).

Constraints:<br />
1 <= N <= 10^4

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day58(Reverse_LL).cpp)

## Day 59
### Problem Statement: Occurence of an integer in a Linked List
Given a singly linked list and a key, count the number of occurrences of given key in the linked list.<br />
https://www.geeksforgeeks.org/write-a-function-that-counts-the-number-of-times-a-given-int-occurs-in-a-linked-list/

**Examples:** <br />

Input:<br />
N = 7<br />
Link List = 1->2->1->2->1->3->1<br />
search_for = 1<br />
Output: 4<br />
Explanation:1 appears 4 times.

Expected Time Complexity: O(N).<br />
Expected Auxiliary Space: O(1).

Constraints:<br />
1 <= N <= 10^4

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day59(Integer_count).cpp)

## Day 60
### Problem Statement: Pairwise swapping
Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.<br />
https://www.geeksforgeeks.org/pairwise-swap-elements-of-a-given-linked-list-by-changing-links/

**Examples:** <br />

Input:<br />
LinkedList: 1->3->4->7->9->10->1<br />
Output: 3 1 7 4 10 9 1<br />
Explanation: After swapping each pair
considering (1,3), (4, 7), (9, 10).. so
on as pairs, we get 3, 1, 7, 4, 10, 9,
1 as a new linked list.

Expected Time Complexity: O(N).<br />
Expected Auxiliary Space: O(1).

Constraints:<br />
1 ≤ N ≤ 10^3

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day60(Pairwise_swap).cpp)

## Day 61
Given two numbers represented by two linked lists of size N and M. 
The task is to return a sum list. 
The sum list is a linked list representation of the addition of two input numbers.<br />
https://www.geeksforgeeks.org/sum-of-two-linked-lists/

**Examples:** <br />

Input: N = 2<br />
valueN[] = {4,5}<br />
M = 3<br />
valueM[] = {3,4,5}<br />
Output: 3 9 0  <br />
Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0)

Expected Time Complexity: O(N+M)<br />
Expected Auxiliary Space: O(Max(N,M))

Constraints:
1 <= N, M <= 5000

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day61(Adding_LL).cpp)

## Day 62
Write a function to insert a new value in a sorted Circular Linked List (CLL)
Given a sorted circular linked list, the task is to insert a new node in this circular list 
so that it remains a sorted circular linked list.<br />
https://www.geeksforgeeks.org/sorted-insert-for-circular-linked-list/

**Examples:** <br />

Input:
LinkedList = 1->2->4
(the first and last node is connected,
i.e. 4 --> 1)<br />
data = 2<br />
Output: 1 2 2 4

Expected Time Complexity: O(N)<br />
Expected Auxiliary Space: O(1)

Constraints:
0 <= N <= 10^5

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day62(Sorted_CLL).cpp)

## Day 63
Given a Cirular Linked List of size N, split it into two halves circular lists. 
If there are odd number of nodes in the given circular linked list then out of the resulting two halved lists, 
first list should have one node more than the second list. 
The resultant lists should also be circular lists and not linear lists. <br />
https://www.geeksforgeeks.org/split-a-circular-linked-list-into-two-halves/

**Examples:** <br />

Input:
Circular LinkedList: 1->5->7 <br />
Output: <br />
1 5 <br />
7

Expected Time Complexity: O(N) <br />
Expected Auxilliary Space: O(1)

Constraints:
1 <= N <= 100

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day63(Split_CLL).cpp)

## Day 64
Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list.<br />
https://www.geeksforgeeks.org/reverse-a-list-in-groups-of-given-size/

**Examples:** <br />

Input:
LinkedList: 1->2->2->4->5->6->7->8
K = 4<br />
Output: 4 2 2 1 8 7 6 5 <br />
Explanation: 
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. Hence, the 
resultant linked list is 4->2->2->1->8->7->6->5.

Expected Time Complexity: O(N)<br />
Expected Auxilliary Space: O(1)

Constraints:<br />
1 <= N <= 10⁴<br />
1 <= k <= N

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day64(Reverse_LL).cpp)

## Day 65
Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.<br />
https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

**Examples:** <br />

Input:<br />
N = 3<br />
value[] = {1,3,4}<br />
x = 2<br />
Output: True<br />
Explanation: In above test case N = 3.
The linked list with nodes N = 3 is
given. Then value of x=2 is given which
means last node is connected with xth
node of linked list. Therefore, there
exists a loop.

Expected Time Complexity: O(N)<br />
Expected Auxiliary Space: O(1)

Constraints:<br />
1 <= N <= 10^4<br />
1 <= Data on Node <= 10^3

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day65(Check_loops).cpp)

## Day 66
Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.<br />
https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/

**Examples:** <br />

Input:<br />
LinkList1 = 3->6->9->common <br />
LinkList2 = 10->common <br />
common = 15->30->NULL <br />
Output: 15

Expected Time Complexity: O(N+M)<br />
Expected Auxiliary Space: O(1)

Constraints:<br />
1 ≤ N + M ≤ 2*10^5<br />
-1000 ≤ value ≤ 1000

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day66(Intersection_LL).cpp)

## Day 67
Given a singly linked list, delete middle of the linked list. 
For example, if given linked list is 1->2->3->4->5 then linked list should be modified to 1->2->4->5.
If there are even nodes, then there would be two middle nodes, we need to delete the second middle element. 
For example, if given linked list is 1->2->3->4->5->6 then it should be modified to 1->2->3->5->6.
If the input linked list is NULL or has 1 node, then it should return NULL<br />
https://www.geeksforgeeks.org/delete-middle-of-linked-list/

Expected Time Complexity: O(N).<br />
Expected Auxiliary Space: O(1).

Constraints:<br />
1 <= N <= 1000<br />
1 <= value <= 1000

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day67(Delete_mid).cpp)

## Day 68
You are given a special linked list with N nodes where each node has a next pointer pointing to its next node. 
You are also given M random pointers , where you will be given M number of pairs denoting two nodes a and b  
i.e. a->arb = b.<br />
https://www.geeksforgeeks.org/clone-linked-list-next-random-pointer-o1-space/

**Examples:** <br />

Input:
N = 4, M = 2<br />
value = {1,2,3,4}<br />
pairs = {{1,2},{2,4}}<br />
Output: 1

Expected Time Complexity : O(n)<br />
Expected Auxilliary Space : O(1)

Constraints:<br />
1 <= N <= 100<br />
1 <= M <= N<br />
1 <= a, b <= 100

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day68(Clone_LL).cpp)

# Day 69
Sort the given Linked List using quicksort. which takes O(n^2) time in worst case and O(nLogn) in average and best cases.<br />
https://www.geeksforgeeks.org/quicksort-on-singly-linked-list/

**Examples:** <br />

Input:
1 6 2<br />
Output:
1 2 6

Constraints:<br />
1<=T<=100<br />
1<=N<=200

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day69(Quick_sort).cpp)

## Day 70
Given a Cirular Linked List of size N, split it into two halves circular lists. 
If there are odd number of nodes in the given circular linked list then out of the resulting two halved lists, 
first list should have one node more than the second list. 
The resultant lists should also be circular lists and not linear lists.<br />
https://www.geeksforgeeks.org/deletion-at-different-positions-in-a-circular-linked-list/

**Examples:** <br />

LinkedList: 1->2->3->4->5 <br />
position: 4 <br />
Output: 1 2 3 5

Expected Time Complexity: O(n).<br />
Expected Auxiliary Space: O(1).

Constraints:<br />
2 <= number of nodes <= 10^3<br />
1 <= pos <= n

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day70(Delete_CLL).cpp)

## Day 71
Sort the given doubly linked list of size N using quicksort. 
Just complete the partition function using the quicksort technique.<br />
https://www.geeksforgeeks.org/quicksort-for-linked-list/ 

**Examples:** <br />

Input:
LinkedList: 4->2->9<br />
Output:2 4 9

Expected Time Complexity: O(NlogN)<br />
Expected Auxilliary Space: O(1) 

Constraints:
1 <= N <= 200

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day71(Quick_sort_DLL).cpp)

## Day 72
You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. 
The task is to delete the node. Pointer/ reference to head node is not given. 
Note: No head reference is given to you. 
It is guaranteed that the node to be deleted is not a tail node in the linked list.<br />
https://www.geeksforgeeks.org/delete-a-node-from-linked-list-without-head-pointer/

**Examples:** <br />

Input: 
N = 2
value[] = {1,2} <br />
node = 1 <br />
Output: 2 <br />
Explanation: After deleting 1 from the
linked list, we have remaining nodes
as 2. 

Expected Time Complexity : O(1)<br />
Expected Auxilliary Space : O(1)

Constraints:
1 <= N <= 103

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day72(Delete_without_head).cpp)

## Day 73
Given Pointer/Reference to the head of a doubly linked list of N nodes, 
the task is to Sort the given doubly linked list using Merge Sort in both non-decreasing and non-increasing order.<br />
https://www.geeksforgeeks.org/merge-sort-for-doubly-linked-list/

**Examples:** <br />

Input: N = 8<br />
value[] = {7,3,5,2,6,4,1,8}<br />
Output:<br />
1 2 3 4 5 6 7 8<br />
8 7 6 5 4 3 2 1

Constraints:
1 <= N <= 10^5

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day73(Merge_sort_DLL).cpp)

## Day 74
You are given a string S, the task is to reverse the string using stack.<br />
https://www.geeksforgeeks.org/stack-set-3-reverse-string-using-stack/

**Examples:** <br />

Input: S="GeeksforGeeks"<br />
Output: skeeGrofskeeG

Expected Time Complexity: O(N)<br />
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ length of the string ≤ 100

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day74(Reverse_stack).cpp)

## Day 75
The task is to find the next greater element for each element of the array in order of their appearance in the array.<br />
https://www.geeksforgeeks.org/next-greater-element-in-same-order-as-input/

**Examples:** <br />

Input: 
N = 4, arr[] = [1 3 2 4]<br />
Output:
3 4 4 -1<br />
Explanation:
In the array, the next larger element 
to 1 is 3 , 3 is 4 , 2 is 4 and for 4  
since it doesn't exist, it is -1.

Expected Time Complexity : O(N)<br />
Expected Auxilliary Space : O(N)

Constraints:<br />
1 ≤ N ≤ 10^6<br />
1 ≤ Ai ≤ 10^18

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day75(Next_greatest).cpp)

## Day 76
Design a data-structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should return minimum element from the SpecialStack. Your task is to complete all the functions, using stack data-Structure.<br />
https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/

**Examples:** <br />

Input:
Stack: 18 19 29 15 16<br />
Output: 15<br />
Explanation:
The minimum element of the stack is 15.

Expected Time Complexity : O(1) for all the 3 methods.<br />
Expected Auixilliary Space : O(1) for all the 3 methods.

Constraints:<br />
1 <= Number of queries <= 100<br />
1 <= values of the stack <= 100

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day76(Get_min).cpp)

## Day 77
Given string S representing a postfix expression, the task is to evaluate the expression and find the final value. 
Operators will only include the basic arithmetic operators like *, /, + and -.

**Examples:** <br />

Input: S = "231*+9-" <br />
Output: -4 <br />
Explanation:
After solving the given expression, 
we have -4 as result.

Expected Time Complexity: O(|S|)<br />
Expected Auixilliary Space: O(|S|)

Constraints:
1 ≤ |S| ≤ 10^5

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day77(Postfix).cpp)

## Day 78
Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.

**Examples:** <br />

Input:
n = 4, m = 4<br />
M[][] = {{0 1 1 0},<br />
         {1 1 1 1},<br />
         {1 1 1 1},<br />
         {1 1 0 0}}<br />
Output: 8<br />
Explanation: For the above test case the
matrix will look like<br />
0 1 1 0<br />
1 1 1 1<br />
1 1 1 1<br />
1 1 0 0<br />
the max size rectangle is <br />
1 1 1 1<br />
1 1 1 1<br />
and area is 4 * 2 = 8.<br />


Expected Time Complexity : O(n*m)<br />
Expected Auixiliary Space : O(m)

Constraints:<br />
1<=n,m<=1000<br />
0<=M[][]<=1


**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day78(Max_rect).cpp)

## Day 79
Given a stack, the task is to sort it such that the top of the stack has the greatest element.<br />
https://www.geeksforgeeks.org/sort-a-stack-using-recursion/

**Examples:** <br />

Input:
Stack: 3 2 1<br />
Output: 3 2 1

Expected Time Complexity : O(N*N)v
Expected Auixilliary Space : O(N) recursive.

Constraints:
1<=N<=100

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day79(Sort_stack).cpp)

## Day 80
Find the largest rectangular area possible in a given histogram where the largest rectangle can be 
made of a number of contiguous bars. For simplicity, assume that all bars have the same width and the width is 1 unit.<br />
https://www.geeksforgeeks.org/largest-rectangle-under-histogram/

**Examples:** <br />

Input:
N = 8<br />
arr[] = {7 2 8 9 1 3 6 5}<br />
Output: 16<br />
Explanation: Maximum size of the histogram 
will be 8  and there will be 2 consecutive 
histogram. And hence the area of the 
histogram will be 8x2 = 16.

Expected Time Complxity : O(N)<br />
Expected Auxilliary Space : O(N)

Constraints:<br />
1 <= N <= 10^6<br />
1 <= arr[i] <= 10^12

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day80(Max_area_hist).cpp)

## Day 81
Given an expression string x. Examine whether the pairs and the orders of brackets are correct in exp.<br />
https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/

**Examples:** <br />
Input: exp = “[()]{}{[()()]()}” <br />
Output: Balanced

Time Complexity: O(n)  <br />
Auxiliary Space: O(n) for stack. 

Constraints: <br />
1 ≤ |x| ≤ 32000

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day81(Bracket_check).cpp)

## Day 82
Given an integer array. The task is to find the maximum of the minimum of every window size in the array.<br />
https://www.geeksforgeeks.org/find-the-maximum-of-minimums-for-every-window-size-in-a-given-array/

**Examples:** <br />

Input: N = 7<br />
arr[] = {10,20,30,50,10,70,30}<br />
Output: 70 30 20 10 10 10 10 

Expected Time Complxity : O(N)<br />
Expected Auxilliary Space : O(N)

Constraints:<br />
1 <= N <= 10^5<br />
1 <= arr[i] <= 10^6

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day82(Max_min_window).cpp)

## Day 83
The stock span problem is a financial problem where we have a series of n daily price quotes 
for a stock and we need to calculate the span of stock’s price for all n days. 
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days
just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85},
then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.<br />
https://www.geeksforgeeks.org/the-stock-span-problem/

Expected Time Complexity: O(N).<br />
Expected Auxiliary Space: O(N).

Constraints:<br />
1 ≤ N ≤ 10^5<br />
1 ≤ C[i] ≤ 10^5

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day83(Stock_span).cpp)

## Day 84:
Given an infix expression in the form of string str. Convert this infix expression to postfix expression.<br />
https://www.geeksforgeeks.org/stack-set-2-infix-to-postfix/

**Examples:** <br />

Input: str = "a+b*(c^d-e)^(f+g*h)-i" <br />
Output: abcd^e-fgh*+^*+i- <br />
Explanation:
After converting the infix expression 
into postfix expression, the resultant 
expression will be abcd^e-fgh*+^*+i-

Expected Time Complexity: O(|str|). <br />
Expected Auxiliary Space: O(|str|).

Constraints:
1 ≤ |str| ≤ 10^5

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day84(Infix_postfix).cpp)

## Day 85
Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N.<br />
https://www.geeksforgeeks.org/interesting-method-generate-binary-numbers-1-n/

**Examples:** <br />

Input:
N = 2<br />
Output: 
1 10<br />
Explanation: 
Binary numbers from
1 to 2 are 1 and 10.

Expected Time Complexity : O(N log2N)<br />
Expected Auxilliary Space : O(N log2N)

Constraints:
1 ≤ N ≤ 10^6

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day85(Generate_bin).cpp)

## Day 86
Given an array arr[] of size N, enqueue the elements of the array into a queue and then dequeue them.

Expected time complexity: O(n)<br />
Expected space complexity: O(n)

Constraints:
1 <= Ai <= 10^7

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day86(Pop_push).cpp)

## Day 87
Implement a Stack using two queues q1 and q2.<br />
https://www.geeksforgeeks.org/implement-stack-using-queue/

**Examples:** <br />

Input:<br />
push(2)<br />
push(3)<br />
pop()<br />
push(4)<br />
pop()<br />
Output: 3 4<br />

Expected Time Complexity: O(1) for push() and O(N) for pop() (or vice-versa).<br />
Expected Auxiliary Space: O(1) for both push() and pop().

Constraints:<br />
1 <= Number of queries <= 100<br />
1 <= values of the stack <= 100

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day87(Stack_using_Qs).cpp)

## Day 88
Given size of a queue and Q query. The task is to perform operations according to the 
type of query. Queries can be of following types:
    1) 1 element: This means push the element into the queue (allowed only when queue is not full).
    2) 2: This means pop the element at front from the queue (allowed only when queue is not empty).

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day88(Circular_array_Q).cpp)

## Day 89
Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue,
leaving the other elements in the same relative order.

**Examples:** <br />

Input:<br />
5 3<br />
1 2 3 4 5<br />
Output: <br />
3 2 1 4 5

Expected TIme Complexity : O(n)<br />
Expected Auxilliary Space : O(n)<br />

Constraints:<br />
1 <= N <= 1000<br />
1 <= K <= N

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day89(Reverse_Q).cpp)

## Day 90
Implement a Queue using 2 stacks s1 and s2 .
https://www.geeksforgeeks.org/queue-using-stacks/

Expected Time Complexity : O(1) for push() and O(N) for pop() or O(N) for push() and O(1) for pop()  <br />
Expected Auxilliary Space : O(1).<br />

Constraints:<br />
1 <= Q <= 100<br />
1 <= x <= 100

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day90(Q_using_stack).cpp)

## Day 91
Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.<br />
https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/

**Examples:** <br />

Input:<br />
N = 9, K = 3<br />
arr[] = 1 2 3 1 4 5 2 3 6<br />
Output: <br />
3 3 4 5 5 5 6 

Expected Time Complexity: O(N) <br />
Expected Auxiliary Space: O(N)

Constraints: <br />
1 ≤ N ≤ 10^7 <br />
1 ≤ K ≤ N <br />
0 ≤ arr[i] <= 10^7

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day91(Max_window).cpp)

## Day 92
Given a square chessboard of N x N size, the position of Knight and position of a target is given. 
We need to find out the minimum steps a Knight will take to reach the target position.<br />
https://www.geeksforgeeks.org/minimum-steps-reach-target-knight/

Expected Time Complexity: O(N2).<br />
Expected Auxiliary Space: O(N2).<br />

Constraints:<br />
1 <= N <= 1000<br />
1 <= Knight_pos(X, Y), Targer_pos(X, Y) <= N

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day92(Minimum_moves).cpp)

## Day 93
Given two sorted arrays of distinct elements. 
There is only 1 difference between the arrays. 
First array has one element extra added in between. 
Find the index of the extra element.<br />
https://www.geeksforgeeks.org/find-index-of-an-extra-element-present-in-one-sorted-array/

**Examples:** <br />

Input:<br />
N = 6<br />
A[] = {3,5,7,9,11,13}<br />
B[] = {3,5,7,11,13}<br />
Output: 3

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
2<=N<=10^4
1<=Ai<=10^5

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day93(Diff_index).py)

## Day 94
Given a matrix mat[][] of n rows and m columns, consisting of 0’s and 1’s. 
The task is to complete the function findPerimeter which returns an integer denoting the perimeter of sub-figures consisting of only 1’s in the matrix.<br />
https://www.geeksforgeeks.org/find-perimeter-shapes-formed-1s-binary-matrix/

**Examples:** <br />

Input : mat[][] = <br />
               {<br />
                 1, 0,<br />
                 1, 1,<br />
               }<br />
Output : 8<br />
Cell (1,0) and (1,1) making a L shape whose perimeter is 8.

Constraints:<br />
1<=T<=100<br />
1<=n, m<=20

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day94(Mat_perimeter).py)

## Day 95
Given two linked lists(can be sorted or unsorted) of size n1 and n2 of distinct elements. Given a value x. 
The problem is to count all pairs from both lists whose sum is equal to the given value x.
Note: The pair has an element from each linked list.<br />
https://www.geeksforgeeks.org/count-pairs-two-linked-lists-whose-sum-equal-given-value/

**Examples:** <br />

Input : list1 = 3->1->5->7<br />
        list2 = 8->2->5->3<br />
        x = 10<br />
Output : 2<br />
The pairs are: (5, 5) and (7, 3)<br />

Expected Time Complexity: O(N+M)<br />
Expected Auxiliary Space: O(N+M)

Constraints:<br />
1<=size of linked list<=10000<br />
1<=X<=10000

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day95(LL_pairsum).cpp)

## Day 96
Given a linked list, task is to make a function which check whether the length of linked list is even or odd.<br />
https://www.geeksforgeeks.org/check-whether-the-length-of-given-linked-list-is-even-or-odd/

**Examples:** <br />
Input : 1->2->3->4->NULL<br />
Output : Even

Time Complexity: O(n)<br />
Space Complexity: O(1)

Constraints:<br />
1 <= T <= 100<br />
1 <= N <= 10^3<br />
1 <= A[i] <= 10^3

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day96(LL_even_odd).cpp)

## Day 97
Given a string str and another string patt. 
Find the character in patt that is present at the minimum index in str.<br />
https://www.geeksforgeeks.org/find-character-first-string-present-minimum-index-second-string/

**Examples:** <br />
Input: str = "zsyle", patt = "bjz"<br />
Output: "z"

Expected Time Complexity: O(max(|str|, |patt|))<br />
Expected Auxilary Space: O(K) where K <= 26
 
Constraints:<br />
1 ≤ |str|, |patt| ≤ 10^4

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day97(Min_index_ch).py)

## Day 98
Given a Binary Tree of size N , You have to count leaves in it.<br /> 
https://www.geeksforgeeks.org/write-a-c-program-to-get-count-of-leaf-nodes-in-a-binary-tree/

Constraints: <br />
1<= N <= 10^4

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day98(Leaf_count).cpp)

## Day 99
Given a Binary Tree, find Right view of it. 
Right view of a Binary Tree is set of nodes visible when tree is viewed from right side.<br /> 
https://www.geeksforgeeks.org/right-view-binary-tree-using-queue/

Expected Time Complexity: O(N).<br /> 
Expected Auxiliary Space: O(Height of the Tree).<br /> 

Constraints:<br /> 
1 <= Number of nodes <= 10^5<br /> 
1 <= Data of a node <= 10^5

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day99(Right_view_bt).cpp)

## Day 100
Given a Two Binary Trees, write a function that returns true if one is mirror of other, else returns false.<br /> 
https://www.geeksforgeeks.org/check-if-two-trees-are-mirror/

Expected Time Complexity: O(N).<br /> 
Expected Auxiliary Space: O(Height of the Tree).

Constraints:<br /> 
1 <= Number of nodes<= 10000<br /> 
-1000 <= Data of a node<= 1000

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day100(Tree_mirror).cpp)

## Day 101
Given a Binary Tree, find diameter of it.
The diameter of a tree is the number of nodes on the longest path between two end nodes in the tree. <br /> 
https://www.geeksforgeeks.org/diameter-of-a-binary-tree/

Expected Time Complexity: O(N). <br /> 
Expected Auxiliary Space: O(Height of the Tree).

Constraints: <br /> 
1 <= Number of nodes <= 10000 <br /> 
1 <= Data of a node <= 1000

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day101(Diameter_tree).cpp)

## Day 102
Given a Binary Tree, find diameter of it.
The diameter of a tree is the number of nodes on the longest path between two end nodes in the tree. <br /> 
https://www.geeksforgeeks.org/check-if-a-given-binary-tree-is-sumtree/

Expected Time Complexity: O(N)<br /> 
Expected Auxiliary Space: O(Height of the Tree)

Constraints:<br /> 
1 ≤ number of nodes ≤ 10^4 

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day102(Sum_tree).cpp)

## Day 103
Write a function to print spiral order traversal of a tree. <br /> 
https://www.geeksforgeeks.org/level-order-traversal-in-spiral-form/

Expected Time Complexity: O(N).<br /> 
Expected Auxiliary Space: O(N).

Constraints:<br /> 
0 <= Number of nodes <= 10^5<br /> 
0 <= Data of a node <= 10^5

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day103(Spiral_level_order).cpp)

## Day 104
Given a Binary Tree. Find the Zig-Zag Level Order Traversal of the Binary Tree.<br /> 
https://www.geeksforgeeks.org/zigzag-tree-traversal/

Expected Time Complexity: O(N).<br /> 
Expected Auxiliary Space: O(N).

Constraints:<br /> 
1 <= N <= 10^4

**Solution:** [here](https://github.com/RohiniRG/Daily-Coding/blob/main/Day104(Zigzag_traversal).cpp)


