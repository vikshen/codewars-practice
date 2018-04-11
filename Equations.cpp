//A very innovative solution to solve a system of equations

int * solveEq(int input[3][4])
{
   for(int x = -99; x <= 99; x++)
      for(int y = -99; y <= 99; y++)
         for(int z = -99; z <= 99; z++)
            if(input[0][0] * x + input[0][1] * y + input[0][2] * z == input[0][3]
            && input[1][0] * x + input[1][1] * y + input[1][2] * z == input[1][3]
            && input[2][0] * x + input[2][1] * y + input[2][2] * z == input[2][3])
               return new int[3] { x, y, z };
   std::abort();
}
