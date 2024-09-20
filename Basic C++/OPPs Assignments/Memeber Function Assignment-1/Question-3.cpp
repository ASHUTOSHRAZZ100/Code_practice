#include <iostream>
using namespace std;

class TestResult
{
    long roll_no, net_score, right_weightage, wrong_weightage, right, wrong;

public:
    void setdata(long roll_no, long net_score, long right_weightage, long wrong_weightage, long right, long wrong);
    long getroll_no();
    long getnet_score();
    long getright_weightage();
    long getwrong_weightage();
    long getright();
    long getwrong();
};
void TestResult::setdata(long roll_no1, long net_score1, long right_weightage1, long wrong_weightage1, long right1, long wrong1)
{
    roll_no = roll_no1;
    net_score = net_score1;
    right_weightage = right_weightage1;
    wrong_weightage = wrong_weightage1;
    right = right1;
    wrong = wrong1;
}
long TestResult::getroll_no()
{
    return roll_no;
}

long TestResult::getnet_score()
{
    return net_score;
}
long TestResult::getright_weightage()
{
    return right_weightage;
}
long TestResult::getwrong_weightage()
{
    return wrong_weightage;
}
long TestResult::getright()
{
    return right;
}
long TestResult::getwrong()
{
    return wrong;
}

int main()
{
    TestResult t[5];

    for (int i = 0; i < 5; i++)
    {
        long roll_no,net_score,right_weightage,wrong_weightage,right,wrong;
        cout<<"Enter Rool Number"<<endl;
        cin>>roll_no;
        cout<<"Enter Net Score"<<endl;
        cin>>net_score;
        cout<<"Enter Right weightage"<<endl;
        cin>>right_weightage;
        cout<<"Enter Wrong Weightage"<<endl;
        cin>>wrong_weightage;
        cout<<"Enter Right"<<endl;
        cin>>right;
        cout<<"Enter Wrong"<<endl;
        cin>>wrong;
        t[i].setdata(roll_no,net_score,right_weightage,wrong_weightage,right,wrong);
    }
    cout<<"Display All data"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Rool Number = "<<t[i].getroll_no()<<endl;
        cout<<"Net Score = "<<t[i].getnet_score()<<endl;
        cout<<"Right weightage = "<<t[i].getright_weightage()<<endl;
        cout<<"Wrong Weightage = "<<t[i].getwrong_weightage()<<endl;
        cout<<"Right = "<<t[i].getright()<<endl;
        cout<<"Wrong = "<<t[i].getwrong()<<endl;
    }

    return 0;
}