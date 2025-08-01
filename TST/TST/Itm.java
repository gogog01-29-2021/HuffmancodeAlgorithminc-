package TST;

public class Itm {
    public boolean searchTST(TSTree root, String word) {
        if (root == null) {
            return false;
        }
        if (root.root.right == null) { //why root.root.right become start of word?
            return false;
        }
        //TSTree current=root.root.right;
        Node current = root.root.right;
        Node last = root.root.right;

        int i = 0;
        while (i < word.length()) {
            if (current == null) {
                return false; // To avoid checking every if(current.right!=null)
            }
            if (current.data == word.charAt(i)) {   //root.equals(word.charAt(i))
                last = current;
                current = current.eq;
                i++;
            } else if (current.data < word.charAt(i)) { //(current.data<word.charAt(i)){
                last = current;
                current = current.right;      //current=current.right
                last = last.right;
            }
            //if(current.right.data==word.charAt(i)){
            // current.right=searchTST(current.right,word);//current=current.right; //current.right=searchTST(current.right,
            //

            else if (current.data > word.charAt(i)) {
                last = current;
                current = current.left;
            } else {
                return false;
            }
        }
       // if (current.isEndOfString == false) {
       //     return false;
       // }
        if (last.isEndOfString == false) {
            return false;
        }

        return true;
    }
}

