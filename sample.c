#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void clrS(){
    system("@cls");
}

void gMadLibs4(){
    char nav;char noun1[23];char adj1[21];char adj2[21];char protName[21];char verb1[21];char noun2[21];char verb2[21];char noun3[21];char noun4[21];char verbing1[21];char adj3[21];char noun5[21];char noun6[21];char adj4[21];char noun7[21];char adj5[21];char noun8[21];char adj6[21];char noun9[21];double hours;char verbing2[21];char noun10[21];char noun11[21];char noun12[21];char noun13[21];char noun14[21];char noun15[21];char adj7[21];char noun16[21];char noun17[21]; char adj8[21]; char adj9[10];

    do{
        clrS();
        printf("- Fill in the blanks with the appropriate parts of speech\n\n");
        printf("\nThe Wacky Day at the Zoo");
        printf("\n\nOnce upon a time, in a(n) [1]adjective] zoo, there was a(n) [2]adjective] [3]noun] named \n[4]Protagonist's Name]. They loved to [5]verb] with the [6]noun] and [7]verb] the [8]noun] with \nthe [9]noun].");

        printf("\n[1]");
        scanf("%s", adj1);
        printf("[2]");
        scanf("%s", adj2);
        printf("[3]");
        scanf("%s", noun1);
        printf("[4]");
        fgets(protName, 21, stdin);
        printf("[5]");
        scanf("%s", verb1);
        printf("[6]");
        scanf("%s", noun2);
        printf("[7]");
        scanf("%s", verb2);
        printf("[8]");
        scanf("%s", noun3);
        printf("[9]");
        scanf("%s", noun4);


        printf("\n\nOne sunny day, while [1]verb ending in -ing], they discovered a(n) [2]adjective] [3]noun] \nhad escaped from its enclosure! With a [4]adjective] [5]noun] and a(n) [6]adjective] [7]noun] \nin hand, they embarked on a(n) [8]adjective] quest to find the runaway [9]noun].");

        printf("\n[1]");
        scanf("%s", verbing1);
        printf("[2]");
        scanf("%s", adj3);
        printf("[3]");
        scanf("%s", noun5);
        printf("[4]");
        scanf("%s", adj4);
        printf("[5]");
        scanf("%s", noun6);
        printf("[6]");
        scanf("%s", adj5);
        printf("[7]");
        scanf("%s", noun7);
        printf("[8]");
        scanf("%s", adj6);
        printf("[9]");
        scanf("%s", noun8);



        printf("\n\nAlong the way, they encountered a(n) [1]adjective] [2]noun] who insisted on juggling [3]noun] \nand a [4]adjective] [5]noun] who sang opera to [6]noun].");

        printf("\n[1]");
        scanf("%s", adj7);
        printf("[2]");
        scanf("%s", noun9);
        printf("[3]");
        scanf("%s", noun10);
        printf("[4]");
        scanf("%s", adj8);
        printf("[5]");
        scanf("%s", noun11);
        printf("[6]");
        scanf("%s", noun12);


        printf("\n\nAfter [1]number] hours of [2]verb ending in -ing], they found the rogue [3]noun] enjoying a picnic with a family of [4]noun]. With a clever [5]noun], they convinced the [6]noun] to return peacefully to its home.");

        printf("\n[1]");
        scanf("%lf", &hours);
        printf("[2]");
        scanf("%s", verbing2);
        printf("[3]");
        scanf("%s", noun13);
        printf("[4]");
        scanf("%s", noun14);
        printf("[5]");
        scanf("%s", noun15);
        printf("[6]");
        scanf("%s", noun16);


        printf("\n\nWith the zoo safe once more, %s became a hero among the [1]noun] \nkeepers, their tale forever etched in the zoo's history. \n\nThe End, or is it just the start of more [2]adjective] escapades at the zoo?", protName);

        printf("\n[1]");
        scanf("%s", noun17);
        printf("[2]");
        scanf("%s", adj9);


        printf("\n\nNow see how your story turned out!");
        sleep(1);
        clrS();

        printf("\n\nOnce upon a time, in a(n) %s zoo, there was a(n) %s %s named \n%s. They loved to %s with the %s and %s the %s with \nthe %s.", adj1, adj2, noun1, protName, verb1, noun2, verb2, noun3, noun4);
        printf("\n\nOne sunny day, while %s, they discovered a(n) %s %s \nhad escaped from its enclosure! With a %s %s and a(n) %s %s \nin hand, they embarked on a(n) %s quest to find the runaway %s.", verbing1, adj3, noun5, adj4, noun6, adj5, noun7, adj6, noun8);
        printf("\n\nAlong the way, they encountered a(n) %s %s who insisted on juggling %s \nand a %s %s who sang opera to %s.", adj7, noun9, noun10, adj8, noun11, noun12);
        printf("\n\nAfter %f hours of %s, they found the rogue %s enjoying a picnic with a family of %s. With a clever %s, they convinced the %s to return peacefully to its home.", &hours, verbing2, noun13, noun14, noun15, noun16);
        printf("\n\nWith the zoo safe once more, %s became a hero among the %s \nkeepers, their tale forever etched in the zoo's history. \n\nThe End, or is it just the start of more %s escapades at the zoo?", protName, noun17, adj9);


        printf("\n\n\nWould you like to try again?(y/n)");
        scanf(" %c", &nav);

    }while(nav != 'n');
}

