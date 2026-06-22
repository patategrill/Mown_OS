#include <stdio.h>

void kernel_main() {
    while (1) {
        char* video_memory = (char*) 0xb8000;
        video_memory[0] = "W";
        video_memory[1] = 0x8;
        video_memory[2] = "e";
        video_memory[3] = 0x8;
        video_memory[4] = "l";
        video_memory[5] = 0x8;
        video_memory[6] = "c";
        video_memory[7] = 0x8;
        video_memory[8] = "m";
        video_memory[9] = 0x8;
        video_memory[10] = "e";
        video_memory[11] = 0x8;
        video_memory[12] = " ";
        video_memory[13] = 0x8;
        video_memory[14] = "o";
        video_memory[15] = 0x8;
        video_memory[16] = "n";
        video_memory[17] = 0x8;
        video_memory[18] = " ";
        video_memory[19] = 0x8;
        video_memory[20] = "M";
        video_memory[21] = 0x8;
        video_memory[22] = "o";
        video_memory[23] = 0x8;
        video_memory[24] = "w";
        video_memory[25] = 0x8;
        video_memory[26] = "n";
        video_memory[27] = 0x8;
        video_memory[28] = "O";
        video_memory[29] = 0x8;
        video_memory[30] = "S";
        video_memory[31] = 0x8;
        video_memory[32] = "!";
        video_memory[33] = 0x8;
    }
}
