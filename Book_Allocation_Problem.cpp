/* There are N books, each ith book has A[i] number of pages. You have to allocate books to M number of students so that 
maximum number of pages allocated to a student is minimu. 
= Each book should be allocated to a student.
= Each student has to be alloacated at least one book. 
= Allotment should be in contigous order.
Calculate and return that minimum possible number. Retuirn -1 if a valid assignment is not possibel.*/

// Solution :- 

# include <iostream>
# include <vector> 
using namespace std;

bool isValid(vector<int> &arr, int n , int m , int maxAllowedPages){    // O(n)
    int student = 1,pages=0;
    for (int i =0;i<n;i++){
        if (arr[i] > maxAllowedPages){
            return false;
        }
        if (pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        } else {
            student ++;
            pages =arr[i];
        }
    }
    return student > m ? false:true;
}


int allocateBooks(vector<int> &arr, int n , int m ){     // O(nlog(sum of pages))
    if(m>n){
        return -1;
    }
    int sum = 0;
    for (int i =0;i<n;i++){       // O(n)
        sum += arr[i];
    }

    int student = 0, end=sum;       // range of possible answers

    while(student <= end){           // O(log(sum of pages))
        int mid = student + (end-student)/2;
        if (isValid(arr,n,m,mid)){         // left 
        student = mid ; end = mid-1;
        } else {         // right 
            student = mid + 1;
        }
    }
    return student;
}

int main(){
    vector<int> arr = {1, 1, 3, 4};
    int n =4,m=2;

    cout << allocateBooks(arr,n,m) << endl;
    return 0;
}
