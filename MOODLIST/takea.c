#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define BUFFER_SIZE 512

// Structure to store song details
struct Song {
    char name[100];
    char artist[50];
    char mood[20];
    char youtubeLink[200];
    char spotifyLink[200];
    char localPath[200];
};

// Songs database (3 per mood)
struct Song songs[100] = {
    {"Gallan Goodiyan", "Dil Dhadakne Do", "happy", "https://www.youtube.com/watch?v=zJmQ2I_Ps1w", "https://open.spotify.com/track/5L1lO4rW6Qxk5IClD6zW2c", ""},
    {"Badtameez Dil", "YJHD", "happy", "https://www.youtube.com/watch?v=II2EO3Nw4m0", "https://open.spotify.com/track/4Zfvh5mA1Tz9w0xr5K5uU1", ""},
    {"Phir Se Ud Chala", "Rockstar", "happy", "https://www.youtube.com/watch?v=qfb2iLNC5SI", "https://open.spotify.com/track/2mWg3vjJQd9eW6RZj8hD1v", ""},

    {"Channa Mereya", "Arijit Singh", "sad", "https://www.youtube.com/watch?v=284Ov7ysmfA", "https://open.spotify.com/track/4eAgyj4Tyz7xY1Gz7xD3n2", ""},
    {"Tujhe Kitna Chahne Lage", "Arijit Singh", "sad", "https://www.youtube.com/watch?v=AgXfHyB8SxU", "https://open.spotify.com/track/5TfKjYzN3BdG39uD5u0W9k", ""},
    {"Agar Tum Saath Ho", "Tamasha", "sad", "https://www.youtube.com/watch?v=0G2VxhV_gXM", "https://open.spotify.com/track/3m9qzSOPRoK5Eht2Q7ZbWX", ""},

    {"Kala Chashma", "Baar Baar Dekho", "party", "https://www.youtube.com/watch?v=k4yXQkG2s1E", "https://open.spotify.com/track/0YFq0M0EJdV0qvSeyJ1m7L", ""},
    {"Kar Gayi Chull", "Kapoor & Sons", "party", "https://www.youtube.com/watch?v=Bh2LYM8F0Vw", "https://open.spotify.com/track/1GQLlzxBxKTb6tJsD4RxHI", ""},
    {"Abhi Toh Party Shuru Hui Hai", "Khoobsurat", "party", "https://www.youtube.com/watch?v=4-K2gU8JvUY", "https://open.spotify.com/track/4kImEAgjGScYlKujKoN0bP", ""},

    {"Kabira", "YJHD", "relax", "https://www.youtube.com/watch?v=jHNNMj5bNQw", "https://open.spotify.com/track/2ZDn9m3mS1S2kH8Y1j2LQd", ""},
    {"Ilahi", "YJHD", "relax", "https://www.youtube.com/watch?v=Rbp2XUSeUNE", "https://open.spotify.com/track/0z1CzZ5q4Tz7aoXXK3OVtT", ""},
    {"Kun Faya Kun", "Rockstar", "relax", "https://www.youtube.com/watch?v=T94PHkuydcw", "https://open.spotify.com/track/1VmXhN5fPE4wRrjE7K4Q6P", ""},

    {"Zinda", "Bhaag Milkha Bhaag", "workout", "https://www.youtube.com/watch?v=JfwlPz-8ALO", "https://open.spotify.com/track/2t8x0G1IYTfElE7IjbWv3R", ""},
    {"Sultan Title Track", "Sultan", "workout", "https://www.youtube.com/watch?v=wPxqcq6Byq0", "https://open.spotify.com/track/0fXHENrOqj9LqG5NsNyB2o", ""},
    {"Brothers Anthem", "Brothers", "workout", "https://www.youtube.com/watch?v=nWAGLkyxQG0", "https://open.spotify.com/track/3A1GgbdDhZy7G2LMVkNc4O", ""},

