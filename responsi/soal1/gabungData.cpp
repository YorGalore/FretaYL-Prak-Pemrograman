#include <iostream>
using namespace std;

void mergeData(const int* list1, int size1, const int* list2, int size2, int* mergeList){
    int i = 0, j = 0, k = 0;

    while (i<size1 && j<size2){
        if (list1[i]<=list2[j]){
            mergeList[k++] = list1[i++];
        }
        else{
            mergeList[k++] = list2[j++];
        }
    }
    while (i<size1){
        mergeList[k++] = list1[i++];
    }
    while (j<size2){
        mergeList[k++] = list2[j++];
    }
}

int main(){
    const int list1[] = {1, 3, 5, 7};
    const int list2[] = {2, 4, 6, 8};
    const int size1 = sizeof(list1)/sizeof(list1[0]);
    const int size2 = sizeof(list2)/sizeof(list2[0]);

    int mergeList[size1+size2];
    mergeData(list1, size1, list2, size2, mergeList);
    cout<<"Data gabungan"<<endl;
    for (int i=0; i<size1+size2; i++){
        cout<<mergeList[i]<<"";
    }
    cout<<endl;

return 0;
}
