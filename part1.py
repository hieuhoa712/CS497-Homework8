def makeGraph(numCourses, prerequisites):
        graph = [[] for _ in range(numCourses)]
        for prerequisite_pair in prerequisites:
                graph[prerequisite_pair[1]].append(prerequisite_pair[0])
        return graph

def isCyclic(current, visited, graph):
        visited[current] = True;
        output = False;
        for v in graph[current]:
                if visited[v] == True:
                        return True
                output = output or isCyclic(v, visited, graph)
        visited[current] = False
        return output

def DFS(u, visited, stack, graph):
        visited[u] = True;
        for v in graph[u]:
                if visited[v] == False:
                        DFS(v, visited, stack, graph)
        stack.insert(0, u)
def topoSort(numCourses, graph):
        ifVisited = [False] * numCourses
        for i in range(numCourses):
                if ifVisited[i] == False:
                        if isCyclic(i, ifVisited, graph):
                                return []


        ifVisited = [False] * numCourses
        stack = []
        for i in range(numCourses):
                if ifVisited[i] == False:
                        DFS(i, ifVisited, stack, graph)
        return stack


graph = makeGraph(2, [[1, 0]])
order = topoSort(2, graph)
print(order)
graph = makeGraph(4, [[1, 0], [2, 0], [3, 1], [3, 2]])
order = topoSort(4, graph)
print(order)
graph = makeGraph(1, [])
order = topoSort(1, graph)
print(order)
