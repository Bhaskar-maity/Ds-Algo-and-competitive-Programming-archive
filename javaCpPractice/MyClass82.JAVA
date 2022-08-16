import java.util.*;      
public class MyClass {

    public static void main(String[] args) {
        //code to read values
        Scanner sc = new Scanner(System.in);
        int count = 4;
        Player[] players = new Player[count];
        for (int i = 0; i < count; i++) {
            int id = sc.nextInt();
            sc.nextLine();
            String country = sc.next();
            sc.nextLine();
            String side = sc.next();

            double price = sc.nextDouble();
            players[i] = new Player(id, country, side, price);
        }
        String search = sc.next();

        //code to call required method
        Player[] list = searchPlayerForMatch(search, players);

        //code to display the result
        Arrays.sort(list, (a, b) -> a.id - b.id);
        for (Player p: list)
            System.out.println(p.id);
    }

    public static Player[] searchPlayerForMatch(String search, Player[] players) {
        //method logic
        List < Player > list = new LinkedList < > ();
        for (Player p: players) {
            if (p.side.equalsIgnoreCase(search))
                list.add(p);
        }
        Player[] arr = new Player[list.size()];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = list.get(i);
        }

        return arr;
    }
}

class Player {
    //code to build Player class
    int id;
    String country;
    String side;
    double price;

    public Player(int id, String country, String side, double price) {
        this.id = id;
        this.country = country;
        this.side = side;
        this.price = price;
    }
}