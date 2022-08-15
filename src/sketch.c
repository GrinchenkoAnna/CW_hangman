#include <stdio.h>

void sketch(unsigned int n){
    char *sketch_string[11][80] = {
    //0 
    {"  (@)(@)\n (@)()(@)\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"},
    //1
    {"  (@)\n (@)()(@)\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"},
    //2
    {"  (@)\n (@)()\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"},
    //3
    {"  (@)\n (@)()\n  (@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"},
    // 5) 
    {"  (@)\n (@)()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"},
    //5
    {"  (@)\n    ()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"},
    //6
    {"\n    ()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"},
    //7
    {"\n    ()\n     |\n    /\n   | \n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"},
    //8
    {"\n    ()\n     |\n    /\n   | \n   |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"},
    //9
    {"\n\n     _\n    / \\\n   |  ()\n   |\\\n  /|\n -----\n \\---/\n  \\-/\n   -\n"}, 
    //10 - error
    {" ___________\n|           |\n|   ERROR   |\n|    X_X    |\n|___________|\n"}
    };
    
    FILE *picture;//файл для записи рисунка
    
    switch (n) {
        case 9: 
            picture = fopen("src/temp/picture", "w"); 
            printf("%s", sketch_string[9][0]); 
            fprintf(picture, "%s", sketch_string[9][0]); 
            fclose(picture); break;
        case 8: 
            picture = fopen("src/temp/picture", "w"); 
            printf("%s", sketch_string[8][0]); 
            fprintf(picture, "%s", sketch_string[8][0]); 
            fclose(picture); break;
        case 7: 
            picture = fopen("src/temp/picture", "w"); 
            printf("%s", sketch_string[7][0]); 
            fprintf(picture, "%s", sketch_string[7][0]);     
            fclose(picture); break;
        case 6: 
            picture = fopen("src/temp/picture", "w"); 
            printf("%s", sketch_string[6][0]); 
            fprintf(picture, "%s", sketch_string[6][0]); 
            fclose(picture); break;
        case 5: 
            picture = fopen("src/temp/picture", "w"); 
            printf("%s", sketch_string[5][0]); 
            fprintf(picture, "%s", sketch_string[5][0]); 
            fclose(picture); break;
        case 4: 
            picture = fopen("src/temp/picture", "w"); 
            printf("%s", sketch_string[4][0]); 
            fprintf(picture, "%s", sketch_string[4][0]); 
            fclose(picture); break;
        case 3: 
            picture = fopen("src/temp/picture", "w"); 
            printf("%s", sketch_string[3][0]); 
            fprintf(picture, "%s", sketch_string[3][0]); 
            fclose(picture); break;    
        case 2: 
            picture = fopen("src/temp/picture", "w");     
            printf("%s", sketch_string[2][0]); 
            fprintf(picture, "%s", sketch_string[2][0]); 
            fclose(picture); break;
        case 1: 
            picture = fopen("src/temp/picture", "w"); 
            printf("%s", sketch_string[1][0]); 
            fprintf(picture, "%s", sketch_string[1][0]);     
            fclose(picture); break;
        case 0: 
            picture = fopen("src/temp/picture", "w"); 
            printf("%s", sketch_string[0][0]); 
            fprintf(picture, "%s", sketch_string[0][0]); 
            fclose(picture); break;
        default: 
            picture = fopen("src/temp/picture", "w");
            printf("%s", sketch_string[10][0]);     
            fprintf(picture, "%s", sketch_string[10][0]); 
            fclose(picture); break;
    }    
}
