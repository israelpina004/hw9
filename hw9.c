#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pokemon{char* poke; int hp; int pa; int sa; int df; int spdf; int spd;};

void print_pokemon(struct pokemon *p);

struct pokemon * make_pokemon(char* poke, int hp, int pa, int sa, int df, int spdf, int spd);

void print_pokemon(struct pokemon *p) {
  printf("Pokemon name: %s\n", p->poke);
  printf("\nBase Stats:\n");
  printf("HP: %d\nAttack: %d\nSpecial Attack: %d\n", p->hp, p->pa, p->sa);
  printf("Defense: %d\nSpecial Defense: %d\nSpeed: %d\n", p->df, p->spdf, p->spd);
}

struct pokemon * make_pokemon(char* name, int health, int attack, int sp_attack, int def, int spdef, int speed) {
  struct pokemon *p = malloc(sizeof(struct pokemon));

  p->poke = name;
  p->hp = health;
  p->pa = attack;
  p->sa = sp_attack;
  p->df = def;
  p->spdf = spdef;
  p->spd = speed;

  return p;
}

int main() {
  char* b = "Bulbasaur";
  srand(time(NULL));

  int hp = rand() / 10000000;
  int pa = rand() / 10000000;
  int sa = rand() / 10000000;
  int df = rand() / 10000000;
  int spdf = rand() / 10000000;
  int spd = rand() / 10000000;

  struct pokemon *p = make_pokemon(b, hp, pa, sa, df, spdf, spd);

  print_pokemon(p);
  free(p);

  return 0;
}
