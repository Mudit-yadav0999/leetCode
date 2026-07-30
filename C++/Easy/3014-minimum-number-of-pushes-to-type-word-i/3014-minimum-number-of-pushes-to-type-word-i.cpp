class Solution {
public:
    int minimumPushes(string word) {
   int n=word.length();
   int ans=0;
  int push=1;
   for(int i=0;i<n;i++){
    ans +=push;
    if((i+1)%8==0){
        push++;
    }
   } 
   return ans;

    }
};