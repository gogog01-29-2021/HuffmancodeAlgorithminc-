import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {
    static class Edge implements Comparable<Edge>{
        int from,to,weight;
        Edge(int from,int to,int weight){
            this.from=from;
            this.to=to;
            this.weight=weight;
        }

        @Override
        public int compareTo(Edge other){
            return Integer.compare(this.weight,other.weight);

        }
    }

    public static int kruskals(int gNodes, List<Integer> gFrom, List<Integer> gTo, List<Integer> gWeight) {
        List<Edge> edges=new ArrayList<>(); //adjlist?
        for(int i=0;i<gFrom.size();i++){ //g_from is array th
            edges.add(new Result.Edge(gFrom.get(i),gTo.get(i),gWeight.get(i)));

        }
        Collections.sort(edges); //how can we sort by weight?

        DisjointSet ds = new DisjointSet(gNodes + 1);
        int mstWeight = 0;
        for(Edge edge : edges) {
            if(ds.find(edge.from) != ds.find(edge.to)) {
                ds.union(edge.from, edge.to);
                mstWeight += edge.weight;
            }
        }

        return mstWeight;
    }

    public static int shortestPath(int gNodes, List<Integer> gFrom, List<Integer> gTo, List<Integer> gWeight) {
        System.out.println(gNodes);
        System.out.println(gFrom);
        System.out.println(gTo);
        System.out.println(gWeight);

        return 0;
    }
    static class DisjointSet{
        int[] parent;
        int[] rank;
        public DisjointSet(int n){
            parent=new int[n];
            rank=new int[n];
            for(int i=0;i<n;i++){
                parent[i]=i;
                rank[i]=0;
            }

        }
        public int find(int i){
            if(parent[i]==i){
                return i;
            }
            return parent[i]=find(parent[i]);
        }
        public void union(int i,int j){
            int p1=find(i);
            int p2=find(j);
            if(p1!=p2){
                if(rank[p1]<rank[p2]){
                    parent[p1]=p2;
                } else if(rank[p1]>rank[p2]){
                    parent[p2]=p1;
                }else{
                    parent[p1]=p2;
                    rank[p2]++;
                }
            }
        }
    }
    }


public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] gNodesEdges = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        int gNodes = Integer.parseInt(gNodesEdges[0]);
        int gEdges = Integer.parseInt(gNodesEdges[1]);

        List<Integer> gFrom = new ArrayList<>();
        List<Integer> gTo = new ArrayList<>();
        List<Integer> gWeight = new ArrayList<>();

        IntStream.range(0, gEdges).forEach(i -> {
            try {
                String[] gFromToWeight = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

                gFrom.add(Integer.parseInt(gFromToWeight[0]));
                gTo.add(Integer.parseInt(gFromToWeight[1]));
                gWeight.add(Integer.parseInt(gFromToWeight[2]));
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        int res = Result.kruskals(gNodes, gFrom, gTo, gWeight);

       bufferedWriter.write(String.valueOf(res));
       bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
