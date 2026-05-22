import std;
using namespace std;

void method2_Ref_To_Ptr(const int arr[], size_t size, int*& odds, size_t& numOdds, int*& evens, size_t& numEvens){
    numOdds = numEvens = 0;
    for(size_t i = 0; i < size; ++i){
        if(arr[i] % 2 == 1) ++numOdds;
        else ++numEvens;
    }

    odds = new int[numOdds];
    evens = new int[numEvens];

    size_t oddsPos = 0, evensPos = 0;
    for (size_t i = 0; i < size; ++i){
        if(arr[i] % 2 == 1) odds[oddsPos++] = arr[i];
        else evens[evensPos++] = arr[i];
    }
}

int main(){
    int unSplit[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = 10;

    int* oddNums2 = nullptr;
    int* evenNums2 = nullptr;
    size_t nO2, nE2;

    method2_Ref_To_Ptr(unSplit, size, oddNums2, nO2, evenNums2, nE2);

    println("Odds: {}", oddNums2[0]);

    delete[] oddNums2;
    delete[] evenNums2;
    
    return 0;
}