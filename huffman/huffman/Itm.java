package huffman;
public class Itm{
    public String decoder(HuffmanCodeTree huffmanCodeTree,String encodedString){
        //TenaryTreeSolution in Iterative Format
        //using while?
        //Using Recursive?
        //output+=current.left.character;  return nothing
        //System.out.print(encodedString) infinite loop
        //How tree is constructed? If we input abc?,aad?
        String output="";
        HNode current=huffmanCodeTree.root;
    for(int i=0;i<encodedString.length();i++){
        if(current==null){
            return""; //return ""?
        }
        if(current.left!='\0'){ //if(current.left!='\0'){ operator can't be applied
//recursive call by another function
        }
        if(current.right!="\0"){

        }
        if(current.left==null&&current.right==null){
            output+=current.character;
        }

    }
    return output;
    }
}