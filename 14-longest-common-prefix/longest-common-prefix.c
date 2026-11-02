char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    int minLen = strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int len = strlen(strs[i]);
        if (len < minLen) minLen = len;
    }
    char* prefix = (char*)malloc(sizeof(char) * (minLen + 1));
    int index = 0;
    for (int i = 0; i < minLen; i++) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c) {
                prefix[index] = '\0';
                return prefix;
            }
        }
        prefix[index++] = c;
    }
    prefix[index] = '\0';
    return prefix;
}