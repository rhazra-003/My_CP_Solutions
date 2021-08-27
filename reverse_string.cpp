//User function Template for C++

string reverseWord(string str){
    
   string rs="";
   int j=0;
   for(int i=str.length()-1;i>=0;i--)
   {
       rs += str[i];
   }
   return rs;
}
