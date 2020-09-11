int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int d1=0,d2=0;
    for(int i=0;i<arr_columns;i++){
        for(int j=0;j<arr_rows;j++){
            if(i==j)d1=d1+arr[i][j];                
            if(i+j==arr_columns-1 )d2=d2+arr[i][j];              
        }
    }
    
    return abs(d1-d2);

}
