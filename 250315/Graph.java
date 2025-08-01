import java.util.*;
public class Graph{
    private Map<Integer,List<Integer>> adjList;
    public Graph(){
        adjList=new HashMap<>();
    }
    public void addEdge(int u,int v){
        adjList.putIfAbsent(u,new ArrayList<>());
        adjList.putIfAbsent(v,new ArrayList<>());
        adjList.get(u).add(v);
        adjList.get(v).add(u);
    }
    public List<Integer> getNeighbors(int node){
        return adjList.getOrDefault(node,new ArrayList<>());
    }
    public Set<Integer> getNodes(){
        return adjList.keySet();
    }
}