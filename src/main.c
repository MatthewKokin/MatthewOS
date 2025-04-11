void _start() {
    char *video = (char *)0xb8000;
    video[0] = 'X';
    video[1] = 0x0E; // Yellow on black
    while (1);
}
