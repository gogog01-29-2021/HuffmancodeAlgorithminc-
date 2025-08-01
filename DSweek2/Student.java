public class Student {
    int year;
    String name;
    public Student(int year,String name){
        this.year=year;
        this.name=name;
    }
}
public class Node{
    int data;
    Node next;
}
    public Node(int data){
        this.data=data;
        this.next=null;
    }
    public Node(int data,Node next){
        this.data=data;
        this.next=next;
    }
