
class GfG
{
    //Function to locate the occurrence of the string x in the string s.
    int strstr(String s, String x)
    {
       // Your code here
       int l1 = s.length();
       int l2 = x.length();
       for(int i =0; i<= l1-l2 ; i++){
           if(s.substring(i,i+l2).equals(x))return i;
       }
       return -1;
    }
}
