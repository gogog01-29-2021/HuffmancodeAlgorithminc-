import java.io.*;
import java.util.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;

public class Eventree {


    static int evenForest(int t_nodes, int t_edges, List<Integer> t_from, List<Integer> t_to) {


    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] tNodesEdges = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        int tNodes = Integer.parseInt(tNodesEdges[0]);
        int tEdges = Integer.parseInt(tNodesEdges[1]);

        List<Integer> tFrom = new ArrayList<>();
        List<Integer> tTo = new ArrayList<>();

        IntStream.range(0, tEdges).forEach(i -> {
            try {
                String[] tFromTo = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

                tFrom.add(Integer.parseInt(tFromTo[0]));
                tTo.add(Integer.parseInt(tFromTo[1]));
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        int res = evenForest(t_nodes, t_edges, t_from, t_to);

        bufferedWriter.write(String.valueOf(res));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
