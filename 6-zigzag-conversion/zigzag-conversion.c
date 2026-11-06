char* convert(char* s, int numRows) {
    int n = strlen(s) ;
    char *ans = malloc((n + 1)*sizeof(char)) ;
    *ans = '\0' ;
    char *temp = calloc(2,sizeof(char)) ;
    if(numRows == 1 || numRows == n){
        for(int i = 0 ; i < n ; i++){
            *temp = *(s + i) ;
            strcat(ans,temp) ;
        }
        return ans ;
    }
    for(int j = 0 ; j < numRows ; j++){
        int i = 0 ;
        while(i < n){
        if((i - j)%(2*numRows - 2) == 0 || (i + j)%(2*numRows - 2) == 0){
            *temp = *(s + i) ;
            strcat(ans,temp) ;
        }
        i++ ;
    }
    }
    return ans ;
}