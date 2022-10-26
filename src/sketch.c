#include <stdio.h>
#include <wchar.h>
#include <wctype.h>

#include "sketch.h"

void sketch(unsigned int n){
    wchar_t *sketch_string[11][80] = {
    //0
    {L"  (@)(@)\n (@)()(@)\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \
\\---/\n  \\-/\n   -\n"},
    //1
    {L"  (@)\n (@)()(@)\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\
\n  \\-/\n   -\n"},
    //2
    {L"  (@)\n (@)()\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\
\n  \\-/\n   -\n"},
    //3
    {L"  (@)\n (@)()\n  (@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \
\\-/\n   -\n"},
    //4 
    {L"  (@)\n (@)()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \
\\-/\n   -\n"},
    //5
    {L"  (@)\n    ()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \
\\-/\n   -\n"},
    //6
    {L"\n    ()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n\
   -\n"},
    //7
    {L"\n    ()\n     |\n    /\n   | \n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n\
   -\n"},
    //8
    {L"\n    ()\n     |\n    /\n   | \n   |/\n  \\|\n -----\n \\---/\n  \\-/\n \
  -\n"},
    //9
    {L"\n\n     _\n    / \\\n   |  ()\n   |\\\n  /|\n -----\n \\---/\n  \\-/\n\
   -\n"},
    //10 - error
    {L" ___________\n|           |\n|   ERROR   |\n|    X_X    |\n\
|___________|\n"}
    };
    
    switch (n) {
    case 9:
        wprintf(L"\n%ls\n", sketch_string[9][0]); 
        break;
    case 8:
        wprintf(L"\n%ls\n", sketch_string[8][0]);
        break;
    case 7:
        wprintf(L"\n%ls\n", sketch_string[7][0]);
        break;
    case 6:
        wprintf(L"\n%ls\n", sketch_string[6][0]);
        break;
    case 5:
        wprintf(L"\n%ls\n", sketch_string[5][0]);
        break;
    case 4:
        wprintf(L"\n%ls\n", sketch_string[4][0]);
        break;
    case 3:
        wprintf(L"\n%ls\n", sketch_string[3][0]);
        break;
    case 2:
        wprintf(L"\n%ls\n", sketch_string[2][0]);
        break;
    case 1:
        wprintf(L"\n%ls\n", sketch_string[1][0]);
        break;
    case 0:
        wprintf(L"\n%ls\n", sketch_string[0][0]);
        break;
    default:
        wprintf(L"\n%ls\n", sketch_string[10][0]);
        break;
    }
}
