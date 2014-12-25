void myStrcat(char firStr[], int firLength, char secStr[], int secLength) {
    int i;
    for (i = firLength; i < firLength + secLength; i++)
        firStr[i] = secStr[i - firLength];
    firStr[firLength + secLength] = '\0';
}
