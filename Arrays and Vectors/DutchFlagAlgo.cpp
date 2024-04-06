#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void  sort01_method2(vector<int>& nums) {
        int mid=0;
        int low=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==2){
                int temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }
            else if(nums[mid]==0){
                int temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
            }
            else{
                mid++;
            }
        }
        return;
    }

int main()
{

    vector<int> v1;

    v1.push_back(1);

    v1.push_back(1);

    v1.push_back(2);

    v1.push_back(0);

    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(2);

    display(v1);

    sort01_method2(v1);

    display(v1);

    return 0;
}