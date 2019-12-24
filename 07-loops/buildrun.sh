# compile with optimization, warning flags, and C++17 standard
g++ -O3 -Wall -std=c++17 $1

# run the program if g++ compilation was successful
if [ $? -eq 0 ]
then
   ./a.out
else
   RED='\033[0;31m'
   NO_COLOR='\033[0m'
   printf "${RED}┌───────────────────────┐${NO_COLOR}\n"
   printf "${RED}│  COMPILATION FAILURE  │${NO_COLOR}\n"
   printf "${RED}└───────────────────────┘${NO_COLOR}\n"
fi
