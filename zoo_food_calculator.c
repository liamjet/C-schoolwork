#include "zoo_food_calculator.h"
#include <stdio.h>
#include <string.h>

float process_mammal(Animal* animal)
{
  float total_weight = animal->weight / 10 + animal->height / 3 + animal->age / 5 * 1 / 10;
  if (animal->faster_than_human == 1) {
      total_weight = total_weight * 1.15;
  }
  return total_weight;
}

float process_amphibian(Animal* animal)
{
  float total_weight = animal->weight / 5 * 2/3 + animal->length / 6 * 1/4 + animal->age / 4 * 1 / 5;
  if (animal->pregnant == 1) {
      total_weight = total_weight * 1.1;
  }
  return total_weight;
}

float process_reptile(Animal* animal)
{
  float total_weight = animal->weight / 6 * 1/5 + animal->length * 1/2;
  if (animal->winter == 1) {
      total_weight = total_weight * 0.9;
  }
  return total_weight;
}

// helper function to print an animal, use where ever you see fit.
void print_animal(Animal* animal)
{
  char buf[4];
  switch (animal->type)
  {
    case mammal:
      if (animal->faster_than_human)
        strcpy(buf, "yes");
      else
        strcpy(buf, "no");
      printf("mammal, weight: %f, height: %f, age: %d, faster than human: %s\n", animal->weight, animal->height, animal->age, buf);
      break;
    case amphibian:
      if (animal->pregnant)
        strcpy(buf, "yes");
      else
        strcpy(buf, "no");
      printf("amphibian, weight: %f, length:%f, age: %d, pregnant: %s\n", animal->weight, animal->length, animal->age, buf);
      break;
    case reptile:
      printf("reptile, weight: %f, length:%f\n", animal->weight, animal->length);
      break;
  }
}