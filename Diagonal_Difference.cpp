int diagonalDifference(vector<vector<int>> arr) {
    int s1=0,s2=0;
    int n= arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                s1 +=arr[i][j];
            }
            if(i+j==n-1){
                s2+=arr[i][j];
            }
        }
    }
    return abs(s1-s2);

}