    {"Tum Hi Ho", "Aashiqui 2", "romantic", "https://www.youtube.com/watch?v=Umqb9KENgmk", "https://open.spotify.com/track/7BKLCZ1jbUBVqRi2FVlTVw", ""},
    {"Raabta", "Agent Vinod", "romantic", "https://www.youtube.com/watch?v=OBK4t0zA6tw", "https://open.spotify.com/track/3EBR7j5Jt6gGvj0yQqO9tJ", ""},
    {"Pehli Nazar Mein", "Race", "romantic", "https://www.youtube.com/watch?v=1jvB4YGlj2g", "https://open.spotify.com/track/6x5C9iYuZgzxUjvXz3aZY2", ""},

    {"Ilahi", "YJHD", "driving", "https://www.youtube.com/watch?v=Rbp2XUSeUNE", "https://open.spotify.com/track/0z1CzZ5q4Tz7aoXXK3OVtT", ""},
    {"Patakha Guddi", "Highway", "driving", "https://www.youtube.com/watch?v=7m8CkxXhPtw", "https://open.spotify.com/track/4hTnX6LflByA3LFY4wUhaq", ""},
    {"Safar", "Jab Harry Met Sejal", "driving", "https://www.youtube.com/watch?v=pq4W7X_4d-s", "https://open.spotify.com/track/0yFq9mYH8TzH3gSeKqC9sk", ""},

    {"Apna Time Aayega", "Gully Boy", "gaming", "https://www.youtube.com/watch?v=E0S4W9bkz5E", "https://open.spotify.com/track/2R7iJz5uaHj3jFF8QnwV7g", ""},
    {"Sher Aaya Sher", "Gully Boy", "gaming", "https://www.youtube.com/watch?v=dZ0fwJojhrs", "https://open.spotify.com/track/2pC6B69NCMaFzgnHFn4c0M", ""},
    {"Zinda Banda", "Jawan", "gaming", "https://www.youtube.com/watch?v=Oi6r2ZRTkJY", "https://open.spotify.com/track/6lqzvQfcn1Dbbcv3ESqSQJ", ""},

    {"Khairiyat", "Chhichhore", "sleeping", "https://www.youtube.com/watch?v=hoNb6HuNmU0", "https://open.spotify.com/track/1cTZMwcBJT0Ka3UJPXOeeN", ""},
    {"Phir Le Aaya Dil", "Barfi", "sleeping", "https://www.youtube.com/watch?v=FJ55SHCzt88", "https://open.spotify.com/track/1fSP0LfpIauUZbYo8YyS5X", ""},
    {"Kabira (Encore)", "YJHD", "sleeping", "https://www.youtube.com/watch?v=v0UXgoJ9Shg", "https://open.spotify.com/track/1MXGLjzvLGMvGZV8qYBYwD", ""}
};

int totalSongs = 27;

// safe input helper: read a line and remove newline
static void safe_readline(char *buf, size_t size) {
    if (fgets(buf, (int)size, stdin) == NULL) {
        buf[0] = '\0';
        return;
    }
    size_t len = strlen(buf);
    if (len > 0 && buf[len - 1] == '\n') buf[len - 1] = '\0';
}

// show menu
void showMenu() {
    printf("\nChoose your mood:\n");
    printf("1. Happy\n");
    printf("2. Sad\n");
    printf("3. Party\n");
    printf("4. Relax\n");
    printf("5. Workout\n");
    printf("6. Romantic\n");
    printf("7. Driving\n");
    printf("8. Gaming\n");
    printf("9. Sleeping\n");
    printf("10. Add a new song\n");
    printf("11. Exit\n");
    printf("Enter your choice: ");
}

// open link cross-platform (only if link non-empty)
void open_link_if_valid(const char *link) {
    if (link == NULL || strlen(link) == 0) {
        printf("No link available to open.\n");
        return;
    }
#ifdef _WIN32
    char cmd[BUFFER_SIZE];
    snprintf(cmd, sizeof(cmd), "start \"\" \"%s\"", link);
#elif __APPLE__
    char cmd[BUFFER_SIZE];
    snprintf(cmd, sizeof(cmd), "open \"%s\"", link);
#else
    char cmd[BUFFER_SIZE];
    snprintf(cmd, sizeof(cmd), "xdg-open \"%s\"", link);
#endif
    system(cmd);
}

