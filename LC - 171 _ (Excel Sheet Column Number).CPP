class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result=0;
        int dig;
        for(char s:columnTitle){
            dig= s-'A'+1;
            result=result*26+dig;
        }
        return result;
    }
};
