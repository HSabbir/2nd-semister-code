
package basicBank;

public class NewClass1  {
    
    	private String accName;

	private String accNumber;

	private double balance;

	private String nid_number;


	public NewClass1 ( String accName ,String accNumber ,double balance ,String nid_number){
	
	this.accName=accName;
	this.accNumber=accNumber;
	this.balance=balance;
	this.nid_number=nid_number;
	}


	public void withdraw(double amount)

	{
		System.out.println("enter amount: ");

		if((balance>=amount) && (amount>0.00) && (balance-amount)>500.00)

		{

			balance=balance-amount;

		}

		else 

		{
      
			System.out.println("Sorry .....Not Enough Money");

		}
	  

	}

	public void deposit(double amount)

	{

		if(amount>=0.00) 

		balance=balance+amount;

	}
	
	public String getAccNumber()
	{
		return accNumber;
		
	}
	
	

	public double checkBalance()

	{

		return this.balance;

	}

	public void printAllInfo()

	{

	   System.out.println("Name: " + accName + "\tAccount number = " + accNumber +  "\tBalance = " +balance);
		
		

	}

}

