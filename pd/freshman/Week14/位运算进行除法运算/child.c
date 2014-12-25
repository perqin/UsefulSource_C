int addWithoutArithmetic(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return addWithoutArithmetic(num1 ^ num2, (num1 & num2) << 1);
}

int subWithoutArithmetic(int num1, int num2) {
    return addWithoutArithmetic(num1, addWithoutArithmetic(~num2, 1));
}

int DivWithoutArithmetic(int num1, int num2) {
    int neg = 0, result = 0;
    if (((num1 >> 31) & 1) ^ ((num2 >> 31) & 1))
        neg = 1;
    if (num1 < 0)
        num1 = addWithoutArithmetic(~num1, 1);
    if (num2 < 0)
        num2 = addWithoutArithmetic(~num2, 1);
    while (num1 >= num2) {
        num1 = subWithoutArithmetic(num1, num2);
        result = addWithoutArithmetic(result, 1);
    }
    if (neg)
        return -result;
    else
        return result;
}
