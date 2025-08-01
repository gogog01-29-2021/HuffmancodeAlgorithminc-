import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Integer t=sc.nextInt();
        integer s=sc.next();
        for(int i=0;i<t;i++){

        }
}
public static void postOrder(Node root){
    postOrder(root.left);
    postOrder(root.right);
    System.out.println(root.data);
    }
}
