import java.io.*;
import java.math.*;
class spoj{
 public static void main(String args[]) throws IOException{
 BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
 String x;
 while(true){
 x=br.readLine();
 if(x.equals("*"))
    break;
 String st[]=x.split(" ");
 int i,j;
char c='?';
 //for(i=0;i<st.length;i++)
  //  System.out.println(st[i]);
 for(i=0;i<st.length;i++){
  if(st[i].length()==0)
    continue;
  if(st[i].charAt(0)==0)
     continue;
  else{
     c=st[i].charAt(0);
     break;
  }
  }
 if(c=='?')
    continue;
// System.out.println(c+" "+i);
 int flag=0;
 for(j=i+1;j<st.length;j++){
   if(st[i].length()==0)
     continue;
   if(st[i].charAt(0)==' ')
     continue;
 //  System.out.println(Math.abs((int)(st[j].charAt(0))-(int)(c)));
   if(st[j].charAt(0)!=c && Math.abs((int)(st[j].charAt(0))-(int)(c))!=32){
       flag=1;
       break; 
   }
 }
 if(flag==0)
    System.out.println("Y");
 else
    System.out.println("N");
 }
}
}
