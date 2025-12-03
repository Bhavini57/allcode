#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void happy(void);
void sad(void);
void romantic(void);
void chill(void);
void energetic(void);
void saveMood(char mood[]);
void showWeeklyReport(void);

// ------------------------ HAPPY ---------------------------------
void happy() 
{
    int choice;
    saveMood("Happy");

    char *quotes[3] = {
        "Happiness is the highest level of success.",
        "This is the beginning of loving yourself.",
        "You glow differently when you're actually happy."
    };

    char *songs[5] = {
        "Ilahi - Yeh Jawaani Hai Deewani",
        "Gallan Goodiyan - Dil Dhadakne Do",
        "Badtameez Dil - YJHD",
        "Dil Chahta Hai - Title Track",
        "Aaj Ki Raat - Don"
    };

    char youtubeLink[] = "https://youtube.com/playlist?list=PLtZIcYm1NcznNE6v-o5hT9u5zgPSYjg8s&si=ERUAd89hgs5hTHDS";
    char spotifyLink[] = "https://open.spotify.com/playlist/0CWZAQzmGX4T2yIDk5hjPG?si=fvPLMpD-QUCd0W34SgMDCw";

    printf("\n--------------------------\n");
    printf("       HAPPY PLAYLIST     \n");
    printf("--------------------------\n");

    int index = rand() % 3;
    printf("%s\n\n", quotes[index]);

    printf("Here are your songs:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, songs[i]);
    }

    printf("\nWhere do you want to play?\n");
    printf("1. YouTube\n2. Spotify\n3. Go Back\n");

    if (scanf("%d", &choice) != 1) {
        while (getchar() != '\n');
        return;
    }

    if (choice == 1) {
        char cmd[512];
        sprintf(cmd, "start \"\" \"%s\"", youtubeLink);
        system(cmd);
    } else if (choice == 2) {
        char cmd[512];
        sprintf(cmd, "start \"\" \"%s\"", spotifyLink);
        system(cmd);
    }
}

// ------------------------ SAD ---------------------------------
void sad() 
{
    int choice;
    saveMood("Sad");

    char *quotes[3] = {
        "Some days feel heavy, and thats okay.",
        "Even broken crayons still color.",
        "You're allowed to rest. Healing takes time."
    };

    char *songs[5] = {
        "Agar Tum Saath Ho - Tamasha",
        "Channa Mereya - ADHM",
        "Khairiyat - Chhichhore",
        "Judaai - Badlapur",
        "Zaroori Tha - Rahat Fateh Ali Khan"
    };

    char youtubeLink[] = "https://youtube.com/playlist?list=PLtZIcYm1NcznMiaieM8oFNXNznP26EH-L&si=3lfoN5rY4ZJTUlls";
    char spotifyLink[] = "https://open.spotify.com/playlist/0J4JiLz0Z2JbeWsBwF58wX?si=Wrlb7HqBTzy1fptfVNbRSA";

    printf("\n--------------------------\n");
    printf("        SAD PLAYLIST      \n");
    printf("--------------------------\n");

    int index = rand() % 3;
    printf("%s\n\n", quotes[index]);

    printf("Here are your songs:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, songs[i]);
    }

    printf("\nWhere do you want to play?\n");
    printf("1. YouTube\n2. Spotify\n3. Go Back\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1) {
        while (getchar() != '\n');
        return;
    }

    if (choice == 1) {
        char cmd[512];
        sprintf(cmd, "start \"\" \"%s\"", youtubeLink);
        system(cmd);
    } else if (choice == 2) {
        char cmd[512];
        sprintf(cmd, "start \"\" \"%s\"", spotifyLink);
        system(cmd);
    }
}

// ------------------------ ROMANTIC ---------------------------------
void romantic()
{
    int choice;
    saveMood("Romantic");

    char *quotes[3] = {
        "Your heart knows what feels like home.",
        "Some people feel like sunsets.",
        "Love looks good on you."
    };

    char *songs[5] = {
        "Raabta - Agent Vinod",
        "Samjhawan - HSKD",
        "Kesariya - Brahmastra",
        "Janam Janam - Dilwale",
        "Tum Mile - Tum Mile"
    };

    char youtubeLink[] = "https://youtube.com/playlist?list=PLtZIcYm1NczmISq9v7eM6twfFzSVAofFQ&si=MU7TQy-CrCHFswt7";
    char spotifyLink[] = "https://open.spotify.com/playlist/3cyH2mysKWkvjLHDjuG3CN?si=2NSHc1oiSDeb4acZFDvc2g";

    printf("\n--------------------------\n");
    printf("      ROMANTIC PLAYLIST   \n");
    printf("--------------------------\n");

    int index = rand() % 3;
    printf("%s\n\n", quotes[index]);

    printf("Here are your songs:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, songs[i]);
    }

    printf("\nWhere do you want to play?\n");
    printf("1. YouTube\n2. Spotify\n3. Go Back\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1) {
        while (getchar() != '\n');
        return;
    }

    if (choice == 1) {
        char cmd[512];
        sprintf(cmd, "start \"\" \"%s\"", youtubeLink);
        system(cmd);
    } else if (choice == 2) {
        char cmd[512];
        sprintf(cmd, "start \"\" \"%s\"", spotifyLink);
        system(cmd);
    }
}

