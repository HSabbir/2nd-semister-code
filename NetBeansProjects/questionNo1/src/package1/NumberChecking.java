
package package1;

/**
 *program about number checking
 * @author sabbir
 */
public class NumberChecking {
    
    void primeCheck(int num){
    
        int tester=0;
                
		if(num==1)
		{
			//System.out.println("Not Prime");
			tester=1;
		}
		if(num==2)
		{
			//System.out.println("Prime");
			tester=0;
		}
		if(num>2)
		{		
		for(int i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				//System.out.println("Not Prime");
			    tester=1;
				break;
			}
		}
		}
		if(tester==0) System.out.println("Prime");
		else System.out.println("Not Prime");

		//Scanner scan=new Scanner(System.in);
		
    }
    
        void armstrongCheck(int number){
            int sum=0,sum2=1,number2;
            int digit=1;
            int divider=10;
            
            number2=number;
         while(true){
             
             if(number2/divider !=0)
             {
                 digit++;
                 divider*=10;
             }
             
             else break;
         }
         //System.out.println(+digit);
         divider=10;
         
         for(int i=1;i<=digit+1;i++){
             int temp;//for finding digit
             temp=number2%divider;
             for(int j=1;j<=digit;j++)
             {
                 sum2=sum2*temp;
             }
             sum=sum+sum2;
             sum2=1;
             
             number2=number2/divider;
            // divider*=10;
         }
            if(sum==number) {
                System.out.println("Yes");
            }
            else
                System.out.println("No");
    }
}