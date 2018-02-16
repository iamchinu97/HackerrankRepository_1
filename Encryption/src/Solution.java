import java.util.Scanner;

public class Solution {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
      //  System.out.println("Enter the String:");
        String  s=sc.next();
        double col=Math.ceil(Math.sqrt(s.length()));
        double row=Math.floor(Math.sqrt(s.length()));
        if((row*col)<s.length())
        {
            row = Math.ceil(Math.sqrt(s.length()));
        }
       // System.out.println("Row="+row+"\t"+"col="+col);
        char[][]arr=new char[100][100];
        int k=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(k<s.length()) {
                    arr[i][j] = s.charAt(k);
                    k++;
                }
                else {
                    arr[i][j] = 0;
                }
            }
        }
        StringBuilder temp=new StringBuilder();
        for(int j=0;j<col;j++)
        {
            for(int i=0;i<row;i++)
            {
                if(arr[i][j]!=0) {
                    temp = temp.append(arr[i][j]);
                }
            }
            temp=temp.append(" ");
        }
        System.out.println(temp);
    }
}
