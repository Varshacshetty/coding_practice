class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int count1=word1.length();
        int count2=word2.length();
        int count=count1+count2;
        string word="";
        int i=0,j=0;
        while(i<count1||j<count2)
        {
            if(i<count1){
                word+=word1[i++];
            }
            if(j<count2){
                word+=word2[j++];
            }
             
        }
        
    return word;   
    }     
    
};
