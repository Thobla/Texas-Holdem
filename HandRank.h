#ifndef HANDRANK_H
#define HANDRANK_H
#include "Table.h"
#include "Player.h"
#include <tuple>
#include <vector>

std::vector<std::tuple<int,int>> highestRank(Player player, Table table);

std::vector<std::tuple<int, int>> updateDuplicates(Card *cards);

#endif

