public class Main {
    public static void main(String[] args) {
        Graph graph = new Graph();

        // Example Graph 1
        graph.addEdge(1, 2);
        graph.addEdge(2, 3);
        graph.addEdge(4, 5);

        System.out.println("Are 1 and 3 connected? " + BFSPathFinder.areConnected(graph, 1, 3)); // true
        System.out.println("Are 1 and 5 connected? " + BFSPathFinder.areConnected(graph, 1, 5)); // false
    }
}