void gMadLibs3(){
    char nav;
    char place1[15]; char verb1[15]; char adj1[15]; char food[15]; char thgPlur[15]; char profession[15]; char thg[15]; char color[15]; char celebrity[15]; char animal[15];

    do{
        clrS();
        printf("- Fill out the required words\n\n");
        printf("\nThe Gingerbread Man");
        printf("\n");
        printf("\nPlace: ");
        fgets(place1, 15, stdin);
        printf("\nAdjective: ");
        scanf("%s", adj1);
        printf("\nVerb: ");
        scanf("%s", verb1);
        printf("\nFood: ");
        scanf("%s", food);
        printf("\nThing (plural): ");
        scanf("%s", thgPlur);
        printf("\nProfession: ");
        fgets(profession, 15, stdin);
        printf("\nThing: ");
        scanf("%s", thg);
        printf("\nColor: ");
        scanf("%s", color);
        printf("\nCelebrity or someone famous: ");
        fgets(celebrity, 15, stdin);
        printf("\nAnimal: ");
        scanf("%s", animal);

        printf("\nNow see how your story turned out\n");
        sleep(1);
        clrS();
        printf("\nThere once was a gingerbread man who had two %s for eyes and a %s for a nose. He always said, '%s as fast as you can, \nyou can't catch me I'm the gingerbread man.' One day he ran past a %s %s, but they couldn't catch him. He kept running until he passed a \n%s, but they couldn't catch him either. Suddenly, he came across a river near %s. How would he cross? Then he saw a %s \n%s floating by. He jumped on it, but it was actually a(an) %s --who just so happened to love cookies :\n)", place1, adj1, verb1, food, thgPlur, profession, thg, color, celebrity, animal);

        printf("\nWould you like to try again(y/n)");
        scanf(" %c", &nav);

    }while(nav != 'n');
}

