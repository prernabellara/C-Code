#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

int main()
{
        int sum;
        std::cout<<"\n Enter the sum you want to find";
        std::cin>>sum;

        int a[]= {1,2,10,4,5,6,7,8,9};
        std::vector<int> arr(a,a+10);
        std::sort(arr.begin(),arr.end());

        for(int i=0;i<=10;i++)
        {
                int no=sum-a[i];
                if(std::binary_search(arr.begin(),arr.end(),no))
                        {
                                std::cout<<"found pair "<<no<<" and "<<a[i]<<std::endl;
                        }

        }


}
