#include <iostream>
using namespace ::std;

float nilai,nilai_uts,nilai_uas,nilai_tugas,nilai_absen;

double input (string ok)
{
    double nilai;
    cout<<"input nilai "<<ok<<" :"; cin>>nilai;
    return nilai;
}

double grade (double nilai)
{
    if (nilai>80)
    {
        cout<<"\nA";
    }
    else if (nilai>60)
    {
        cout<<"\nB";
    }
    else if (nilai>80)
    {
        cout<<"\nC";
    }
    else if (nilai>40)
    {
        cout<<"\nC";
    }
    else if (nilai>20)
    {
        cout<<"\nD";
    }
    else
    {
        cout<<"E";
    }
}

struct mhs
{
    float nilai,nilai_uts,nilai_uas,nilai_tugas,nilai_absen;
}m;

main()
{
    double uts,uas,tugas,absen,nilai;
    cout<<"==============================================MENGHITUNG NILAI============================================"<<endl;
    uts=input("UTS");
    uas=input("UAS");
    tugas=input("Tugas");
    absen=input("Absen");
        m.nilai_uts=uts*0.2;
        m.nilai_uas=uas*0.3;
        m.nilai_tugas=tugas*0.35;
        m.nilai_absen=absen*0.15;
        m.nilai=m.nilai_uts+m.nilai_uas+m.nilai_tugas+m.nilai_absen;
        cout<<"nilai anda :"<<m.nilai;
        grade(m.nilai);
}
