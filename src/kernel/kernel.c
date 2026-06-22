#include <stdio.h>

void kernel_main() {
    while (1) {
        char* video_memory = (char*) 0xb8000;

        char string[] = "Welcome on MownOS!\n";

        for (int i = 0; i >= 33; i++){
            video_memory[i] = "W";
            video_memory[i] = 0x8;
            video_memory[i] = "e";
            video_memory[i] = 0x8;
            video_memory[i] = "l";
            video_memory[i] = 0x8;
            video_memory[i] = "c";
            video_memory[i] = 0x8;
            video_memory[i] = "m";
            video_memory[i] = 0x8;
            video_memory[i] = "e";
            video_memory[i] = 0x8;
            video_memory[i] = " ";
            video_memory[i] = 0x8;
            video_memory[i] = "o";
            video_memory[i] = 0x8;
            video_memory[i] = "n";
            video_memory[i] = 0x8;
            video_memory[i] = " ";
            video_memory[i] = 0x8;
            video_memory[i] = "M";
            video_memory[i] = 0x8;
            video_memory[i] = "o";
            video_memory[i] = 0x8;
            video_memory[i] = "w";
            video_memory[i] = 0x8;
            video_memory[i] = "n";
            video_memory[i] = 0x8;
            video_memory[i] = "O";
            video_memory[i] = 0x8;
            video_memory[i] = "S";
            video_memory[i] = 0x8;
            video_memory[i] = "!";
            video_memory[i] = 0x8;
        }
    }
}
