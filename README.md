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

