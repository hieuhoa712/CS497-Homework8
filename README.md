# CS497-Homework8
# Hoa Fang

1. Time Complexity: O(n)

This problem is similar to detecting a cycle in a graph. 
We can use the idea of topological sort to solve this in 
DFS fashion. We first transform pair<int, int> to adjacency-list 
representation to optimize time/space complexity for implementing 
graph algorithm.

Basic Algorithm:

    Initialize an empty list corresponding to each node
    For all its neighbors
        if there is a visited neighbor
            there is a cycle present
    Mark if vertex i visited
        Traverse i stored in graph[i] and call DFS() on them if they are not visited
    Topological sorting algorithm

2. Time Complexity: O(1)

The basic definition of quotient of division is the number of times that
we can subtract the divisor from the dividend without making it negative

Basic Algorithm:

    While divident >= divisor
        subtract more by shifting divisor int
        

3. Time Complexity: O(n)

Suppose, we have a series of memory cells storing how many coins that 
are needed as a minimum to get there. We can consider while the initial
value of all the others is going to be INT_MAX. Therefore, we want to
calculate up to that amount, and we have the value for simplicity 
amount + 1 cells are how many we need.

Basic Algorithm:

    creating the base array
    sort algorithm
    setting the initial array at [0]
        0 for all the rest
    if this was not previously reached
        add the value for INT_MAX
