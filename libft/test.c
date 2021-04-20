#include "libft.h"

int main()
{
  char str[100];
  ft_strcpy( str, "Эти " );                // скопировать строку "Эти" в str

  // добавить к строке str строку, передаваемую во втором параметре
  ft_strcat( str, "строки "          );
  ft_strcat( str, "объединены "    );
  ft_strcat( str, "операцией "      );
  ft_strcat( str, "конкатенации." );


  return 0;
}
