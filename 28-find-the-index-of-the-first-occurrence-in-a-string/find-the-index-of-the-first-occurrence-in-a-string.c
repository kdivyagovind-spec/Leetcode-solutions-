int strStr(char* haystack, char* needle) {
    int hl = strlen(haystack);
    int nl = strlen(needle);
    if(nl > hl){
        return -1;
    }
    int i=0, j=0, count =0;
    int flag;
    while(needle[j] != '\0' && haystack[i] !='\0'){
        if(haystack[i] == needle[j]){
            flag = i;
            i++;
            j++;
            count++;
            if(count == nl){
                return flag - count +1;
            }
        }
        else{
            if(count > 0){
                i = i - count +1;
            } 
            else{
                i++;
            }
            j = 0;
            flag = -1;
            count = 0;
        }
    }
    return -1;
}