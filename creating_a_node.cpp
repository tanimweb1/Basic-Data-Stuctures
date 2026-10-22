#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
int value;
Node * next;





};

int main(){

Node a,b,c;
a.value = 10;
b.value = 20;
c.value = 30;

a.next = &b;
b.next = &c;
c.next = NULL;

cout<<a.value<<endl;
cout<<a.next->next->value<<endl;



    return 0;
}



//using constructor 

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

Node(int value){
this->value = value;
this->next = NULL;
}
};

int main()
{

    Node a(10), b(20), c(30);
    a.next = &b;
    b.next = &c;
    cout << a.value << endl;
    cout<<a.next->value<<endl;
    cout << a.next->next->value << endl;

    return 0;
}
