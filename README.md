# PUSH_SWAP


Mandatory part
V.1 The rules

• You have 2 stacks named a and b.

• At the beginning:

◦ The stack a contains a random amount of negative and/or positive numbers

which cannot be duplicated.

◦ The stack b is empty.

• The goal is to sort in ascending order numbers into stack a. To do so you have the

following operations at your disposal:

sa (swap a): Swap the first 2 elements at the top of stack a.

Do nothing if there is only one or no elements.

sb (swap b): Swap the first 2 elements at the top of stack b.

Do nothing if there is only one or no elements.

ss : sa and sb at the same time.

pa (push a): Take the first element at the top of b and put it at the top of a.

Do nothing if b is empty.

pb (push b): Take the first element at the top of a and put it at the top of b.

Do nothing if a is empty.

ra (rotate a): Shift up all elements of stack a by 1.

The first element becomes the last one.

rb (rotate b): Shift up all elements of stack b by 1.

The first element becomes the last one.

rr : ra and rb at the same time.

rra (reverse rotate a): Shift down all elements of stack a by 1.

The last element becomes the first one.

rrb (reverse rotate b): Shift down all elements of stack b by 1.

The last element becomes the first one.

rrr : rra and rrb at the same time.

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