void gMadLibs2(){
    char nav;
    char foods1[15]; char verb1[15]; char adj1[15]; char foods2[15]; char saying[50]; char noun[15]; char stgRidable[15]; char color[15]; char person[15]; char animal[15];

    do{
        clrS();
        printf("- Fill out the required words\n\n");
        printf("\nA Culinary Journey Beyond Taco");
        printf("\n");
        printf("\nAdjective: ");
        scanf("%s", adj1);
        printf("\nFoods (plural): ");
        scanf("%s", foods1);
        printf("\nVerb: ");
        scanf("%s", verb1);
        printf("\nSaying: ");
        fgets(saying, 50, stdin);
        printf("\nNoun: ");
        scanf("%s", noun);
        printf("\nFoods (plural): ");
        scanf("%s", foods2);
        printf("\nColor: ");
        scanf("%s", color);
        printf("\nSomething you would ride in: ");
        scanf("%s", stgRidable);
        printf("\nAnimal: ");
        fgets(animal, 15, stdin);
        printf("\nPerson: ");
        fgets(person, 15, stdin);

        printf("\nNow see how your story turned out\n");
        sleep(1);
        clrS();
        printf("\n\nToday I went to my favorite Taco Stand called the %s %s. Unlike most food stands, they cook and prepare the food in a %s \nwhile you %s. The best thing on the menu is the %s %s. Instead of ground beef they fill the taco with %s, cheese, and top \nit off with a salsa made from %s. If that doesn't make your mouth water, then it's just like %s always says: %s!\n", adj1, animal, stgRidable, verb1, color, noun, foods2, foods1, person, saying);

        printf("\nWould you like to try again(y/n)");
        scanf(" %c", &nav);

    }while(nav != 'n');

}

void gMadLibs1(){
    char nav;
    char protName[25];char adj1[25];char noun1[25];char adj2[25];char place1[25];char verb1[25];char verbing1[25];char adj3[25];char noun2[25];char noun3[25];

    do{
        clrS();
        printf("- Fill in the blanks with the appropriate parts of speech\n\n");
        printf("\nThe Ridiculous Adventure of [Protagonist's name]");
        scanf("%s", protName);
        printf("\nOnce upon a time, there was a(n) [1]adjective] [2]noun] named %s.\nThey lived in a(n) [3]adjective] [4]place] and their favorite thing to do was [5]verb].\nOne day, while [6]verb ending in -ing], they stumbled upon a(n)\n[7]adjective] [8]noun] in the middle of the [9]noun].", protName);

        printf("\n\n");

        printf("[1]");
        scanf("%s", adj1);
        printf("[2]");
        scanf("%s", noun1);
        printf("[3]");
        scanf("%s", adj2);
        printf("[4]");
        scanf("%s", place1);
        printf("[5]");
        scanf("%s", verb1);
        printf("[6]");
        scanf("%s", verbing1);
        printf("[7]");
        scanf("%s", adj3);
        printf("[8]");
        scanf("%s", noun2);
        printf("[9]");
        scanf("%s", noun3);


        printf("\n\nNow, see how your story turned out!");
        sleep(1);
        clrS();
        printf("\nThe Ridiculous Adventure of %s", protName);
        printf("\n\nOnce upon a time, there was a(n) %s %s named %s.\nThey lived in a(n) %s %s and their favorite thing to do was %s.\nOne day, while %s, they stumbled upon a(n)\n%s %s in the middle of the %s.", adj1, noun1, protName, adj2, place1, verb1, verbing1, adj3, noun2, noun3);

        printf("\n\nThen everybody died!");
        printf("\n       The End!");
        printf("\n\n\nWould you like to try again?(y/n)");
        scanf(" %c", &nav);

    }while(nav != 'n');
}

int main(){

    char nav;
    clrS();

    do{
        printf("                -----Mad Libs Game-----\n");
        printf("                    Choose a story:\n\n");
        printf("              The Ridiculous Adventure       (1)\n");
        printf("              A Culinary Journey Beyond Taco (2)\n");
        printf("              The Gingerbread Man            (3)\n");
        printf("              The Wacky Day at the Zoo       (4)\n");
        printf("\n");
        printf("                         Exit(e)\n");

        scanf(" %c", &nav);

        switch(nav){
        case '1':
            gMadLibs1();
        break;
        case '2':
            gMadLibs2();
            break;
        case '3':
            gMadLibs3();
            break;
        case '4':
            gMadLibs4();
            break;
        case 'e':
            break;
        default:
            printf("There isn't an option with this character, please try again");
        }
        sleep(1);
        clrS();
    }while(nav != 'e');

    return 0;
};
