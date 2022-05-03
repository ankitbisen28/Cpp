#include <iostream>

using namespace std;

class  Langmarks 
{
    protected:
        int l1, l2;
    
    public:
        void getlangmarks()
        {
            cout << "Language Mark 1: ";
            cin >> l1;
            cout << "Language Mark 2: ";
            cin >> l2;
        }

        void putlangmark()
        {
            cout << "\n Language Mark obtained \n";
            cout << "\t Language Mark 1: " << l1 << endl;
            cout << "\t Language Mark 2: " << l2;
        }
};

class Submarks 
{
    protected:
        int s1, s2, s3;
    
    public:
        void getsubmarks()
        {
            cout << "Subject mark 1: ";
            cin >> s1;
            cout << "Subject mark 2: ";
            cin >> s2;
            cout << "Subject mark 3: ";
            cin >> s3;
        }
        void putsubmarks()
        {
            cout << "\n Subject Marks Obtained\n";
            cout << "\t Subject Marks 1: " << s1 << endl;
            cout << "\t Subject Marks 2: " << s2 << endl;
            cout << "\t Subject Marks 2: " << s2 << endl;
        }
};

class Result : public Langmarks, public Submarks
{
    int tot;
    public:
    void display()
    {
        tot = l1 + l2 + s1 + s2 + s3;
        putlangmark();
        putsubmarks();
        cout << "\n Total Marks :" << tot;
    }
};

int main()
{
    Result obj;
    obj.getlangmarks();
    obj.getsubmarks();
    obj.display();
    return 0;
}