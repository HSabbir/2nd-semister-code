
package newpackage1;


public class Statistics {
    
     int sum_x(int []arr,int n)
     {
          int  sum1=0;
         for(int i=0;i<n;i++)
         {
             sum1=sum1+arr[i];
         }
         return sum1;
     }
     
     
     int sum_x2(int []arr,int n)
     {
          int  sum2=0;
         for(int i=0;i<n;i++)
         {
             sum2=sum2+(arr[i]*arr[i]);
         }
         return sum2;
     }
     
     double Mean_calculator(int x,int n)
     {
          double m=x;
          m/=n;
         return m;
     }
     
     double Sd_calculator(int p,int x,int n)
     {
         double sd=((p-(x*x)/n)/(n-1));
         return Math.sqrt(sd);
     }      
}
