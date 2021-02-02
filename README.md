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
