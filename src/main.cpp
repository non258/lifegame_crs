#include <bits/stdc++.h>

int main()
{
  bool DEBUG = true;
  int MAP_SIZE = 10;

  int debug_map[] = 
  {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 1, 1, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  };

  int row[MAP_SIZE + 1];
  int col[MAP_SIZE * MAP_SIZE];
  int col_num = 0;

  std::memset(row, 0, sizeof row);
  std::memset(col, 0, sizeof col);

  for (int i = 0; i < MAP_SIZE * MAP_SIZE; ++i)
  {
    int num = 0;
    int row_befor = 0;
    int row_after = 0;
    if (DEBUG)
      num = debug_map[i];
    else
      std::cin >> num;

    if (num)
    {
      col[col_num] = i % MAP_SIZE;
      col_num++;
    }

    row_after = i / MAP_SIZE;
    if (row_after > row_befor)
    {
      row_befor = row_after;
      row[(i / MAP_SIZE) + 1] = col_num;
    }
  }

  std::cout << "col:";
  for (int i = 0; i < col_num; ++i)
    std::cout << " " << col[i];
  std::cout << std::endl;

  std::cout << "row:";
  for (int i = 0; i < MAP_SIZE + 1; ++i)
    std::cout << " " << row[i];
  std::cout << std::endl;
}
