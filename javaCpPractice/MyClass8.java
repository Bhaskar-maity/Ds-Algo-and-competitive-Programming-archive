                  import java.util.*;                    
//-------------just submit it
public class MyClass
{

public static void main(String[] args)
{
//code to read values
//code to call required method
//code to display the result
  Scanner sc=new Scanner(System.in);
  Player[] players=new Player[4];
  for(int i=0; i<4; i++){
    //-----------so input problem is big problem just see some videos
    int id = sc.nextInt();
            sc.nextLine();
            String country = sc.next();
            sc.nextLine();
            String side = sc.next();

            double price = sc.nextDouble();
    
    players[i] = new Player(id,country, side,price);
  }
  
  String search = sc.next();
  
  Player[] list=searchPlayerForMatch(search,players);
  Arrays.sort(list,(a,b)->a.id-b.id);
  
  for(Player p:list){
   System.out.println(p.id); 
  }
}

public static Player[] searchPlayerForMatch(String search, Player[] players)
{
//method logic
  List<Player> l = new LinkedList<>();
  for(Player p:players){
  if(p.side.equalsIgnoreCase(search))
   l.add(p);
  }
    Player[] arr= new Player[l.size()];
    for(int i=0;i<arr.length; i++){
    arr[i]=l.get(i);
    }
    
    
  
return arr;
}
}

class Player
{
//code to build Player class
 int id;
String country;
String side;
double price; 
  
  public Player(int id,String country, String side, double price){
   this.id=id;
    this.country=country;
    this.side=side;
    this.price=price;
    
  }
}
            