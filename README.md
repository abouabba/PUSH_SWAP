# PUSH_SWAP



![image](https://github.com/user-attachments/assets/215215d1-c4f9-49e5-833d-42c16b24d363)



# Mandatory part

.1 The rules

• You have 2 stacks named a and b.

• At the beginning:

◦ The stack a contains a random amount of negative and/or positive numbers

which cannot be duplicated.

◦ The stack b is empty.

• The goal is to sort in ascending order numbers into stack a. To do so you have the

following operations at your disposal:


🇲🇦 sa (swap a): Swap the first 2 elements at the top of the stack a. Does nothing if there is only one or none. 

🇲🇦 sb (swap b) : Swap the first 2 elements at the top of the stack b. Does nothing if there is only one or none. 

🇲🇦 ss : sa and sb at the same time. 

🇲🇦 pa (push a): Takes the first element on top of b and puts it on a. Does nothing if b is empty. 

🇲🇦 pb (push b): Takes the first element on top of a and puts it on b. Does nothing if a is empty. 

🇲🇦 ra (rotate a): Shifts all the elements of the stack a up by one position. The first element becomes the last. 

🇲🇦 rb (rotate b) : Shifts all the elements of the stack b one position upwards. The first element becomes the last one. 

🇲🇦 rr : ra and rb at the same time. 

🇲🇦 rra (reverse rotate a): Shifts all elements of the stack down one position. the stack a. The last element becomes the first. 

🇲🇦 rrb (reverse rotate b): Shifts all the elements of the stack b one position downwards. the stack b. The last element becomes the first. 

🇲🇦 rrr : rra and rrb at the same time.

# Examples

We have 6 random numbers, placed on a first stack, called stack A, as follows. Obviously, stack B is empty at the beggining. Stack B will be used temporarily throughout your program, but must be empty again at the end, with the list sorted into stack A.

![image](https://github.com/user-attachments/assets/dda016e2-af7b-4287-9c74-58c5d2c741eb)

Let's say we want to move an element from stack A to stack B. This can be done with the "PUSH" operation. 

![image](https://github.com/user-attachments/assets/98823f3a-7bc4-4f69-a117-904164504474)

The first element of stack A becomes the first element of stack B. Don't forget then that the second element of the A stack becomes the first, and so on. Here stack B was empty, but if there were numbers in it, the first element of stack B would become the second and so on. The process is the same when you want to send an element from list B to list A.


Let's continue with the modified list above. We can also swap the first two numbers of a stack by using the "SWAP" operation.

--------------------------------------------------------------------------------------------------------------------------------------

# ****Algorithms****

   ![image](https://github.com/user-attachments/assets/eb151018-a77f-4a2b-8e16-375b7c082f53)


An algorithm is a step-by-step procedure or set of rules designed to solve a specific problem or perform a task. Algorithms are fundamental in computer science and programming, as they provide the logic for solving computational problems efficiently

# Algorithm complexity

Algorithm complexity refers to the amount of resources (such as time or memory) required for an algorithm to solve a problem. It provides a way to measure and compare the efficiency of different algorithms.


There are two main types of algorithm complexity:

1. Time complexity: measures the amount of time an algorithm takes to solve a problem. 


2. Space complexity: measures the amount of memory an algorithm takes to solve a problem.

# Here is a diagram that compares several levels of complexity/Big O notations with each other:

![image](https://github.com/user-attachments/assets/c2e32414-db48-4c95-b55c-507428659eaf)

This is a visual representation of different Big O complexities. It compares the growth rates of various algorithms based on their time complexity as the size of the input increases. Here's what the diagram shows:


🕙 O(1) (Constant Time): Flat line—does not grow with input size.


🕖 O(log n) (Logarithmic Time): Grows slowly, ideal for large inputs.


🕢 O(√n) (Square Root Time): Grows faster than O(log n) but slower than linear.


🕗 O(n) (Linear Time): Grows directly with input size.


🕘 O(n²) (Quadratic Time): Grows rapidly, common in nested loops.


🕘 O(n³) (Cubic Time): Even faster growth, typical of triple nested loops.


🕤 O(2ⁿ) (Exponential Time): Grows extremely fast, often impractical for large inputs.

# Known sorting algorithms
To achieve the push swap project, you will need to choose a sorting algorithm that will work with the intructions you are allowed to use and that will make the fewest possible moves.

Below is an example of sorting algorithms and their complexity, according to three different methods for the time complexity and with one for the space complexity.

![image](https://github.com/user-attachments/assets/6419fe37-1bbe-4c71-8c28-a707400601ee)
