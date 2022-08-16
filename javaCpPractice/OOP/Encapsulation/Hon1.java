import java.util.*;

public class Hon1 {
    public static void main(String[] args){
        Author a1 = new Author("Bhaskar Maity", "abc@gmail.com", 'M');
        Book b1 = new Book("My book", a1, 67.8, 4);

        System.out.println("Book name => "+ b1.name);
        
        System.out.println("Price => "+ b1.price);
        System.out.println("Quantity => "+ b1.qtyStock);

        System.out.println("Author name => "+ b1.author.name);
        System.out.println("Author mail => "+ b1.author.email);
        System.out.println("Author gender => "+ b1.author.gender);
    }
}

class Author {
    String name;
    String email;
    char gender;

    Author(String name, String email, char gender){
        this.name = name;
        this.email = email;
        this.gender = gender;
    }
}

class Book {
    String name;
    Author author;
    double price;
    int qtyStock ;

    Book (String name, Author author, double price, int qtyStock){
        this.name = name;
        this.author = author;
        this.price = price;
        this.qtyStock = qtyStock;
    }
}