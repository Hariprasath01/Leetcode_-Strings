void reverseString(char* s, int sSize){
      char temp;
      int start=0;
      int end=sSize-1;
      for(;start<end;start++,end--){
               temp=s[start];
               s[start]=s[end];
               s[end]=temp;
      }
     return s; 
}
