
package mainPackage;

import association1.Account;

public class BangladeshBank {

    
    public static void main(String[] args) {
       
        Account myAccount = new Account ("Sabbir","1028373",6363363 , "18888");
        myAccount.printAllInfo();
        System.out.println(myAccount.getAccountHolder().getNid());
        
        Account sAccount = new Account ("Sabbir Hossain","1028377",6363344 , "18898");
        sAccount.printAllInfo();
        
    }
    
}
