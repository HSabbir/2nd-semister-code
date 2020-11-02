import java.util.Scanner; 


public class ArrayOfAccount
{
	public static void main(String[] args)	{
	
	Scanner scan=new Scanner(System.in);
		
		Account A1= new Account ("Sabbir","1001",4500.0,"507071");
		Account A2= new Account ("Sabbir","1002",5500.0,"507072");
		Account A3= new Account ("Sabbir","1003",6500.0,"507073");
		Account A4= new Account ("Sabbir","1004",3500.0,"507074");
		Account A5= new Account ("Sabbir","1005",7500.0,"507075");
		
		 int Size=10;
		
		Account [] arrayOfAccount;
		arrayOfAccount = new Account[Size];
		
		 arrayOfAccount[0] = A1;
		 arrayOfAccount[1] = A2;
		 arrayOfAccount[2] = A3;
		 arrayOfAccount[3] = A4;
		 arrayOfAccount[4] = A5;
		 
		 String accountNumber;
		 
		// some_string.equals
		 
		 System.out.print("Enter Your Account Number:");
		 accountNumber=scan.nextLine();
		 
		 for(int i=0; i< 5;i++)
		 {
		 	if( arrayOfAccount[i].getAccNumber().some_string.equals(accountNumber)) 
		 	{
		 		arrayOfAccount[i].printAllInfo();
		 	}
		 }

	}		 
}
