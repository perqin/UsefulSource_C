int addWithoutArithmetic(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return addWithoutArithmetic(num1 ^ num2, (num1 & num2) << 1);
}

int SubWithoutArithmetic(int num1, int num2) {
    return addWithoutArithmetic(num1, addWithoutArithmetic(~num2, 1));
}
