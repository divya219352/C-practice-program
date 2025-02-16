//C Program to Read and Print all Files From a Zip File
#include <stdio.h>
#include <stdlib.h>
#include <zip.h>

void print_file_contents(zip_t *zip, const char *filename) {
    struct zip_file *zf = zip_fopen(zip, filename, 0);
    if (zf == NULL) {
        printf("Could not open file in ZIP: %s\n", filename);
        return;
    }

    zip_stat_t stat;
    zip_stat(zip, filename, 0, &stat);
    char *buffer = malloc(stat.size);
    if (buffer == NULL) {
        printf("Memory allocation failed.\n");
        zip_fclose(zf);
        return;
    }

    zip_fread(zf, buffer, stat.size);
    printf("\nContents of '%s':\n", filename);
    fwrite(buffer, 1, stat.size, stdout);
    printf("\n");

    free(buffer);
    zip_fclose(zf);
}

int main() {
    const char *zip_filename = "example.zip";  // Path to your ZIP file
    int err = 0;

    zip_t *zip = zip_open(zip_filename, 0, &err);
    if (zip == NULL) {
        fprintf(stderr, "Failed to open zip file '%s'\n", zip_filename);
        return 1;
    }

    zip_int64_t num_files = zip_get_num_files(zip);
    printf("Number of files in the zip archive: %ld\n", num_files);

    for (zip_int64_t i = 0; i < num_files; i++) {
        const char *filename = zip_get_name(zip, i, 0);
        if (filename == NULL) {
            printf("Error getting file name.\n");
            continue;
        }

        print_file_contents(zip, filename);
    }

    zip_close(zip);
    return 0;
}
