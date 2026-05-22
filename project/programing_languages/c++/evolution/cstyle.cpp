import std;
using namespace std;

void method1_C_Style(const int arr[], size_t size, int** odds, size_t* numOdds, int** evens, size_t* numEvens){
    *numOdds = *numEvens = 0;
    for(size_t i = 0; i < size; ++i){
        if(arr[i] % 2 == 1){
            ++(*numOdds);
        }else {
            ++(*numEvens);
        }
    }

    *odds = new int[*numOdds];
    *evens = new int[*numEvens];

    size_t oddsPos = 0, evensPos = 0;
    for (size_t i = 0; i < size; ++i){
        if(arr[i] % 2 == 1) {
            (*odds)[oddsPos++] = arr[i];
        }else{
            (*evens)[evensPos++] = arr[i];
        }
    }
}

int main() {
    int unSplit[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = 10;

    int *oddNums1 = nullptr;
    int *evenNums1 = nullptr;
    size_t nO1, nE1;

    method1_C_Style(unSplit, size, &oddNums1, &nO1, &evenNums1, &nE1);

    println("Odds: {}", oddNums1[0]);

    delete[] oddNums1;
    delete[] evenNums1;

    return 0;
}