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
public class Circle {
    
    double radius,area,circumference;
 
    double pi=3.14;
    Circle(){
        this.radius=0.0;
    }
    Circle(double value){
        this.radius=value;
    }

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }
  
    public String toString(){
        String f;
        f="Cricle [radious = ";
        return f ;
    }

    public double getArea() {
        area=pi*radius*radius;
        return area;
    }

    public double getCircumference() {
        circumference=2*pi*radius;
        return circumference;
    }

    
}
