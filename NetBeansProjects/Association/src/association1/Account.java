
package association1;

/**
 *
 * @author sabbir
 */
public class Account {
    
 //	private String accName;

	private String accNumber;

	private double balance;

//	private String nid_number;
        
        private Person accountHolder;


	public Account( String accName ,String accNumber ,double balance ,String nid){
	
//	this.accName=accName;
	this.accNumber=accNumber;
	this.balance=balance;
//	this.nid_number=nid_number;

        accountHolder = new Person (accName, nid);
	}


	/*public void withdraw(double amount)

	{
		System.out.println("enter amount: ");

		if((balance>=amount) && (amount>0.00) && (balance-amount)>500.00)

		{

			balance=balance-amount;

		}

		else 

		{
      
			System.out.println("Sorry :(");

		}
	  

	}

	public void deposit(double amount)

	{

		if(amount>=0.00) 

		balance=balance+amount;

	}
	*/

	public double checkBalance()

	{

		return this.balance;

	}
        
        
    public Person getAccountHolder() {
        return accountHolder;
    }


	public void printAllInfo()

	{

	   System.out.println(accountHolder);
		
	}

    
}
