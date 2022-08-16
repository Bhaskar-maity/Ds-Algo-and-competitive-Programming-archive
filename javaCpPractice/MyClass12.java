                  import java.util.*;
public class MyClass
{

 public static void main(String[] args){
  // code to read values 
  Scanner sc = new Scanner(System.in);
  Bill[] bill = new Bill[4];

  for(int i = 0; i < bill.length; i++){
      int billNo=sc.nextInt(); sc.nextLine();
      String name = sc.nextLine();
      String typeOfConnection = sc.nextLine();
      double billAmount = sc.nextDouble(); sc.nextLine();
      boolean status = sc.nextBoolean(); 

      bill[i] = new Bill(billNo,name,typeOfConnection,billAmount,status);
  }
boolean sStatus = sc.nextBoolean();
String sTypeOfConnection = sc.nextLine();
  // code to call required method
  Bill mxRes = findBillWithMaxBillAmountBasedOnStatus(bill,sStatus);
  if(mxRes != null) System.out.println(mxRes.billNo + "#"+mxRes.name);
  else System.out.println("There are no bill with the given status");

  int cntRes = getCountWithTypeOfConnection(bill, sTypeOfConnection);
  if(cntRes !=0) System.out.println(cntRes);
  else System.out.println("There are no bills with given type of connection");
  // code to display the result
 }
    
 //code the first method
    public static Bill  findBillWithMaxBillAmountBasedOnStatus(Bill[] bill, boolean sStatus){
        List<Bill> l = new ArrayList<>();

        for(int i = 0; i < bill.length; i++){
            if(bill[i].status == sStatus) l.add(bill[i]);
        }

        Bill[] res = l.toArray(new Bill[l.size()]);
        Arrays.sort(res);

        if(res.length < 1) return null;
        else
            return res[0];
    }
 //code the second method   
    public static int getCountWithTypeOfConnection(Bill[] bill, String sTypeOfConnection){
        int cnt=0;
        for(int i = 0; i < bill.length; i++){
            if(bill[i].typeOfConnection.equalsIgnoreCase(sTypeOfConnection)) cnt++;
        }

        return cnt;
    }
}

//code the class
class Bill implements Comparable<Bill>{
    int billNo;
    String name; 
    String typeOfConnection; 
    double billAmount; 
    boolean status; 

    Bill(int billNo, String name, String typeOfConnection, double billAmount, boolean status){
        this.billNo = billNo;
        this.name = name;
        this.typeOfConnection = typeOfConnection;
        this.billAmount = billAmount;
        this.status = status;
    }

    @Override
    public int compareTo(Bill a){
        //assending
        if(this.billAmount < a.billAmount){
            return 1;
        } else if(this.billAmount > a.billAmount){
            return -1;
        } else return 0;
    }
}