// recommend random song for mood
void recommendSong(const char mood[]) {
    struct Song moodSongs[100];
    int count = 0;

    for (int i = 0; i < totalSongs; i++) {
        if (strcmp(songs[i].mood, mood) == 0) {
            moodSongs[count++] = songs[i];
        }
    }

    if (count == 0) {
        printf("\nNo songs found for this mood.\n");
        return;
    }

    int randomIndex = rand() % count;
    struct Song s = moodSongs[randomIndex];

    printf("\nRecommended Song:\n");
    printf("Name: %s\nArtist: %s\n", s.name, s.artist);

    if (strlen(s.localPath) > 0) {
        printf("\nPlaying from local file: %s\n", s.localPath);
        char cmd[BUFFER_SIZE];
        snprintf(cmd, sizeof(cmd), "mpg123 \"%s\"", s.localPath);
        system(cmd);
        return;
    }

    // Ask platform using fgets to avoid scanf-pitfalls
    char line[BUFFER_SIZE];
    printf("\nChoose platform:\n1. YouTube\n2. Spotify\nEnter choice: ");
    safe_readline(line, sizeof(line));
    int platform = atoi(line);
    if (platform == 2 && strlen(s.spotifyLink) > 0) {
        printf("Opening Spotify link...\n");
        open_link_if_valid(s.spotifyLink);
    } else {
        // fallback to YouTube
        if (platform == 2 && strlen(s.spotifyLink) == 0) {
            printf("Spotify link not available; falling back to YouTube.\n");
        }
        printf("Opening YouTube link...\n");
        open_link_if_valid(s.youtubeLink);
    }
}

// add new song
void addSong() {
    if (totalSongs >= 100) {
        printf("\nSong limit reached.\n");
        return;
    }

    struct Song newSong;
    // zero-init to be safe
    memset(&newSong, 0, sizeof(newSong));

    char buf[BUFFER_SIZE];
    printf("\nAdd a New Song\n");

    printf("Enter song name: ");
    safe_readline(buf, sizeof(buf));
    strncpy(newSong.name, buf, sizeof(newSong.name)-1);

    printf("Enter artist name: ");
    safe_readline(buf, sizeof(buf));
    strncpy(newSong.artist, buf, sizeof(newSong.artist)-1);

    printf("Enter mood (happy/sad/party/relax/workout/romantic/driving/gaming/sleeping): ");
    safe_readline(buf, sizeof(buf));
    strncpy(newSong.mood, buf, sizeof(newSong.mood)-1);

    printf("Enter YouTube link (or leave blank): ");
    safe_readline(buf, sizeof(buf));
    strncpy(newSong.youtubeLink, buf, sizeof(newSong.youtubeLink)-1);

    printf("Enter Spotify link (or leave blank): ");
    safe_readline(buf, sizeof(buf));
    strncpy(newSong.spotifyLink, buf, sizeof(newSong.spotifyLink)-1);

    printf("Enter local MP3 path (optional): ");
    safe_readline(buf, sizeof(buf));
    strncpy(newSong.localPath, buf, sizeof(newSong.localPath)-1);

    songs[totalSongs++] = newSong;
    printf("\nSong added successfully.\n");
}

int main() {
    srand((unsigned)time(NULL));
    char line[BUFFER_SIZE];

    printf("==============================================\n");
    printf("MUSIC RECOMMENDATION SYSTEM (YouTube + Spotify)\n");
    printf("==============================================\n");

    while (1) {
        showMenu();
        safe_readline(line, sizeof(line));
        int choice = atoi(line);

        switch (choice) {
            case 1: recommendSong("happy"); break;
            case 2: recommendSong("sad"); break;
            case 3: recommendSong("party"); break;
            case 4: recommendSong("relax"); break;
            case 5: recommendSong("workout"); break;
            case 6: recommendSong("romantic"); break;
            case 7: recommendSong("driving"); break;
            case 8: recommendSong("gaming"); break;
            case 9: recommendSong("sleeping"); break;
            case 10: addSong(); break;
            case 11:
                printf("\nThank you for using the Music Recommendation System.\n");
                return 0;
            default:
                printf("\nInvalid choice. Try again.\n");
                break;
        }
    }
    return 0;
}
