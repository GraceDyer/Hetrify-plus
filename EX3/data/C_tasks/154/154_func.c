int my_strlen(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

char* my_strstr(const char* haystack, const char* needle) {
    int haystack_len = my_strlen(haystack);
    int needle_len = my_strlen(needle);
    
    if (needle_len == 0) return (char*)haystack;
    
    for (int i = 0; i <= haystack_len - needle_len; i++) {
        int j;
        for (j = 0; j < needle_len; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == needle_len) {
            return (char*)(haystack + i);
        }
    }
    return 0;
}

int cycpattern_check(const char* a, const char* b) {
    int b_len = my_strlen(b);
    
    if (b_len == 0) return 1;
    
    char rotate[1000];
    
    for (int i = 0; i < b_len; i++) {
        int pos = 0;
        
        for (int j = i; j < b_len; j++) {
            rotate[pos++] = b[j];
        }
        
        for (int j = 0; j < i; j++) {
            rotate[pos++] = b[j];
        }
        
        rotate[pos] = '\0';
        
        if (my_strstr(a, rotate) != 0) return 1;
    }
    return 0;
}
