#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define BUFFER_SIZE 512
//buf var create krr dega jisme 512 char ka tempory store kr sake ge
struct Song {
    char name[100];
    char artist[50];
    char mood[20];
    char youtubeLink[200];
    char spotifyLink[200];
    char localPath[200];
};
//hrr song ke 6 details store karega song ke ander

// songs array me store kiye gaye hain
struct Song songs[100] = {
    {"Gallan Goodiyan", "Dil Dhadakne Do", "happy", "https://youtube.com/...", "https://spotify.com/...", ""},
    {"Badtameez Dil", "YJHD", "happy", "https://youtube.com/...", "https://spotify.com/...", ""},
    {"Channa Mereya", "Arijit Singh", "sad", "https://youtube.com/...", "https://spotify.com/...", ""},
    {"Tujhe Kitna Chahne Lage", "Arijit Singh", "sad", "https://youtube.com/...", "https://spotify.com/...", ""},
    {"Kala Chashma", "Baar Baar Dekho", "party", "https://youtube.com/...", "https://spotify.com/...", ""},
    {"Kar Gayi Chull", "Kapoor & Sons", "party", "https://youtube.com/...", "https://spotify.com/...", ""},
    // will add more songs
};
int totalSongs = 6;


static void safe_readline(char *buf, size_t size) {
    if (fgets(buf, (int)size, stdin) == NULL) { buf[0]='\0'; return; }
    size_t len = strlen(buf);
    if (len>0 && buf[len-1]=='\n') buf[len-1]='\0';
}
//ek func banye ge jis se secure way me line input + error handle krr sake 

void showMenu() {
    printf("\nChoose mood:\n1.Happy 2.Sad 3.Party 4.Add Song 5.Exit\nEnter choice: ");
}
// mood menu


// Open link os ke according code run hoga  , system(cmd) code will run
void open_link_if_valid(const char *link) {
    if (!link || strlen(link)==0) { printf("No link\n"); return; }
#ifdef _WIN32
    char cmd[BUFFER_SIZE]; snprintf(cmd,sizeof(cmd),"start \"\" \"%s\"",link);
#elif __APPLE__
    char cmd[BUFFER_SIZE]; snprintf(cmd,sizeof(cmd),"open \"%s\"",link);
#else
    char cmd[BUFFER_SIZE]; snprintf(cmd,sizeof(cmd),"xdg-open \"%s\"",link);
#endif
    system(cmd);
}

// Recommend random song
void recommendSong(const char mood[]) {
    struct Song moodSongs[100]; int count=0;
    for(int i=0;i<totalSongs;i++) if(strcmp(songs[i].mood,mood)==0) moodSongs[count++]=songs[i];
    if(count==0){ printf("No songs for this mood.\n"); return; }
    struct Song s = moodSongs[rand()%count];
    printf("\nRecommended: %s by %s\n", s.name, s.artist);
    char line[BUFFER_SIZE];
    printf("1.YouTube 2.Spotify: "); safe_readline(line,sizeof(line));
    int p=atoi(line); if(p==2 && strlen(s.spotifyLink)>0) open_link_if_valid(s.spotifyLink); 
    else open_link_if_valid(s.youtubeLink);
}

// Add new song 100 allow h 
void addSong() {
    if(totalSongs>=100){ printf("Song limit reached.\n"); return; }
    struct Song ns; memset(&ns,0,sizeof(ns)); char buf[BUFFER_SIZE];
    printf("Song name: "); safe_readline(buf,sizeof(buf)); strncpy(ns.name,buf,sizeof(ns.name)-1);
    printf("Artist: "); safe_readline(buf,sizeof(buf)); strncpy(ns.artist,buf,sizeof(ns.artist)-1);
    printf("Mood: "); safe_readline(buf,sizeof(buf)); strncpy(ns.mood,buf,sizeof(ns.mood)-1);
    printf("YouTube link: "); safe_readline(buf,sizeof(buf)); strncpy(ns.youtubeLink,buf,sizeof(ns.youtubeLink)-1);
    printf("Spotify link: "); safe_readline(buf,sizeof(buf)); strncpy(ns.spotifyLink,buf,sizeof(ns.spotifyLink)-1);
    songs[totalSongs++]=ns;
    printf("Song added.\n");
}

// Main
int main() {
    srand((unsigned)time(NULL));
    char line[BUFFER_SIZE];
    while(1){
        showMenu(); safe_readline(line,sizeof(line)); int choice=atoi(line);
        switch(choice){
            case 1: recommendSong("happy"); break;
            case 2: recommendSong("sad"); break;
            case 3: recommendSong("party"); break;
            case 4: addSong(); break;
            case 5: printf("Thanks!\n"); return 0;
            default: printf("Invalid choice.\n"); break;
        }
    }
}
