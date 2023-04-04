
#include<queue>
using namespace std; 
int main() //tao 1 queue
{ 
    std::queue <int> q_data;
    q_data.push(1);
    q_data.push(2);
    q_data.push(3);
    q_data.push(4);
 
    return 0;
}
// use size()

    int length = q_data.size();
//use push pop

    q_data.push(1);
    q_data.push(2);
    q_data.push(3);
    q_data.push(4);
 
 
    q_data.pop();
    q_data.pop();
    q_data.pop();
 
 //lay gtri
 
 
    int first = q_data.front();
    int last = q_data.back();
 
 //doi gtri 2 queue
  std::queue <int> q_data;
    q_data.push(1);
    q_data.push(2);
    q_data.push(3);
    q_data.push(4);
 
    std::queue <int> q_data2;
    q_data2.push(1);
    q_data2.push(2);
    q_data2.push(3);
    q_data2.push(4);
    q_data2.push(5);
 
    q_data2.swap(q_data);
    
//https://phattrienphanmem123az.com/lap-trinh-cpp-stl/cpp-stl-tim-hieu-va-su-dung-queue.html
