#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void isPali(int n1)
    {
        QVector<int>ve1;
        int nN1 = n1, nN2=n1, si1=0,j1=0;
        while(nN1!=0)
        {   si1++; nN1/=10; }
        ve1.resize(si1);
        while(nN2!=0)
        {   ve1[si1-1-j1]=nN2%10; j1++; nN2/=10;    }
        QString st1;
        for(int i1=0;i1<si1;i1++)
        {
            if(ve1[i1] == ve1[si1-i1-1])
            {   st1 = "is Palindr.  ";     }
            else
            {   st1 = "is NOT a P.";    }
        }
        qDebug() << n1 << st1;
    }



};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.isPali(78687);
    s1.isPali(98546);
    s1.isPali(1456541);

    for(int i1=1;i1<20;i1++)
    {



    }
    return a.exec();
}
