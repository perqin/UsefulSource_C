int AddWithoutArithmetic(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return AddWithoutArithmetic(num1 ^ num2, (num1 & num2) << 1);
}

int MulWithoutArithmetic(int num1, int num2) {
    int i, result = 0, neg = 0;
    if (((num1 >> 31) & 1) ^ ((num2 >> 31) & 1))
        neg = 1;
    if (num1 < 0)
        num1 = AddWithoutArithmetic(~num1, 1);
    if (num2 < 0)
        num2 = AddWithoutArithmetic(~num2, 1);
    for (i = 0; i < 32; i++)
        if ((num2 >> i) & 1)
            result += num1 << i;
    if (neg)
        return -result;
    else
        return result;
}
