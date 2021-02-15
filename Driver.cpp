#include "Card.hpp"

int main(int argc, char** argv)
{
    Card* KingKrush = new Card("King Krush", 9, 8, 8);
    Card* shadowhoofSlayer = new Card("Shadowhoof Slayer", 1, 2, 1);
    Card* swordOfJustice = new Card("Sword of Justice", 3, 1, 5);
    Card* murlocKnight = new Card("Murloc Knight", 4, 3, 4);
    KingKrush->display();
    shadowhoofSlayer->display();
    swordOfJustice->display();
    murlocKnight->display();
}