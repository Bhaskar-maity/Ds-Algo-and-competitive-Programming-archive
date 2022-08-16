                   import java.util.*;
                   
                    public class MyClass
{

public static void main(String[] args)
{
//code to read values
//code to call required method
//code to display the results
Scanner sc = new Scanner(System.in);
Inventory[] inventory = new Inventory[4];

for (int i = 0; i < inventory.length; i++){
    String inventoryId=sc.nextLine();
    int maximumQuantity=sc.nextInt(); sc.nextLine();
    int currentQuantity=sc.nextInt(); sc.nextLine();
    int threshold=sc.nextInt(); sc.nextLine();

    inventory[i] = new Inventory(inventoryId,maximumQuantity,currentQuantity,threshold);

}

int limit=sc.nextInt();

Inventory[] result = replenish(limit, inventory);

for (int i = 0; i < result.length; i++){
    if(result[i].threshold >= 75) System.out.println(result[i].inventoryId + " Critical Filling");
    else if(result[i].threshold >=50 && result[i].threshold <=74) System.out.println(result[i].inventoryId + " Moderate Filling");
    else System.out.println(result[i].inventoryId + " Non-Critical Filling");
}

}

public static Inventory[] replenish(int limit, Inventory[] inventory)
{
//method logic
List<Inventory> l = new LinkedList<>();
for(int i=0; i<4; i++){
    if(inventory[i].threshold<=limit)
    l.add(inventory[i]);
}

Inventory[] res = l.toArray(new Inventory[l.size()]);

return res;

}
}

class Inventory
{
String inventoryId;
int maximumQuantity;
int currentQuantity;
int threshold;

Inventory(String inventoryId, int maximumQuantity, int currentQuantity, int threshold){
    this.inventoryId = inventoryId;
    this.maximumQuantity = maximumQuantity;
    this.currentQuantity = currentQuantity;
    this.threshold = threshold;
}
}
            