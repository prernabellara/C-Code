#include<stdio.h>
#include<iostream>
#include<stack>

std::stack<int> enq;
std::stack<int> deq;

void push(int i)
{
        enq.push(i);
}
void pop()
{
        if(deq.empty())
        {
                while(!enq.empty())
                {
                        int i=enq.top();
                        deq.push(i);
                        enq.pop();
                }
                while(!deq.empty())
                {
                        int i=deq.top();
                        enq.push(i);
                        deq.pop();
                }

        }

//      deq.pop();
}
int main()
{
        push(5);
        push(6);
        push(1);
        push(3);

        pop();
        push(2);
        pop();
        std::cout<<"Printing the stack"<<std::endl;
        while(!enq.empty())
        {
                std::cout<<enq.top()<<std::endl;
                enq.pop();
        }
        return 1;
}
