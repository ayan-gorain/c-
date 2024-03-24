
//User function Template for Java
class Solution 
{ 
    int findLength(String s) 
    { 
        // code here
        String[] words=s.split(" ");
        return words[words.length-1].length();
    }
}