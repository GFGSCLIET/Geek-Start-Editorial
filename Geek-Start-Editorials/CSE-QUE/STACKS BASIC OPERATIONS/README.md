# Question: 

## Write a menu driven modular C program to simulate the basic stack operations like push, pop, peek.

Menu options: </br>
1 Push</br>
2 POP</br>
3 Peek</br>
-1 Exit</br>

Input Format
The input contains the option number followed by an element only in case of push operation.

Constraints
NA


Output Format
For each case display the output in a new line.

Sample Input 0
1 10
1 20
1 30
2
3
2
1 40
3
-1
  
Sample Output 0
30
20
20
40
  
Explanation 0
 1 10, push 10 on top of the stack.
 1 20, push 20 on top of the stack.
 1 30, push 30 on top of the stack.
 2 is pop, pop an element from top of stack which is 30 and print it. 
 3 is peek, get top of stack which is 20, peek and print 20.
 2 is pop, pop an element from top of stack 20 and print it
 1 40, push 40 on top of stack
 3 is peek, get top of stack which is 40 and print it.
 -1 is stop. 
  
  
Sample Input 1
1 10
1 20
1 30
2
2
2
2
1 40
3
-1
  
Sample Output 1
30
20
10
stack underflow
40

Explanation 1
1 10, push 10
1 20, push 20
1 30, push 30
2, pop an element from top of stack which is 30 and print it.
2, pop an element from top of stack which is 20 and print it.
2, pop an element from top of stack which is 10 and print it.
2, pop, but the stack is empty therefore print stack underflow
1 40, push 40
3 peek, get the top, which is 40 and print it
-1 stop.
