public class Main{
    public static void main(String[] args){
        Itm itm=new Itm();
        List<Student>=Arrays.asList(
            new Student(2020,"Allice"),
            new Student(2021,"Bob"),
            new Student(2022,"Cathy"),
            new Student(2023,"David"),
            new Student(2024,"Eva")
        );
        collections.sort(students,itm); // How can I call the compare method in Itm class? bycollections.sort()
        System.out.println("1. Sorted students by years of admission:");
        for(Student student:students){
            System.out.println(student.year+" "+student.name);
        }
        System.out.println(students);
        int uniqueNamesCount=itm.countNames(students);
        System.out.println("2. Number of unique names: "+uniqueNamesCount);
        System.out.println("3. Students with unique names:");

        //List<Student> studentsWithUniqueNames=itm.getStudentsWithUniqueNames(students);
        System.out.println("\n4. Balanced Brackets test results: "+(itm.isBracketBalanced("{[()]}") ? "Balanced":"Unbalanced"));
    }
}