class Solution {
public:
     bool isVowel(char c){
         return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {

        int i=0,j=0;
        int n = s.size();

        int maxLen = 0;
        int count =0;

        while(j<n){

            if(isVowel(s[j])){
                count++;
            }
             if(j-i+1 == k){ 
                maxLen = max(maxLen,count);

                if(isVowel(s[i]))
                    count--;
                i++;
            }
            j++;   
        }
        return maxLen;
    }
};