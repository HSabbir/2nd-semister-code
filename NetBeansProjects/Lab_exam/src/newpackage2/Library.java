package newpackage2;

public class Library {
    
    Book book[];
    Author author[];
    int numOfBook;
    int numOfAuthor;
    int qty;
    public Library()
    {
        qty = 0;
        book = new Book[50];
        author = new Author[30];
        author[0] = new Author("Billal","billal@mail.com",'M');
        author[1] = new Author("Hosain","hosain@mail.com",'M');
        author[2] = new Author("Nirab","nirab@mail.com",'M');
        
        book[0] = new Book("book1",author[0],100.50,6);
        book[1] = new Book("book2",author[1],112.50);
        book[2] = new Book("book3",author[2],106.50,5);
        book[3] = new Book("book4",author[1],109.50);
        book[4] = new Book("book5",author[0],1000.50);
        
        numOfBook = 5;
        numOfAuthor = 3;
        
        qty += book[0].getQty();
        qty += book[1].getQty();
        qty += book[2].getQty();
        qty += book[3].getQty();
        qty += book[4].getQty();
    }
    
    boolean search(String bookName)
    {
        int found = 0;
        for(int i=0; i<numOfBook; i++)
        {
            if(bookName.equals(book[i].getName()))
            {
                found = 1;
            }
        }
        if(found == 0) return false;
        else return true;
    }
    
    void addNewBook(Book book)
    {
        this.book[numOfBook] = book;
        qty += book.getQty();
        numOfBook++;
    }
    
    void borrow(Book book)
    {
        this.book[numOfBook] = book;
        numOfBook--;
        qty -= book.getQty();
    }
    
     void addNewAuthor(Author author)
    {
        this.author[numOfAuthor] = author;
        numOfAuthor++;
    }
    
}