
package association1;


public class Person {
   private String name;
   private String address;
   private String phone;
   private String nid;
   private int age;
    
   public Person( String name,String address,String phone,String nid,int age)
    {
       this.name = name;
       this.address=address;
       this.phone = phone;
       this.nid= nid ;
       this.age= age ;
       
    
    }
   public Person()
    {
        
    }
    
   public Person(String name , String nid)
    {
        this.name=name;
        this.nid=nid;
    }
    
    public String toString()
    {
        return "My Name: " + name + ", NID: " + nid ;
    }

    public String getName() {
        return name;
    }

    public String getAddress() {
        return address;
    }

    public String getPhone() {
        return phone;
    }

    public String getNid() {
        return nid;
    }

    public int getAge() {
        return age;
    }
    
    
    
}
