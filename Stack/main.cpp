#include <iostream>

using namespace std;

class MyStack{
    int Stack[100],Top,MaxSize;

public:

    MyStack(int Size=100){
        MaxSize=Size;
        Top=0;
    }
    bool isEmpty(){
        return (Top==0);
    }

    bool isFull(){
        return (Top==MaxSize);
    }

    bool push(int Element){
        if(isFull()){
            cout<<"Stack Is Full"<<endl;
            return false;
        }else{
            Stack[Top++]=Element;
            return true;
        }
    }

    bool pop(){
        if(isFull()){
            cout<<"Stack Is Empty"<<endl;
            return false;
        }else{
            Top--;
            return true;
        }
    }

    int getTopElement(){
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return Stack[Top-1];
    }

    void show(){
        if(isFull()){
            cout<<"Stack Is Empty"<<endl;
            return;
        }else{
            for(int i=Top-1;i>=0;i--){
                cout<<Stack[i]<<endl;
            }
        }
    }

};

int main()
{
    MyStack ms;

    ms.push(10);
	ms.push(20);
	ms.push(30);
	ms.push(40);

	ms.pop();

	ms.show();

	cout<<ms.isEmpty();
	cout<<ms.isFull();
	cout<<ms.getTopElement();

    return 0;
}
