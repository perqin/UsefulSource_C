void myStrcpy(char firstStr[], int firstStrLength,
              char secondStr[], int secondStrLength) {
    int i;
    for (i = 0; i < secondStrLength; i++)
        firstStr[i] = secondStr[i];
    firstStr[secondStrLength] = '\0';
}
