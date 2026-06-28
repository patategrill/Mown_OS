void kernel_main();

int main() {
    kernel_main();
}

void kernel_main() {
    char* video_memory = (char*) 0xb8000;

    char msg_bienvenue[] = "Welcome on MownOS!\n";
    
    int indice = 0;

    for (int i = 0; i <= 40; i += 2){
        video_memory[i] = msg_bienvenue[indice];
        indice = indice + 1;
    }

    for (int j = 1; j <= 40; j += 2){
        video_memory[j] = 0x7;
    }

    char tty[] = "MownOS >";
    indice = 0;

    for (int i = 0; i <= 16; i += 2){
        video_memory[i] = tty[indice];
        indice = indice + 1;
    }

    for (int j = 1; j <= 16; j += 2){
        video_memory[j] = 0x7;
    }
}
