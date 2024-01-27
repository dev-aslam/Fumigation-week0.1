/*
 * Write a menu driven java program to do the basic mathematical operations such as addition, subtraction, multiplication and division 
*/

import java.util.Scanner;

class Calculator{
    Calculator(){};
    float addition(float num1, float num2){
        return num1+num2;
    }
    float subtraction(float num1,float num2){
        return num1-num2;
    }
    float multiplication(float num1,float num2){
        return num1*num2;
    }
    float division(float num1,float num2){
        return num1/num2;
    }
}

public class Question17 {
    public static void main(String args[]){
        
        Scanner sc = new Scanner(System.in);
        float num1,num2,result;
        int choice;
        Calculator calc = new Calculator();
        System.out.println("Enter 2 numbers");
        num1 = sc.nextInt();
        num2 = sc.nextInt();
        System.out.println("Choose the operation which you want to perform on these 2 numbers\n1. Addition\n2. Subtraction\n3. Multiplication \n4. Division");
        choice = sc.nextInt();
        result=0;
        switch (choice) {
            case 1:
                result = calc.addition(num1, num2);
                break;
            case 2:
                result = calc.subtraction(num1, num2);
                break;
            case 3:
                result = calc.multiplication(num1, num2);
                break;
            case 4:
                result = calc.division(num1, num2);
                break;
            default:
                System.out.println("Invalid Entry!");
                break;
        }
        System.out.println("The result is " + result);
        sc.close();
    }
}
