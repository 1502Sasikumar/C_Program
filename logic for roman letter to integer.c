int romanToInt(char* s) {
    int res = 0;
    int prev = 0;
    int i;
    int value;

    for (i = strlen(s) - 1; i >= 0; i--) {
        switch (s[i]) {
            case 'I': value = 1; break;
            case 'V': value = 5; break;
            case 'X': value = 10; break;
            case 'L': value = 50; break;
            case 'C': value = 100; break;
            case 'D': value = 500; break;
            case 'M': value = 1000; break;
        }

        if (value < prev)
            res -= value;
        else
            res += value;

        prev = value;
    }

    return res;
}
