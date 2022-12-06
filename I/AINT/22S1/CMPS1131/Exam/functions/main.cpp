#include <iostream>
using namespace std;

bool SPACE = true;

// Diss Alex
void dissHisMom(string);

// Who is Alex???
class Alex
{
public:
    Alex(bool, bool, bool, bool, int);
    void says(string);

private:
    // Is he white???
    bool isWhite;
    // Is he smart??
    bool isSmart;
    // Is he depressed???
    bool isDepressed;
    // is a loner???
    bool isALoner;
    int stressFactors; // Bro got stress
};

Alex::Alex(bool isWhite, bool isSmart, bool isALoner, bool isDepressed, int stressFactors)
{
    this->isWhite = isWhite;
    this->isSmart = isSmart;
    this->stressFactors = stressFactors;
    this->isDepressed = isDepressed;
    this->isALoner = isALoner;
}

void Alex::says(string mom = "balls")
{
    string white = isWhite  ? "white" : "not white";
    string depressed = isDepressed  ? "depressed" : "not depressed";
    string loner = isALoner  ? "lonely" : "not a man";

    
        cout << "Bro I'm " << white << " and I got " << stressFactors
             << " problems right now. " << "My mom is totally " << mom << ". " << "My man I'm " << depressed << " and " << loner << ". ";
    
}

int main()
{
    dissHisMom("fire");
    return 0;
}

void dissHisMom(string diss)
{
    Alex guy(true, true, true, true, 9000);
    int i = 0;
    while (i < 20)
    {
        for (int j = 0; j <= 20; j++)
        {
            guy.says(diss);
            if(SPACE){
                cout << endl;
            }
        }
        i++;
    }
}