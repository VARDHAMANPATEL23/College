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

// Menu function to allow user to choose actions
void menu() {
    printf("\nMusic Player Menu:\n");
    printf("1. Insert a song at the front of the playlist\n");
    printf("2. Display all songs\n");
    printf("3. Exit\n");
    printf("Choose an option: ");
}

int main() {
    struct Song* playlist = NULL; // Head of the playlist (doubly linked list)
    int choice;
    char title[100], artist[100];

    while (1) {
        menu(); // Display the menu
        scanf("%d", &choice); // Get the user's choice
        getchar(); // Consume newline character after scanf

        switch (choice) {
            case 1: // Insert a song at the front
                printf("Enter song title: ");
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = '\0'; // Remove the trailing newline

                printf("Enter artist name: ");
                fgets(artist, sizeof(artist), stdin);
                artist[strcspn(artist, "\n")] = '\0'; // Remove the trailing newline

                insertAtFront(&playlist, title, artist);
                break;

            case 2: // Display all songs
                displaySongs(playlist);
                break;

            case 3: // Exit the program
                freePlaylist(playlist); // Clean up the memory
                printf("Exiting the program...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}