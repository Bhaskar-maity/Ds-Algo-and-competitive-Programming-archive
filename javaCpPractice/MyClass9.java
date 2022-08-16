                  import java.util.*;
import java.lang.Double;

public class MyClass
{

public static void main(String[] args)
{
Sim[] cards = new Sim[5];

Scanner sc = new Scanner(System.in);

for(int i = 0;i<5;i++)
{
int simId = sc.nextInt();sc.nextLine();
String customerName = sc.nextLine();
double balance = sc.nextDouble();
double ratePerSecond = sc.nextDouble();sc.nextLine();
String circle = sc.nextLine();

cards[i] = new Sim(simId,customerName, balance,ratePerSecond, circle);
}

String circle1 = sc.nextLine();
String circle2 = sc.nextLine();

Sim[] result = transferCustomerCircle(cards, circle1, circle2);

//-----------------problem is in the sort lamda func
//check for double compare cause only int can be compapared in this way


for(Sim s: result)
System.out.println(s.getSimId()+" "+s.getCustomerName()+" "
+s.getCircle() + " " + s.getRatePerSecond());

}

public static Sim[] transferCustomerCircle(Sim[] cards, String circle1, String circle2)
{
//method logic
List<Sim> res = new ArrayList<Sim>();
for(Sim s: cards){
    if(s.circle.equalsIgnoreCase(circle1)){
        s.circle= circle2;
        res.add(s);
    }
}
Sim[] result = res.toArray(new Sim[res.size()]);
// for(int i=0; i<result.length; i++){
// result[i] = res.get(i);
// }

//-------------just have to sort then submit
Arrays.sort(result);
return result;

}
}

class Sim implements Comparable<Sim>
{
//code to build Sim class
int simId;  
String customerName; 
double balance;
double ratePerSecond;
String circle;

public Sim(int simId, String customerName, double balance, double ratePerSecond, String circle){
    this.simId = simId;
    this.customerName = customerName;
    this.balance = balance;
    this.ratePerSecond = ratePerSecond;
    this.circle = circle;
}
int getSimId(){
    return simId;
}
String getCustomerName(){
    return customerName;
}
double getBalance(){
    return balance;
}

double getRatePerSecond(){
    return ratePerSecond;
}

String getCircle(){
    return circle;
}

@Override
public int compareTo(Sim o){
    if(this.ratePerSecond > o.ratePerSecond) return -1;
    else if (this.ratePerSecond < o.ratePerSecond) return 1;
    return 0;
}
}
            