#include <stdio.h>
#include <string.h>
#include <process.h>
#include <windows.h>

#include "zelda.h"

void blink()
{
    while (1){
        system("color 02");
        Sleep(500);
        system("color 0A");
    }
}

void play()
{
    while (1)
    {
        songOfTime();
    }
}

int main()
{
    char banner[] = "                                    /@                                                                                 \n"
                    "                    __        __   /\\/                                                                                \n"
                    "                   /==\\      /  \\_/\\/                                                                               \n"
                    "                 /======\\    \\/\\__ \\__                                                                             \n"
                    "                /==/\\  /\\==\\    /\\_|__ \\                                                                          \n"
                    "             /==/    ||    \\=\\ / / / /_/                                                                             \n"
                    "           /=/    /\\ || /\\   \\=\\/ /                                                                                \n"
                    "         /===/   /   \\||/   \\   \\===\\                                                                              \n"
                    "       /===/   /_________________ \\===\\                                                                              \n"
                    "    /====/   / |                /  \\====\\                                                                            \n"
                    "  /====/   /   |  _________    /  \\   \\===\\    THE LEGEND OF                                                        \n"
                    "  /==/   /     | /   /  \\ / / /  __________\\_____      ______       ___                                              \n"
                    " |===| /       |/   /____/ / /   \\   _____ |\\   /      \\   _ \\      \\  \\                                         \n"
                    " \\==\\              /\\   / / /     | |  /= \\| | |        | | \\ \\     / _ \\                                        \n"
                    "  \\===\\__    \\    /  \\ / / /   /  | | /===/  | |        | |  \\ \\   / / \\ \\                                     \n"
                    "    \\==\\ \\    \\\\ /____/   /_\\ //  | |_____/| | |        | |   | | / /___\\ \\                                    \n"
                    "    \\===\\ \\   \\\\\\\\\\\\\\/   /////// /|  _____ | | |        | |   | | |  ___  |                                  \n"
                    "      \\==\\/     \\\\\\\\/ / //////   \\| |/==/ \\| | |        | |   | | | /   \\ |                                   \n"
                    "      \\==\\     _ \\\\/ / /////    _ | |==/     | |        | |  / /  | |   | |                                        \n"
                    "        \\==\\  / \\ / / ///      /|\\| |_____/| | |_____/| | |_/ /   | |   | |                                        \n"
                    "        \\==\\ /   / / /________/ |/_________|/_________|/_____/   /___\\ /___\\                                       \n"
                    "          \\==\\  /               | /==/                                                                               \n"
                    "          \\=\\  /________________|/=/    OCARINA OF TIME                                                              \n"
                    "            \\==\\     _____     /==/     [Song of Time]                                                               \n"
                    "           / \\===\\   \\   /   /===/      [Dev: Raymag]                                                               \n"
                    "          / / /\\===\\  \\_/  /===/                                                                                    \n"
                    "         / / /   \\====\\ /====/                                                                                       \n"
                    "        / / /      \\===|===/                                                                                          \n"
                    "        |/_/         \\===/                                                                                            ";

    system("cls");
    system("color 02");
    _beginthread(play, 0, NULL);
    _beginthread(blink, 0, NULL);
    for (int i = 0; i <= strlen(banner); i++){
        Sleep(1);
        printf("%c", banner[i]);
    }
    getchar();
}