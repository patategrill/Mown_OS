#include <stdio.h>

void kernel_main() {
    while (1) {
        char* video_memory = (char*) 0xb8000;

        char msg_bienvenue[] = "Welcome on MownOS!\n";

        int len = strlen(msg_bienvenue);

        for (int i = 0; i <= len; i += 2){
            video_memory[i] = msg_bienvenue[len];
        }

        for (int j = 1; j <=len; j += 2){
            video_memory[j] = 0x8;
        }
    }
}
