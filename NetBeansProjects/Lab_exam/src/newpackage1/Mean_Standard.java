


package newpackage1;

import java.util.Scanner; 

public class Mean_Standard {


    public static void main(String[] args) {
        
       Scanner scan=new Scanner(System.in);
     
      int n;
       n=scan.nextInt();  
      
      int []arr;
      arr=new int[n];
      
       
        
        for(int i=0;i<n;i++)
        {
            int input;
            input=scan.nextInt();
            arr[i]=input;
            
        }
       
        Statistics s= new  Statistics();
       
        System.out.println("Mean: "+s.Mean_calculator(s.sum_x(arr,n),n));
        System.out.println("Standard Daviation: "+s.Sd_calculator(s.sum_x2(arr,n),s.sum_x(arr,n),n));
    }
    
}
