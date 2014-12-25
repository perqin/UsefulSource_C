int sum_of_letter(char *str) {
    int total = 0, i = 0;
    while (str[i++])
        if ((str[i - 1] > 64 && str[i - 1] < 91) ||
            (str[i - 1] > 96 && str[i - 1] < 123))
            total++;
    return total;
}

int sum_of_space(char *str) {
    int total = 0, i = 0;
    while (str[i++])
        if (str[i - 1] == ' ')
            total++;
    return total;
}

int sum_of_digit(char *str) {
    int total = 0, i = 0;
    while (str[i++])
        if (str[i - 1] > 47 && str[i - 1] < 58)
            total++;
    return total;
}

int sum_of_other(char *str) {
    int total = 0, i = 0;
    while (str[i++])
        if ((str[i - 1] < 48
            || (str[i - 1] > 57 && str[i - 1] < 65)
            || (str[i - 1] > 90 && str[i - 1] < 97)
            || str[i - 1] > 122) && str[i - 1] != ' ')
            total++;
    return total;
}
