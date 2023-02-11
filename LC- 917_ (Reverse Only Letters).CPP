class Solution {
public:
    string reverseOnlyLetters(string s) {
        int len= s.size();
        char safe;
   for(int i=0,j=len-1;i<j;){
            if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))&&((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))){
              safe=s[i];
              s[i]=s[j];
              s[j]=safe;
              i++;
              j--;
        }
        else 
            {
                if(!((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z')))
                i++;
                else if(!((s[j]>='a'&&s[j]<='z') || (s[j]>='A'&&s[j]<='Z')))
                j--;
                else
                {
                    i++;
                    j--;
                }
            }
        }
        return s;
   }
    
    
};
