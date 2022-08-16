import java.util.*;

//-------------------Restaurant Class start----------------
class Restaurant {
    private String name;
    private String address;
    private int rating;

    //constructor
    Restaurant(String name, String address, int rating) {
        this.name = name;
        this.address = address;
        this.rating = rating;
    }

    //getter setter methods
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getAddress() {
        return address;
    }
    public void setAddress(String address) {
        this.address = address;
    }

    public int getRating() {
        return rating;
    }

    public void setRating(int rating) {
        this.rating = rating;
    }

    
}
//-------------------Restaurant Class end----------------


//-------------------Main Class start----------------

public class Main {
    public static void main(String[] args){
        //Array of size 100 where type is Restaurant
        Restaurant[] restaurants = new Restaurant[100];

        //putting random values
        for(int i=0; i<restaurants.length; i++){
            String name = "";
            String address = "";
            Random ran = new Random();
            int rating = ran.nextInt(6) + 1;

            // adding to the array by calling constructor
            restaurants[i]=new Restaurant(name, address, rating);

        }

        System.out.println(calculateAverageRating(restaurants));
        Restaurant[] res = searchRestaurantsNameRating("", 3, restaurants);
        // System.out.println(searchRestaurantsNameRating("", 3, restaurants));
        for (Restaurant r: res)
            System.out.println("Name :" + r.getName() + " Rating : "+ r.getRating());

    }

    //--------> the method for average rating calculation <-------------------
    public static int calculateAverageRating(Restaurant[] restaurants){
        int avg=0;
        for(int i=0; i<restaurants.length; i++){
            avg=avg+restaurants[i].getRating();
        }
        return avg/restaurants.length;
    }

    //--------> the method for resturant search <-------------------
    public static Restaurant[] searchRestaurantsNameRating(String name, int rating, Restaurant[] restaurants){
        //dynamic list cause we don't know the size of the result
        List<Restaurant> l = new LinkedList<Restaurant>();

        for(Restaurant r: restaurants){
            //here we are searching the name "Malacca" and reting >= rating
            if( r.getName()=="Malacca" && r.getRating()>=rating){
                l.add(r);
            }
        }

        //new array creation of size of result linkedlist
        Restaurant[] res = new Restaurant[l.size()];

        //puting to the Resurant type array so that we can return
        for(int i=0; i<l.size(); i++){
            res[i]=l.get(i);
        }
        return res;
    }
}

//-------------------Main Class end----------------
