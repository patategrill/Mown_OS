#include <stdio.h>

void kernel_main() {
    while (1) {
        char* video_memory = (char*) 0xb8000;

        char msg_bienvenue[] = "Welcome on MownOS!\n";

        int indice = 0;

        for (int i = 0; i <= 36; i += 2){
            video_memory[i] = msg_bienvenue[indice];
            indice = indice + 1;
        }

        for (int j = 1; j <= 36; j += 2){
            video_memory[j] = 0x7;
        }
    }
}
