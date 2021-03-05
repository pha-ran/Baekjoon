#include <iostream>

int main() {
   
   int n;

   std::cin >> n;

   if (n < 5) {
      if (n == 3) { std::cout << 1 << std::endl; return 0; }
      else { std::cout << -1 << std::endl; return 0; }
   }
   
   if (n % 5 == 0) { std::cout << n / 5 << std::endl; return 0; }
   else {
      for (int i = n - (n % 5); i >= 0; i -= 5) {
         if ((n - i) % 3 == 0) { std::cout << (i / 5) + ((n - i) / 3) << std::endl; return 0; }
      }
   }

   std::cout << -1 << std::endl;

   return 0;
}
