char* checkAddress(int *p1, int *p2) {
    if (p1 == p2)
        return "They are pointed to same address";
    else
        return "They are pointed to different address";
}

char* checkExistence(int *p) {
    if (!p)
        return "It is null";
    else
        return "It is not null";
}
