#include <iostream>
using namespace std;

class TestResult
{
    long roll_no, net_score, right_weightage, wrong_weightage, right, wrong;

public:
    void setroll_no(int value);
    void setnet_score(int value);
    void setright_weightage(int value);
    void setwrong_weightage(int value);
    void setright(int value);
    void setwrong(int value);

    long getroll_no();
    long getnet_score();
    long getright_weightage();
    long getwrong_weightage();
    long getright();
    long getwrong();
};

void TestResult::setroll_no(int value) { roll_no = value; }
void TestResult::setnet_score(int value) { net_score = value; }
void TestResult::setright_weightage(int value) { right_weightage = value; }
void TestResult::setwrong_weightage(int value) { wrong_weightage = value; }
void TestResult::setright(int value) { right = value; }
void TestResult::setwrong(int value) { wrong = value; }

long TestResult::getroll_no() { return roll_no; }
long TestResult::getnet_score() { return net_score; }
long TestResult::getright_weightage() { return right_weightage; }
long TestResult::getwrong_weightage() { return wrong_weightage; }
long TestResult::getright() { return right; }
long TestResult::getwrong() { return wrong; }

int main()
{
    TestResult t[5];
    TestResult temp;

    for (int i = 0; i < 5; i++)
    {
        long roll_no, net_score, right_weightage, wrong_weightage, right, wrong;
        cout << "Enter Rool Number" << endl;
        cin >> roll_no;
        cout << "Enter Net Score" << endl;
        cin >> net_score;
        cout << "Enter Right weightage" << endl;
        cin >> right_weightage;
        cout << "Enter Wrong Weightage" << endl;
        cin >> wrong_weightage;
        cout << "Enter Right" << endl;
        cin >> right;
        cout << "Enter Wrong" << endl;
        cin >> wrong;

        t[i].setroll_no(roll_no);
        t[i].setnet_score(net_score);
        t[i].setright_weightage(right_weightage);
        t[i].setwrong_weightage(wrong_weightage);
        t[i].setright(right);
        t[i].setwrong(wrong);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (t[i].getnet_score() > t[j].getnet_score())
            {
                temp.setroll_no(t[i].getroll_no());
                temp.setnet_score(t[i].getnet_score());
                temp.setright_weightage(t[i].getright_weightage());
                temp.setwrong_weightage(t[i].getwrong_weightage());
                temp.setright(t[i].getright());
                temp.setwrong(t[i].getwrong());

                t[i].setroll_no(t[j].getroll_no());
                t[i].setnet_score(t[j].getnet_score());
                t[i].setright_weightage(t[j].getright_weightage());
                t[i].setwrong_weightage(t[j].getwrong_weightage());
                t[i].setright(t[j].getright());
                t[i].setwrong(t[j].getwrong());

                t[j].setroll_no(temp.getroll_no());
                t[j].setnet_score(temp.getnet_score());
                t[j].setright_weightage(temp.getright_weightage());
                t[j].setwrong_weightage(temp.getwrong_weightage());
                t[j].setright(temp.getright());
                t[j].setwrong(temp.getwrong());
            }
        }
    }

    cout<<"--- Display All data ----"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"----- "<<i<<" ----------"<<endl;
        cout<<"Rool Number = "<<t[i].getroll_no()<<endl;
        cout<<"Net Score = "<<t[i].getnet_score()<<endl;
        cout<<"Right weightage = "<<t[i].getright_weightage()<<endl;
        cout<<"Wrong Weightage = "<<t[i].getwrong_weightage()<<endl;
        cout<<"Right = "<<t[i].getright()<<endl;
        cout<<"Wrong = "<<t[i].getwrong()<<endl<<endl<<endl;
    }
    return 0;
}