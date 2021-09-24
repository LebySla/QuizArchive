#include <iostream>
using namespace std;

typedef class Node{
private:
    int data;
    Node * left;
    Node * right;
public:
    ~Node(){
        delete left;
        delete right;
    }
}node;

int main(int argc, char * argv[]){
    return 0;
}
