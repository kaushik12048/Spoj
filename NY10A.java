import java.io.*;
class NY10A
{
public static void main(String args[]) throws IOException
{
 BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

 int t,f=1,y;
 t=Integer.parseInt(br.readLine());
 while(t--!=0){
 int i,x,ttt=0,tth=0,tht=0,thh=0,htt=0,hth=0,hht=0,hhh=0;
 y=Integer.parseInt(br.readLine());
 String s,p;
 s=br.readLine();
 String t1="TTT",t2="TTH",t3="THT",t4="THH",t5="HTT",t6="HTH",t7="HHT";
 for(i=0;i<s.length()-2;i++)
 {
     p=s.substring(i,i+3);
     if(p.equals(t1))
        ttt++;
     else if(p.equals(t2))
        tth++;
     else if(p.equals(t3))
        tht++;
     else if(p.equals(t4))
        thh++;
     else if(p.equals(t5))
        htt++;
     else if(p.equals(t6))
        hth++;
     else if(p.equals(t7))
        hht++;
     else
        hhh++;
   // System.out.println(p);
  }
  System.out.println(f+" "+ttt+" "+tth+" "+tht+" "+thh+" "+htt+" "+hth+" "+hht+" "+hhh);
  f++;
  }
 }
}
