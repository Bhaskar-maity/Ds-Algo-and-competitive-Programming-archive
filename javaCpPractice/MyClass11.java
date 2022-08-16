                  import java.util.*;
public class MyClass
{

 public static void main(String[] args)
 {
  //code to read values 
  Scanner sc= new Scanner(System.in);
    Student[] students = new Student[4];
  for (int i=0; i<4; i++){
      int rollNo=sc.nextInt(); sc.nextLine();
      String name=sc.nextLine();
      String branch=sc.nextLine();
      double score=sc.nextDouble(); sc.nextLine();
      boolean dayScholar=sc.nextBoolean();

    students[i] = new Student(rollNo, name, branch, score, dayScholar);
  }
  //code to call required method
  //code to display the result

  //1st function
  int cntSch = findCountOfDayscholarStudents(students);
  if(cntSch==0){
      System.out.println("There are no such dayscholar students");
  }
  else System.out.println(cntSch);

//2nd function
Student res = findStudentwithSecondHighestScore(students);
if(res!=null){
    System.out.println(res.rollNo+"#"+res.name+"#"+res.score);
}else System.out.println("There are no student from non day scholar");
     
 }

 public static int findCountOfDayscholarStudents(Student[] students){
     int cnt=0;
     for (Student student : students){
         if(student.score>80 && student.dayScholar) cnt++;
     }
     
     return cnt;
 }

public static Student findStudentwithSecondHighestScore (Student[] students){
  List<Student> l = new  ArrayList<>();

    for(Student s : students){
        if(!s.dayScholar) l.add(s);
    }

    Student[] res = l.toArray(new Student[l.size()]);
    Arrays.sort(res);

    if(res.length <2) return null;
    else
        return res[res.length - 2];
}
 //code the first method
    
 //code the second method   

}

//code the class
class Student implements Comparable<Student>{
   int rollNo;
String name; 
String branch;
double score;
boolean dayScholar;

Student(int rollNo, String name, String branch, double score, boolean dayScholar){
    this.rollNo = rollNo;
    this.name = name;
    this.branch = branch;
    this.score = score;
    this.dayScholar = dayScholar;
}

@Override
public int compareTo(Student s){
    //decending
    if(this.score > s.score){
        return 1;
    } else if(this.score == s.score){
        return 0;
    } else return -1;
}
}