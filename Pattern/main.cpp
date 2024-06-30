#include <iostream>

using namespace std;

int main()
{
    int size=5;

    cout<<"Square Pattern: "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    int n;
    cout<<"Enter Square Pattern Length: ";
    cin>>n;


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Pyramid Pattern: "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Number Pyramid Pattern: "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<< " ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Number Pyramid Pattern: "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<< " ";
        }
        cout<<endl;
    }
    cout<<endl;

    int l=9;
    int h=4;

    cout<<"Rectangle Pattern: "<<endl;
    for(int i=0;i<h;i++){
        for(int j=0;j<l;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Right Pyramid Pattern: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
           cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Inverted Pyramid Pattern: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
           cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Number Pattern: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Number Pattern: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Number Pattern: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Number Pattern: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Number Pyramid Pattern: "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Number Inverted Pyramid Pattern: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int a=1;

    cout<<"Continuous Number Pyramid Pattern: "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Continuous Number Pyramid Pattern: "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Continuous Number Pyramid Pattern: "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Number Pyramid Pattern: "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Character Pattern: "<<endl;
    for(int i=0;i<=n;i++){
        char ch='A';
        for(int j=0;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    cout<<endl;



    return 0;
}
