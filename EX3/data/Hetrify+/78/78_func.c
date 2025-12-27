int hex_key(const char* num) {
    const char key[] = "2357BD";
    int out = 0;
    
    // Manual strlen for num
    int num_len = 0;
    while (num[num_len] != '\0') num_len++;
    
    // Manual strlen for key
    int key_len = 0;
    while (key[key_len] != '\0') key_len++;
    
    // Check each character in num
    for (int i = 0; i < num_len; i++) {
        // Manual find (linear search)
        int found = 0;
        for (int j = 0; j < key_len; j++) {
            if (num[i] == key[j]) {
                found = 1;
                break;
            }
        }
        if (found) out++;
    }
    
    return out;
}
