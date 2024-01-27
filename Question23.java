import java.util.Scanner;

class Array{
    int num,arr[][];
    Array(int num){
        this.num = num;
        this.arr = new int [num][num];
    }
    
    void getArray(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the array values: ");
        for(int i=0;i<num;i++){
            for(int j=0;j<num;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        sc.close();
    }

    void displayArray(){
        System.out.println("The array elements are:");
        for(int i=0;i<num;i++){
            for(int j=0;j<num;j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println("");
        }
    }
}


public class Question23 {
    public static void main(String args []){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int num = sc.nextInt();
        Array arr = new Array(num);
        arr.getArray();
        arr.displayArray();
        sc.close();
    }
}
