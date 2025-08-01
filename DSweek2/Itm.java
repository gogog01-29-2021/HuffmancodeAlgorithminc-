public class Itm implements Comparator<Student>{
    @Override
    public int compare(Student s1,Student s2){
        if(s1.year!=s2.year){
            return s1.year-s2.year;
        }
        return s1.name.compareTo(s2.name);
    }
    public int countNames(List<Student< students){
        Set<String> names=new HashSet<>();  //HashSet<String< names=new HashSet<>();
        for(Student student:students){
            names.add(student.getname);
        }
        //for(int j=0;j<students.size();j++){
        //    names.add(students.get(j).name);   //students.get(j).toSring();
        return names.size();
    }
    public boolean isBracketBalanced(String s){ //A. for switch B.
        Stack<Character> stack=new Stack<>();
        for(int i=0;i<s.length();i++){
            char c=s.charAt(i);
            if(c=='(' || c=='{' || c=='['){
                stack.push(c);
            }else if(c==')' || c=='}' || c==']'){.   //if
                if(stack.isEmpty()){
                    return false;
                }
                char top=stack.pop();//
                if((c==')' && top!='(') || (c=='}' && top!='{') || (c==']' && top!='[')){
                    return false;
                }
            }
        }
        return stack.isEmpty(); //return true;
    }
}
