#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int snakeWaterGun(char you, char comp){
// return -1 if you lose return 1 if you win return 0 if you lose

if(you==comp){
    return 0;
}

if(you == 's' && comp=='g'){
    return -1;
}else if(you == 'g' && comp=='s'){
    return 1;
}
if(you == 's' && comp=='w'){
    return 1;
}else if(you == 'w' && comp=='s'){
    return -1;
}
if(you == 'g' && comp=='w'){
    return -1;
}else if(you == 'w' && comp=='g'){
    return 1;
}
}
int main(){
    char you, comp;
    comp = 's';
    int number;
srand(time(0));
number = rand()%100 + 1;
if(number<33){
    comp = 's';
}
else if(number > 33 && number<66){
    comp = 'w';
}
else{
    comp = 'g';
}
    printf("Enter s for snake, w for water and g for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);

    if(result == 0){
        printf("Game Draw\n");
    }
    else if(result == 1){
        printf("You win Good job\n");
    }
    else {
        printf("You lose \n");
    }
    printf("you chose %c and computer chose %c\n", you, comp);
    return 0;
}