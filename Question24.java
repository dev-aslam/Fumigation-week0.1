import java.util.Scanner;

class Area{
    Area(){}

    double circle(double radius){
        return 3.14159*radius*radius;
    }

    double square(double side){
        return side*side;
    }

    double rectangle(double length, double breadth){
        return length*breadth;
    }

    double triangle(double height, double base){
        return 0.5*height*base;
    }
}

class Myclass extends Area{
    int main(){
        Myclass obj = new Myclass();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your Choice \n1. Circle \n2. Sqaure \n3. Rectangle \n4. Triangle");
        int choice = sc.nextInt();
        switch (choice) {
            case 1:
                System.out.println("Enter the radius of the cirlce");
                int radius = sc.nextInt();
                System.out.println("The area of the circle is "+ obj.circle(radius));
                break;
            case 2:
                System.out.println("Enter the side of the Square");
                int side = sc.nextInt();
                System.out.println("The area of the Square is "+ obj.square(side));
                break;
            case 3:
                System.out.println("Enter the length and breadth of the square");
                int length = sc.nextInt();
                int breadth = sc.nextInt();
                System.out.println("The area of the rectangle is "+ obj.rectangle(length, breadth));
                break;
            case 4:
                System.out.println("Enter the base and height of the triangle");
                int height = sc.nextInt();
                int base = sc.nextInt();
                System.out.println("The area of the triangle is "+ obj.triangle(height,base));
                break;
        
            default:
                System.out.println("Invalid Entry!");
                break;
        }
        sc.close();
        return 0;
    }
}

public class Question24{
    public static void main(String[] args) {
        Myclass obj = new Myclass();
        obj.main();
    }
}