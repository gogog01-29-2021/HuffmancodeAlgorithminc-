import org.junit.Test;

public class huffmancode {
    //huffman code
    import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

    public class huffmancodeTest {

        @Test
        public void testEncode() {
            huffmancode hc = new huffmancode();
            String input = "example";
            String encoded = hc.encode(input);
            assertNotNull(encoded);
            // Add more assertions based on expected output
        }

        @Test
        public void testDecode() {
            huffmancode hc = new huffmancode();
            String encoded = "101010"; // Example encoded string
            String decoded = hc.decode(encoded);
            assertNotNull(decoded);
            // Add more assertions based on expected output
        }
    }
}
