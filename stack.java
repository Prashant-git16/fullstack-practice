import java.util.Scanner;

public class stack {
    public static void main(String args[]){
        int stack[]=new int[4];
        int top=-1;
        Scanner Scan= new Scanner(System.in);
        for (int i=0;i<4;i++){
            stack[++top]=Scan.nextInt();
        }
        for(int i=0;i<4;i++){
            System.out.println(stack[top--]);
        }
        //return 0;
    }
    
}
