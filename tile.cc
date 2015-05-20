#include <iostream>
#include <vector>

enum Family {DRAGON,WIND,BAMBOO,CIRCLE,CHARACTER};
enum Specificity {EXTREMITY,SYMETRIC,GREEN};

#define GREEN_DRAGON (-1)
#define RED_DRAGON (-2)
#define WHITE DRAGON (-3)
#define NORTH_WIND (10)
#define SOUTH_WIND (11)
#define EAST_WIND (12)
#define WEST_WIND (13)

class Tile
{
    Family family;
    std::vector<Specificity> specificities;
    int value;

    public:
    Tile(int v) : value(v){};
    Tile(int v, Family f, std::vector<Specificity> spec) : value(v), family(f), specificities(spec) {};
};

