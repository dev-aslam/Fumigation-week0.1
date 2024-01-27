/********************************************************************************
*            program to check whether a given number is prime or not            *
*********************************************************************************/

import java.util.Scanner;

public class Question16 {
    public static void main(String args []){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number\n");
        int num = sc.nextInt();
        boolean flag = true;
        if(num==1){
            System.out.println("1 is not considered as a prime number");
        }
        else{
            for(int i=2;i<=num/2;i++){
                if(num%i==0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                System.out.println("The number is Prime\n");
            }
            else{
                System.out.println("The number is not Prime\n");
            }
        }
        sc.close();
    }
}