// ------------------------ CHILL ---------------------------------
void chill()
{
    int choice;
    saveMood("Chill");

    char *quotes[3] = {
        "Breathe. Everything is figuring itself out.",
        "Slow moments matter too.",
        "Peace looks pretty on you."
    };

    char *songs[5] = {
        "Baarishein - Anuv Jain",
        "Kasoor - Prateek Kuhad",
        "Shayad - Love Aaj Kal",
        "Safar - Jab Harry Met Sejal",
        "Phir Le Aaya Dil - Arijit Singh"
    };

    char youtubeLink[] = "https://youtube.com/playlist?list=PLtZIcYm1NczmNkdUCaB_6sDcPndv9NTBc&si=xwNGB2mRHU9dLakB";
    char spotifyLink[] = "https://open.spotify.com/playlist/4jh0nrifRE4Ushs76VVdJa?si=fRMCl5oGTJWxJzptHgXPwg";

    printf("\n--------------------------\n");
    printf("        CHILL PLAYLIST    \n");
    printf("--------------------------\n");

    int index = rand() % 3;
    printf("%s\n\n", quotes[index]);

    printf("Here are your songs:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, songs[i]);
    }

    printf("\nWhere do you want to play?\n");
    printf("1. YouTube\n2. Spotify\n3. Go Back\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1) {
        while (getchar() != '\n');
        return;
    }

    if (choice == 1) {
        char cmd[512];
        sprintf(cmd, "start \"\" \"%s\"", youtubeLink);
        system(cmd);
    } else if (choice == 2) {
        char cmd[512];
        sprintf(cmd, "start \"\" \"%s\"", spotifyLink);
        system(cmd);
    }
}

// ------------------------ ENERGETIC ---------------------------------
void energetic()
{
    int choice;
    saveMood("Energetic");

    char *quotes[3] = {
        "You're unstoppable today.",
        "Energy flows where your focus goes.",
        "Shine like you mean it."
    };

    char *songs[5] = {
        "Zinda - Bhaag Milkha Bhaag",
        "Sultan Title Track - Sultan",
        "Brothers Anthem - Brothers",
        "Kar Har Maidaan Fateh - Sanju",
        "Lakshya - Lakshya"
    };

    char youtubeLink[] = "https://youtube.com/playlist?list=PLtZIcYm1Nczkm3prSkrDFOEVcIFw4DQ0W&si=AImS9CvP0b8TRtKeB";
    char spotifyLink[] = "https://open.spotify.com/playlist/5aSdSISIPmOAcL8G421WXr?si=HS6eM7w4QaGci29qpagvKg";

    printf("\n--------------------------\n");
    printf("     ENERGETIC PLAYLIST   \n");
    printf("--------------------------\n");

    int index = rand() % 3;
    printf("%s\n\n", quotes[index]);

    printf("Here are your songs:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, songs[i]);
    }

    printf("\nWhere do you want to play?\n");
    printf("1. YouTube\n2. Spotify\n3. Go Back\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1) {
        while (getchar() != '\n');
        return;
    }

    if (choice == 1) {
        char cmd[512];
        sprintf(cmd, "start \"\" \"%s\"", youtubeLink);
        system(cmd);
    } else if (choice == 2) {
        char cmd[512];
        sprintf(cmd, "start \"\" \"%s\"", spotifyLink);
        system(cmd);
    }
}

// ------------------------ SAVE MOOD ---------------------------------
void saveMood(char mood[])
{
    FILE *fp = fopen("tracker.txt", "a");

    if (fp == NULL) {
        printf("Error opening tracker file!\n");
        return;
    }

    fprintf(fp, "%s\n", mood);
    fclose(fp);
}

// ------------------------ WEEKLY REPORT ---------------------------------
void showWeeklyReport()
{
    FILE *fp = fopen("tracker.txt", "r");
    if (fp == NULL) {
        printf("No mood history found!\n");
        return;
    }

    int happy = 0, sad = 0, romantic = 0, energetic = 0, chill = 0;
    char mood[50];

    while (fgets(mood, sizeof(mood), fp)) {
        mood[strcspn(mood, "\n")] = 0;

        if (strcmp(mood, "Happy") == 0) 
        happy++;
        else if (strcmp(mood, "Sad") == 0) 
        sad++;
        else if (strcmp(mood, "Romantic") == 0) 
        romantic++;
        else if (strcmp(mood, "Energetic") == 0) 
        energetic++;
        else if (strcmp(mood, "Chill") == 0) 
        chill++;
    }

    fclose(fp);

    printf("\n------------------------------\n");
    printf("         WEEKLY REPORT\n");
    printf("------------------------------\n\n");

    printf("Happy:      %d\n", happy);
    printf("Sad:        %d\n", sad);
    printf("Romantic:   %d\n", romantic);
    printf("Energetic:  %d\n", energetic);
    printf("Chill:      %d\n", chill);

    int max = happy;
    char most[20] = "Happy";

    if (sad > max) 
    { 
        max = sad; strcpy(most, "Sad"); 
    }
    if (romantic > max) 
    {
        max = romantic; strcpy(most, "Romantic");
    }
    if (energetic > max) 
    {  
        max = energetic; strcpy(most, "Energetic"); 
    }
    if (chill > max) 
    { 
        max = chill; strcpy(most, "Chill"); 
    }

    printf("\nMost selected mood: %s\n\n", most);
}

// ------------------------ MAIN ---------------------------------
int main()
{
    srand((unsigned int)time(NULL));
    int choice;

    while (1) {
        printf("\n--------- MOODY PLAYLIST ---------\n"
               "1. Happy\n"
               "2. Sad\n"
               "3. Romantic\n"
               "4. Chill\n"
               "5. Energetic\n"
               "6. Weekly Report\n"
               "7. Exit\n");

        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            continue;
        }

        switch (choice)
        {
            case 1: happy(); break;
            case 2: sad(); break;
            case 3: romantic(); break;
            case 4: chill(); break;
            case 5: energetic(); break;
            case 6: showWeeklyReport(); break;
            case 7:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Choose 1-7.\n");
        }
    }

    return 0;
}
