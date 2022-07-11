#include <stdio.h>

void sketch(unsigned int n){
    switch (n) {
    case 9: printf("\n\n     _\n    / \\\n   |  ()\n   |\\\n  /|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 8: printf("\n    ()\n     |\n    /\n   | \n   |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 7: printf("\n    ()\n     |\n    /\n   | \n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 6: printf("\n    ()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 5: printf("  (@)\n    ()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 4: printf("  (@)\n (@)()\n     |\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 3: printf("  (@)\n (@)()\n  (@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;    
    case 2: printf("  (@)\n (@)()\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 1: printf("  (@)\n (@)()(@)\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    case 0: printf("  (@)(@)\n (@)()(@)\n  (@)(@)\n    /\n   | @\n @ |/\n  \\|\n -----\n \\---/\n  \\-/\n   -\n"); break;
    default: printf(" ___________\n|           |\n|   ERROR   |\n|    X_X    |\n|___________|\n"); break;
    }
}
