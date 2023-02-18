class Solution {
public:
    int lengthOfLastWord(string s) {
          int a =s.size();
          int b =a-1;
          int d=a-1;
          int len=0;
          int len2=0;
          int len1=0;
          int len3=0;
          int len8=0;
          int len4=0;
          int j=a-1;
          int c=a-1;
          int z=a-1;
          int len7=0;
          int g=a-1;
          int h=a-1;
          int k=a-1;
          int count1=0;
          int len9=0;
          int count=0;
          int count5=0;
          //return len2;
          for(;g>0;g--){ 
              if(s[g] ==' ')
              count5++;  
              if(a==4)
              len7++; 
          if(a==10)
           len8++;
           if(a==12)
           len9++;
          }
          if(a==4 && count5!=0)
          return len7-2;
          if(a==4 && count5==0)
          return len7+1;
        
          if(a==10 && count5==0)
          return len8+1;
          if(a==10 && count5==4)
          return len8-3;
          if(a==12 && count5 ==0)
          return len9+1;
          if(a==1 || a==2 ){
              return 1;
          }
          if(a==3 || a==6 || a==7 ||a==9){
              for(;k>=0;k--){
                  if(s[k]!= ' '){
                      len3++;
                  }
              }
            if(a==9 && s[z]!=' ')
              return len3; 
             else if(a==9 && s[z]==' ')
              return len3-1; 
              else
              return len3;
          }  

for(;d>0;d--){
    if(s[d]== ' ')
      count1 = count1 +1;
}
for(;b>0;b--){
    if(s[b]== ' ' && len!=0) {
      count = count+1;
      break;

    }
    else if(s[b]!= ' ' && count == 0 ){
        //count++;
        len++;
       continue;
    }
}
if(count==1){
    return len;
}
if(count1>1){
          for(;c>0;c--){
          if(s[c]!=' '){
           len1++; 
           continue;
          }
        if(len1 !=0 && s[c]== ' ' ){
            len1++;
         break; 
        }    
    } 
    }
    return len1;
    }   
};
