/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package package2;

/**
 *
 * @author sabbir
 */
public class TestMainCircle {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       
        Circle c1= new Circle(5.00);
        System.out.print(c1.toString());
        System.out.print(+c1.radius);
        System.out.println(']');
        System.out.println("Area"+c1.getArea());
        System.out.println("Circumference"+c1.getCircumference());
        
        
        Circle c2= new Circle(6.00);
        System.out.print(c2.toString());
        System.out.println(+c2.radius);
        System.out.println(']');
        System.out.println("Area"+c2.getArea());
        System.out.println("Circumference"+c2.getCircumference());
        
        
        Circle c3= new Circle(8.00);
        System.out.print(c2.toString());
        System.out.println(+c2.radius);
        System.out.println(']');
        System.out.println("Area"+c2.getArea());
        System.out.println("Circumference"+c2.getCircumference());
        
    }
    
}
