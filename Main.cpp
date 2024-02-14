#include "Pokemon.h"
#include "Move.h"
#include "DualTypePokemon.h"


int main() {
    PhysicalMove quickAttack("Quick Attack", NORMAL, 70);
    SpecialMove swift("Swift", NORMAL, 60);
    PhysicalMove ironTail("Iron Tail", STEEL, 100);
    SpecialMove thunder("Thunder", GROUND, 110);
    SpecialMove shadowBall("Shadow Ball", GHOST, 80);
    PhysicalMove payback("Payback", DARK, 50);
    PhysicalMove earthquake("Earthquake", GROUND, 100);

    Pokemon* pikachu = new Pokemon("Pikachu", ELECTRIC, &quickAttack, &swift, &ironTail, &thunder, 400, 90, 90, 60, 50);
    DualTypePokemon* gengar = new DualTypePokemon("Gengar", POISON, GHOST, &thunder, &shadowBall, &payback, &earthquake, 400, 80, 100, 80, 80);

    pikachu->executeMove1(gengar);
    gengar->executeMove1(pikachu);
    pikachu->executeMove2(gengar);
    gengar->executeMove2(pikachu);
    pikachu->executeMove3(gengar);
    gengar->executeMove3(pikachu);
    pikachu->executeMove4(gengar);
    gengar->executeMove4(pikachu);
    pikachu->executeMove3(gengar);
    gengar->executeMove4(pikachu);

    delete pikachu;
    delete gengar;

    return 0;
}