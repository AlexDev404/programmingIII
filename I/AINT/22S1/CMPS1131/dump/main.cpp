#include <iostream>
using namespace std;

string repeat(string str, int repetitions);
int daysInMonth(int month);

int main(){
//   cout << repeat("BooBoo", 3) << endl;
   cout << daysInMonth(9) << endl;
   return 0;

}
string repeat(string str, int repetitions){
   string result = "";
   if(repetitions <= 0) {
      return (result);
   }
   for(int i = 0; i < repetitions; i++){
      result = result + str;
   }
   return (result);
}

// This is actually cleaner than I expected originally
int daysInMonth(int month){
   if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
      return (31);
   } else
       if(month == 4 || month == 6 || month == 9 || month == 11) {
           return (30);
   } else
       if(month == 2){
           return (28);
       }
   return (-1);
}
