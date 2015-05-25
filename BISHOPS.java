import java.io.*;
import java.util.*;
import java.math.*;
import java.lang.*;
class BISHOPS{
 public static void main(String args[]) throws IOException{
 BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
 Scanner x=new Scanner(System.in);
 while(x.hasNextBigInteger())
 {
   BigInteger b=x.nextBigInteger();
   if(b.equals(BigInteger.ONE))
       System.out.println("1");
   else if(b.equals(BigInteger.valueOf(2)))
       System.out.println("2");
   else if(b.equals(BigInteger.valueOf(0)))
       System.out.println("0");
   else
       System.out.println(BigInteger.valueOf(2).add((b.subtract(BigInteger.valueOf(2)).multiply(BigInteger.valueOf(2)))));
 }
 }
}
