
package newpackage2;

public class Book {
    private String name;
     private Author Author;
     private double price ;
     private int qty;

    public Book(String name, Author Author, double price) {
        this.name = name;
        this.Author = Author;
        this.price = price;
    }

    public Book(String name, Author Author, double price, int qty) {
        this.name = name;
        this.Author = Author;
        this.price = price;
        this.qty = qty;
    }

    public String getName() {
        return name;
    }

    public Author getAuthor() {
        return Author;
    }

    public double getPrice() {
        return price;
    }

    public int getQty() {
        return qty;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public void setQty(int qty) {
        this.qty = qty;
    }

    @Override
    public String toString() {
        return "Book{" + "name=" + name + ", Author=" + Author + ", price=" + price + ", qty=" + qty + '}';
    }
    
    
}
