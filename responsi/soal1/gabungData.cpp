#include <iostream>
using namespace std;

void gabungData(const int* list1, const int* list2, int size1, int size2, int* mergeList){
    int i = 0, j = 0, k = 0;

    while(i<size1 && j<size2){
        for (int i = 0; i<size1; ++i){
            if (size1<=size2){
                mergeList[k++] = list1[i++];
            }
            else{
                mergeList[k++] = list2[j++];
            }
        }
            
    }
    while(i<size1){
        mergeList[k++] = list1[i++];
    }
    while(j<size2){
        mergeList[k++] = list2[j++];
    }
}
int main(){
    
    const int list1 = {1, 3, 5, 7};
    const int list2 = {2, 4, 6, 8};
    const int size1 = sizeof(list1) / sizeof(list1[0]);
    const int size2 = sizeof(list2) / sizeof(list2[0]);

    gabungData [size1 + size2];
    mergeList(list1, list2, size1, size2, mergeList);

    cout<<"Data gabungan adalah"<< mergeList<< endl;
    for (int i=0; i < size1 + size2; ++i){
        mergeList[i];
    }
return 0;
}
