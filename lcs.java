class Solution {
    public int longestCommonSubsequence(String text1, String text2) {
        //Lets gets strated!
        //First we will check the two strings they are empty or not
        if(text1==null || text2==null || text1.length()==0 || text2.length()==0)
            return 0;
        //now we are taking the length of the strings and change them to char array!!
        char[] chr1=text1.toCharArray();
        char[] chr2=text2.toCharArray();
        int m = text1.length();
        int n = text2.length();
         // now we will check the both strings strating from beginning to last
        int i,j;
        int[][] lcs =new int[m+1][n+1];
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                if(chr1[i-1]==chr2[j-1]){
                    lcs[i][j]= 1 + lcs[i-1][j-1];
                }else{
                    lcs[i][j]=Math.max(lcs[i-1][j],lcs[i][j-1]);
                }
            }
        }
        
        return lcs[m][n];
    
  }
}




