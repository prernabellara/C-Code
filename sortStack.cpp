
#include<stdio.h>
#include<iostream>
#include <stack>

std::stack<int> mystack;
std::stack<int> minstack;
std::stack<int>temp;
std::stack<int> maxstack;
void push(int i)
{
        if(mystack.empty())
        {
            minstack.push(i);
        }
        else
        {
            if(i<mystack.top())
            {
                minstack.push(i);
            }
            else if (i>mystack.top())
{
                        if(maxstack.empty()==true)
                                maxstack.push(i);

                        else if(i>maxstack.top())
                        {
                                while(!maxstack.empty() && i>maxstack.top())

                                {
                                        temp.push(maxstack.top());
                                        maxstack.pop();
                                }

                                maxstack.push(i);
                                while(!temp.empty())
                                {       maxstack.push(temp.top());
                                        temp.pop();
                                }
                        }
        }
        }    mystack.push(i);
}

void pop()
{
        std::cout<<"popping elements";
        if(mystack.top()==minstack.top())
        {
                minstack.pop();
        }
        mystack.pop();
}
int main()
{
    push(5);
    push(2);
    push(6);
    push(1);
    push(7);
        std::cout<<"printing the min stack"<<std::endl;
        while(!minstack.empty())
        {
                        std::cout<<' '<<minstack.top()<<std::endl;
            minstack.pop();
        }
                while(!maxstack.empty())
        {
                        std::cout<<' '<<maxstack.top()<<std::endl;
            maxstack.pop();
        }
    return 1;

}

