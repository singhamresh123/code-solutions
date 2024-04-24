#include<stdio.h>
int main(){
    FILE *file;
    char buffer[100];

    file= fopen("filename.txt", "r+");

    if(file == NULL){
        printf("file could not be opened.");
    }
    else{
        //read from the filr
        while(fgets(buffer,sizeof(buffer),file)!=NULL){
        printf("%s",buffer); //print the content of the file
        }

        //write to the file
        fprintf(file, "\nthis is written in read and write mode.");
       
        fclose(file);
    }
    return 0;
}