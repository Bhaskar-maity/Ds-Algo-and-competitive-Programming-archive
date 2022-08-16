import java.util.*;

public class MyClass{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt(); sc.nextLine();
        List<double> d = new ArrayList<double>();
        for(int i=0; i<n; i++){
            double s= sc.nextDouble(); sc.nextLine();
            d.add(s);
        }

        List<double> res = findValidScore(d,n);
        if(res.size()==0){
            System.out.println("No valid score found");
        }
        else System.out.println("Valid Scores = "+ toString(res));

    }

    public static boolean vaidScore(double n){
        if(n>0 && n<=100) return true;
        else return false;
    }

    public static List<double> findValidScore(List<double> l,int n){
        List<double> res = new ArrayList<double>();
        for(int i=0;i<n;i++){
            if(vaidScore(l.get(i))) res.add(l.get(i));
        }

        return res;
    }
}