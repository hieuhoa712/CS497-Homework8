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
