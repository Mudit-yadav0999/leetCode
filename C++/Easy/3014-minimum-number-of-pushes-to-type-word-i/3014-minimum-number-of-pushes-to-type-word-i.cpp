class Solution {
public:
    int minimumPushes(string word) {
   
   int ans=0;
  int push=1;
   for(int i=0;i<word.length();i++){
    ans +=push;
    if((i+1)%8==0){
        push++;
    }
   } 
   return ans;

    }
};