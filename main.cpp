#include <iostream>
int  Fibonachi(int n, int * memory)
{
    if(memory[n] != -999)
    {
        return memory[n];
    }

   if(n == 0)
   {
       memory[n] = 0;
   }else if (n == 1 || n == 2)
   {
      memory[n] = 1;
   }else {
       memory[n] = Fibonachi(n - 1,memory) + Fibonachi(n  - 2, memory);
   }

    return memory[n];
}
int main() {
    int n;
    std::cout << "Enter n Fibonachi\n";
    std::cin >> n;

    int * memory = new int[n+1];

    for (int i =0; i <= n; i++)
    {
        memory[i] = -999;
    }

for ( int i =0; i < n; i++)
{
    std::cout << Fibonachi(i ,memory) << " ";
}
    return 0;
}
