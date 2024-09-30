#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node structure to represent a song
struct Song {
    char title[100];      // Title of the song
    char artist[100];     // Artist of the song
    struct Song* prev;    // Pointer to the previous song
    struct Song* next;    // Pointer to the next song
};

// Function to create a new song node
struct Song* createSong(const char* title, const char* artist) {
    struct Song* newSong = (struct Song*)malloc(sizeof(struct Song));
    strcpy(newSong->title, title);
    strcpy(newSong->artist, artist);
    newSong->prev = NULL;
    newSong->next = NULL;
    return newSong;
}

// Function to insert a song at the front of the doubly linked list
void insertAtFront(struct Song** head, const char* title, const char* artist) {
    struct Song* newSong = createSong(title, artist);

    // If the list is empty, set the new song as both head and tail
    if (*head == NULL) {
        *head = newSong;
    } else {
        newSong->next = *head;
        (*head)->prev = newSong;
        *head = newSong;
    }

    printf("Song \"%s\" by %s added to the front of the playlist.\n", title, artist);
}

// Function to display all songs in the playlist
void displaySongs(struct Song* head) {
    if (head == NULL) {
        printf("The playlist is empty.\n");
        return;
    }

    struct Song* current = head;
    printf("Songs in the playlist:\n");
    while (current != NULL) {
        printf("\"%s\" by %s\n", current->title, current->artist);
        current = current->next;
    }
}

// Function to free the memory allocated for the list
void freePlaylist(struct Song* head) {
    struct Song* current = head;
    while (current != NULL) {
        struct Song* nextSong = current->next;
        free(current);
        current = nextSong;
    }
}

int main() {
    struct Song* playlist = NULL; // Head of the playlist (doubly linked list)

    // Insert songs at the front of the playlist
    insertAtFront(&playlist, "Shape of You", "Ed Sheeran");
    insertAtFront(&playlist, "Blinding Lights", "The Weeknd");
    insertAtFront(&playlist, "Levitating", "Dua Lipa");

    // Display the playlist
    displaySongs(playlist);

    // Free memory allocated for the playlist
    freePlaylist(playlist);

    return 0;
}