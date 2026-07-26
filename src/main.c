void kernel();

void kernel() {
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

    for (int i = 160; i <= 176; i += 2){
        video_memory[i] = tty[indice];
        indice = indice + 1;
    }

    for (int j = 160; j <= 176; j += 2){
        video_memory[j] = 0x7;
    }
}
