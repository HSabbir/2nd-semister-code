

package basicBank;
import java.util.Scanner; 

public class NewMain1 {

    public static void main(String[] args) {
       
        Scanner scan=new Scanner(System.in);
		
		 NewClass1 A1= new  NewClass1 ("Sabbir","09272980",5000.0,"847483763883738");
		
		while(true)
		{
			int choice;
		
			System.out.println(" 1.Check Information \n 2. Deposit \n 3.Withraw \n 4.Exit");
			System.out.print("Enter Your Choice: " );
		
			choice=scan.nextInt();
			System.out.println();
			
			if(choice == 1) {
			
				A1.printAllInfo();
				System.out.println();
			}
			
			else if (choice == 2)
			{
				double amount;
				System.out.println("Enter Your ammount of Deposit: " );
				amount=scan.nextDouble();
				
				A1.deposit(amount);
			}
			
			else if(choice ==3)
			{
				double amount;
				System.out.println("Enter Your ammount of Withraw: " );
				amount=scan.nextDouble();
				
				A1.withdraw(amount);
			}
                        else if (choice == 4) break ;
			
			else System.out.println("Wrong Choice...Try again: ");
			
		}
		
	}

}
    
