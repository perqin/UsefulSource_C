int AverageWithoutArithmetic(int x, int y) {
    return (x & y) + ((x ^ y) >> 1);
}
