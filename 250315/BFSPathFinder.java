import java.util.*;

public class BFSPathFinder {
    public static boolean areConnected(Graph graph, int start, int target) {
        if (start == target) return true;

        Set<Integer> visited = new HashSet<>();
        Queue<Integer> queue = new LinkedList<>();
        queue.add(start);
        visited.add(start);

        while (!queue.isEmpty()) {
            int current = queue.poll();

            for (int neighbor : graph.getNeighbors(current)) {
                if (neighbor == target) {
                    return true;
                }
                if (!visited.contains(neighbor)) {
                    visited.add(neighbor);
                    queue.add(neighbor);
                }
            }
        }
        return false;
    }
}
