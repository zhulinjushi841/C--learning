#include<stack>
#include<iostream>
#include<queue>
using namespace std;

//
// queue容器
// queue基本概念
// 概念：
// queue是一种先进先出(First In First Out,FIFO)的数据结构，他有两个出口
//入队push()		队列中进数据
//出队pop()		队列中出数据
// 队列容器允许从一端新增元素，从另一端移除元素
// 队列中只有队头和队尾才可以被外界使用 因此队列不允许有遍历行为 
// 队列中的最靠前的数据叫 队头(front) 队列中最靠后的数据叫 队尾(back)
//