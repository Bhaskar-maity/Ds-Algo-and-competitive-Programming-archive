import java.util.*;

public class MyClass {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Player[] players = new Player[4];

        for (int i = 0; i < 4; i++) {
            int id = sc.nextInt(); sc.nextLine();
            String country = sc.nextLine();
            String side = sc.nextLine();
            double price = sc.nextDouble();

            players[i]= new Player(id, country, side, price);
        }
        sc.nextLine();
        String src = sc.nextLine();

        Player[] result = searchPlayerForMatch(players, src);
      
        for (Player player : result) {
            System.out.println(player.id);
        }
    }

    public static Player[] searchPlayerForMatch(Player[] players, String src){
        List<Player> res = new ArrayList<>();
        for(int i = 0; i < players.length; i++){
            if(players[i].side.equalsIgnoreCase(src)){
                res.add(players[i]);
            }
        }

        Player[] p = new Player[res.size()];
        for (int i = 0; i <p.length; i++){
            p[i] = res.get(i);
        }

        Player temp;
        for(int i=0; i<p.length-1; i++){
            for(int j=i+1; j<p.length; j++){
                if(p[i].id>p[j].id){
                    temp = p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
            }
        }

        return p;
    }
}

class Player {

    int id;
    String country;
    String side;
    double price;

    Player(int a, String b, String c, double d){
        id = a;
        country = b;
        side = c;
        price = d;
    }

}