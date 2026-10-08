#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
#include<windows.h>
using namespace std;

int main()
{
    int jwb1,jwb2,jwb3,jwb4,jwb5,jwb6,jwb7,jwb8,jwb9,jwb10,jwb11,jwb12,jwb13,jwb14,jwb15,jwb16,jwb17,jwb18,jwb19,jwb20;
    char nama[50],jwb;
    float a=0, b=0.2, c=0.4, d=0.6, e=0.8, f=1;
    float  gejala1=0, gejala2=0, gejala3=0, gejala4=0, gejala5=0,gejala6=0, gejala7=0, gejala8=0, gejala9=0, gejala10=0,gejala11=0,
        gejala12=0,gejala13=0,gejala14=0,gejala15=0,gejala16=0,gejala17=0,gejala18=0,gejala19=0,gejala20=0;

    awal:
    system("cls");
        cout<<"\n\n\n\n\n\n                                                                      "<<endl;
        cout<<"\t\t\t\t\t\t **********************************************************************"<<endl;
        cout<<"\t\t\t\t\t\t *                SISTEM PAKAR DIAGNOSA JENIS KULIT                   *"<<endl;
        cout<<"\t\t\t\t\t\t **********************************************************************"<<endl;
        cout<<"\t\t\t\t\t\t *                         SELAMAT DATANG                             *"<<endl;
        cout<<"\t\t\t\t\t\t *                                                                    *"<<endl;
        cout<<"\t\t\t\t\t\t **********************************************************************"<<endl;
        cout<<"\t\t\t\t\t\t Masukkan Nama Anda : ";
        cin.getline(nama,50);
        cout<<endl;
        system("cls");
        cout<<"\n\n\n\n\n\n                                                                      "<<endl;
        cout<<"\t\t\t\t\t\t Halo "<<nama<<"! Anda akan memulai tes untuk mengetahui tipe kulit anda."<<endl;
        cout<<"\t\t\t\t\t\t Silakan mengikuti intruksi berikut untuk menjawab pertanyaan dibawah ini" <<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t***********************************"<<endl;
        cout<<"\t\t\t\t\t\t\t\t* [1] Tidak tahu                  *"<<endl;
        cout<<"\t\t\t\t\t\t\t\t* [2] Tidak yakin                 *"<<endl;
        cout<<"\t\t\t\t\t\t\t\t* [3] Agak yakin                  *"<<endl;
        cout<<"\t\t\t\t\t\t\t\t* [4] Cukup yakin                 *"<<endl;
        cout<<"\t\t\t\t\t\t\t\t* [5] Yakin                       *"<<endl;
        cout<<"\t\t\t\t\t\t\t\t* [6] Sangat Yakin                *"<<endl;
        cout<<"\t\t\t\t\t\t\t\t***********************************"<<endl;
        cout<<endl<<endl;
        ul1:
        cout<<"\t\t\t\t\t\t1. Apakah kulit anda tidak berminyak?"<<endl;
        cout<<"\t\t\t\t\t\t   [1/2/3/4/5/6] : ";cin>>jwb1;
        if (jwb1!=1)
        {
            if (jwb1==1)
            {
                gejala1=a*0.8;
            }
            if (jwb1==2)
            {
                gejala1=b*0.8;
            }
            else if (jwb1==3)
            {
                gejala1=c*0.8;
            }
            else if (jwb1==4)
            {
                gejala1=d*0.8;
            }
            else if (jwb1==5)
            {
                gejala1=e*0.8;
            }
            else if (jwb1==6)
            {
                gejala1=f*0.8;
            }
            else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul1;
            }
        }

        ul2:
        cout<<"\t\t\t\t\t\t2. Apakah wajah anda segar dan halus? "<<endl;
        cout<<"\t\t\t\t\t\t   [1/2/3/4/5/6] : ";cin>>jwb2;
        if (jwb2!=1)
    {
        if (jwb2==1)
        {
            gejala2=a*0.8;
        }
        if (jwb2==2)
        {
            gejala2=b*0.8;
        }
        else if (jwb2==3)
        {
             gejala2=c*0.8;
        }
        else if (jwb2==4)
        {
             gejala2=d*0.8;
        }
        else if (jwb2==5)
        {
             gejala2=e*0.8;
        }
        else if (jwb2==6)
            {
                gejala2=f*0.8;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul2;
            }
    }
        ul3:
        cout<<"\t\t\t\t\t\t3. Apakah bahan-bahan kosmetik mudah menempel di kulit anda?"<<endl;
        cout<<"\t\t\t\t\t\t   [1/2/3/4/5/6] : ";cin>>jwb3;
        if (jwb3!=1)
    {
        if (jwb3==1)
        {
            gejala3=a*0.8;
        }
        if (jwb3==2)
        {
            gejala3=b*0.8;
        }
        else if (jwb3==3)
        {
            gejala3=c*0.8;
        }
        else if (jwb3==4)
        {
            gejala3=d*0.8;
        }
        else if (jwb3==5)
        {
            gejala3=e*0.8;
        }
        else if (jwb3==6)
            {
                gejala3=f*0.8;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul3;
            }
    }
        ul4:
        cout<<"\t\t\t\t\t\t4. Apakah Kulit anda terlihat sehat?"<<endl;
        cout<<"\t\t\t\t\t\t   [1/2/3/4/5/6] : ";cin>>jwb4;
         if (jwb4!=1)
    {
        if (jwb4==1)
        {
            gejala4=a*0.8;
        }
        if (jwb4==2)
        {
            gejala4=b*0.8;
        }
        else if (jwb4==3)
        {
            gejala4=c*0.8;
        }
        else if (jwb4==4)
        {
            gejala4=d*0.8;
        }
        else if (jwb4==5)
        {
            gejala4=e*0.8;
        }
        else if (jwb4==6)
            {
                gejala4=f*0.8;
            }
        else
            {
            cout<<"\t\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul4;
            }
    }
        ul5:
        cout<<"\t\t\t\t\t\t5. Apakah Kulit anda tidak berjerawat?"<<endl;
        cout<<"\t\t\t\t\t\t   [1/2/3/4/5/6] : ";cin>>jwb5;
        if (jwb5!=1)
    {
        if (jwb5==1)
        {
            gejala5=a*0.8;
        }
        if (jwb5==2)
        {
            gejala5=b*0.8;
        }
        else if (jwb5==3)
        {
            gejala5=c*0.8;
        }
        else if (jwb5==4)
        {
            gejala5=d*0.8;
        }
        else if (jwb5==5)
        {
            gejala5=e*0.8;
        }
        else if (jwb5==6)
            {
                gejala5=f*0.8;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul5;
            }
    }
        ul6:
        cout<<"\t\t\t\t\t\t6. Apakah Anda adalah tipe orang yang mudah memilih merk kosmetik?"<<endl;
        cout<<"\t\t\t\t\t\t   [1/2/3/4/5/6] : ";cin>>jwb6;
        if (jwb6!=1)
        {
        if (jwb6==1)
        {
            gejala6=a*0.8;
        }
        if (jwb6==2)
        {
            gejala6=b*0.8;
        }
        else if (jwb6==3)
        {
            gejala6=c*0.8;
        }
        else if (jwb6==4)
        {
            gejala6=d*0.8;
        }
        else if (jwb6==5)
        {
            gejala6=e*0.8;
        }
        else if (jwb6==6)
        {
            gejala6=f*0.8;
        }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul6;
            }
    }
        ul7:
        cout<<"\t\t\t\t\t\t7. Apakah pori-pori kulit anda besar, terutama di area hidung, pipi, dan dagu ?"<<endl;
        cout<<"\t\t\t\t\t\t   [1/2/3/4/5/6] : ";cin>>jwb7;
        if (jwb7!=1)
    {
        if (jwb7==1)
        {
            gejala7=a*0.4;
        }
        if (jwb7==2)
        {
            gejala7=b*0.4;
        }
        else if (jwb7==3)
        {
            gejala7=c*0.4;
        }
        else if (jwb7==4)
        {
            gejala7=d*0.4;
        }
        else if (jwb7==5)
        {
            gejala7=e*0.4;
        }
        else if (jwb7==6)
            {
                gejala7=f*0.4;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul7;
            }
    }
        ul8:
        cout<<"\t\t\t\t\t\t8. Apakah Kulit wajah anda terlihat mengkilat?"<<endl;
        cout<<"\t\t\t\t\t\t   [1/2/3/4/5/6] : ";cin>>jwb8;
         if (jwb8!=1)
    {
        if (jwb8==1)
        {
            gejala8=a*0.8;
        }
        if (jwb8==2)
        {
            gejala8=b*0.8;
        }
        else if (jwb8==3)
        {
            gejala8=c*0.8;
        }
        else if (jwb8==4)
        {
            gejala8=d*0.8;
        }
        else if (jwb8==5)
        {
            gejala8=e*0.8;
        }
        else if (jwb8==6)
            {
                gejala8=f*0.8;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul8;
            }
    }
        ul9:
        cout<<"\t\t\t\t\t\t9 Apakah wajah anda sering ditumbuhi jerawat?"<<endl;
        cout<<"\t\t\t\t\t\t   [1/2/3/4/5/6] : ";cin>>jwb9;
         if (jwb9!=1)
    {
        if (jwb9==1)
        {
            gejala9=a*0.8;
        }
        if (jwb9==2)
        {
            gejala9=b*0.8;

        }
        else if (jwb9==3)
        {
            gejala9=c*0.8;

        }
        else if (jwb9==4)
        {
            gejala9=d*0.8;

        }
        else if (jwb9==5)
        {
            gejala9=e*0.8;
        }
        else if (jwb9==6)
            {
                gejala9=f*0.8;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul9;
            }
    }
        ul10:
        cout<<"\t\t\t\t\t\t10. Apakah kulit wajah Anda terasa kaku dan tertarik setelah facial wash?"<<endl;
        cout<<"\t\t\t\t\t\t    [1/2/3/4/5/6] : ";cin>>jwb10;
        if (jwb10!=1)
    {
        if (jwb10==1)
        {
            gejala10=a*0.8;
        }
        if (jwb10==2)
        {
            gejala10=b*0.8;
        }
        else if (jwb10==3)
        {
            gejala10=c*0.8;
        }
        else if (jwb10==4)
        {
            gejala10=d*0.8;
        }
        else if (jwb10==5)
        {
            gejala10=e*0.8;
        }
        else if (jwb10==6)
        {
            gejala10=f*0.8;
        }
        else
        {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul10;
            }
    }
        ul11:
        cout<<"\t\t\t\t\t\t11. Apakah pori-pori anda halus?"<<endl;
        cout<<"\t\t\t\t\t\t    [1/2/3/4/5/6] : ";cin>>jwb11;
    if (jwb11!=1)
    {
        if (jwb11==1)
        {
            gejala11=a*0.6;
        }
        if (jwb11==2)
        {
            gejala11=b*0.6;
        }
        else if (jwb11==3)
        {
            gejala11=c*0.6;
        }
        else if (jwb11==4)
        {
            gejala11=d*0.6;
        }
        else if (jwb11==5)
        {
            gejala11=e*0.6;
        }
        else if (jwb11==6)
            {
                gejala11=f*0.6;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul11;
            }
    }
           ul12:
        cout<<"\t\t\t\t\t\t12. Apakah tekstur kulit wajah Anda tipis dan mudah mengelupas?"<<endl;
        cout<<"\t\t\t\t\t\t    [1/2/3/4/5/6] : ";cin>>jwb12;
    if (jwb12!=1)
    {
        if (jwb12==1)
        {
            gejala12=a*0.6;
        }
        if (jwb12==2)
        {
            gejala12=b*0.6;
        }
        else if (jwb12==3)
        {
            gejala12=c*0.6;
        }
        else if (jwb12==4)
        {
            gejala12=d*0.6;
        }
        else if (jwb12==5)
        {
            gejala12=e*0.4;
        }
        else if (jwb12==6)
            {
                gejala12=f*0.6;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul12;
            }
    }
           ul13:
    cout<<"\t\t\t\t\t\t13. Apakah kulit wajah Anda  memiliki tekstur yang tampak kasar dan kusam ?"<<endl;
    cout<<"\t\t\t\t\t\t    [1/2/3/4/5/6] : ";cin>>jwb13;
    if (jwb13!=1)
    {
        if (jwb13==1)
        {
            gejala13=a*0.8;
        }
        if (jwb13==2)
        {
            gejala13=b*0.8;
        }
        else if (jwb13==3)
        {
            gejala13=c*0.8;
        }
        else if (jwb13==4)
        {
            gejala13=d*0.8;
        }
        else if (jwb13==5)
        {
            gejala13=e*0.8;
        }
        else if (jwb13==6)
            {
                gejala13=f*0.8;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul13;
            }
    }
           ul14:
        cout<<"\t\t\t\t\t\t14. Apakah sebagian kulit Anda kelihatan berminyak pada area tertentu?"<<endl;
        cout<<"\t\t\t\t\t\t    [1/2/3/4/5/6] : ";cin>>jwb14;
    if (jwb14!=1)
    {
        if (jwb14==1)
        {
            gejala14=a*0.4;
        }
        if (jwb14==2)
        {
            gejala14=b*0.4;
        }
        else if (jwb14==3)
        {
            gejala14=c*0.4;
        }
        else if (jwb14==4)
        {
            gejala14=d*0.4;
        }
        else if (jwb14==5)
        {
            gejala14=e*0.4;
        }
        else if (jwb14==6)
            {
                gejala14=f*0.4;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul14;
            }
    }
           ul15:
        cout<<"\t\t\t\t\t\t15.  Apakah  kulit wajah Anda memiliki tekstur kulit yang kasar?"<<endl;
        cout<<"\t\t\t\t\t\t     [1/2/3/4/5/6] : ";cin>>jwb15;
    if (jwb15!=1)
    {
        if (jwb15==1)
        {
            gejala15=a*0.6;
        }
        if (jwb15==2)
        {
            gejala15=b*0.6;
        }
        else if (jwb15==3)
        {
            gejala15=c*0.6;
        }
        else if (jwb15==4)
        {
            gejala15=d*0.6;
        }
        else if (jwb15==5)
        {
            gejala15=e*0.6;
        }
        else if (jwb15==6)
            {
                gejala15=f*0.6;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul15;
            }
    }
           ul16:
        cout<<"\t\t\t\t\t\t16.  Apakah  kulit Anda kadang berjerawat?"<<endl;
        cout<<"\t\t\t\t\t\t     [1/2/3/4/5/6] : ";cin>>jwb16;
    if (jwb16!=1)
    {
        if (jwb16==1)
        {
            gejala16=a*0.4;
        }
        if (jwb16==2)
        {
            gejala16=b*0.4;
        }
        else if (jwb16==3)
        {
            gejala16=c*0.4;
        }
        else if (jwb16==4)
        {
            gejala16=d*0.4;
        }
        else if (jwb16==5)
        {
            gejala16=e*0.4;
        }
        else if (jwb16==6)
        {
            gejala16=f*0.4;
        }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul16;
            }
    }
           ul17:
        cout<<"\t\t\t\t\t\t17.  Apakah  kulit wajah anda Anda memiliki pori-pori yang lebih besar dan kulit mengkilap?"<<endl;
        cout<<"\t\t\t\t\t\t     [1/2/3/4/5/6] : ";cin>>jwb17;
    if (jwb17!=1)
    {
        if (jwb17==1)
        {
            gejala17=a*0.6;
        }
        if (jwb17==2)
        {
            gejala17=b*0.6;
        }
        else if (jwb17==3)
        {
            gejala17=c*0.6;
        }
        else if (jwb17==4)
        {
            gejala17=d*0.6;
        }
        else if (jwb17==5)
        {
            gejala17=e*0.6;
        }
        else if (jwb17==6)
            {
                gejala17=f*0.6;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul17;
            }
    }
           ul18:
        cout<<"\t\t\t\t\t\t18. Apakah setelah penggunaan skincare kulit wajah Anda terasa gatal atau perih?"<<endl;
        cout<<"\t\t\t\t\t\t    [1/2/3/4/5/6] : ";cin>>jwb18;
    if (jwb18!=1)
    {
        if (jwb18==1)
        {
            gejala18=a*0.8;
        }
        if (jwb18==2)
        {
            gejala18=b*0.8;
        }
        else if (jwb18==3)
        {
            gejala18=c*0.8;
        }
        else if (jwb18==4)
        {
            gejala18=d*0.8;
        }
        else if (jwb18==5)
        {
            gejala18=e*0.8;
        }
        else if (jwb18==6)
            {
                gejala18=f*0.8;
            }
        else
            {
            cout<<"\t jawaban tidak sesuai"<<endl;
            goto ul18;
            }
    }
           ul19:
        cout<<"\t\t\t\t\t\t19. Apakah kulit wajah Anda mudah mengalami iritasi dan breakout?"<<endl;
        cout<<"\t\t\t\t\t\t    [1/2/3/4/5/6] : ";cin>>jwb19;
    if (jwb19!=1)
    {
        if (jwb19==1)
        {
            gejala19=a*0.8;
        }
        if (jwb19==2)
        {
            gejala19=b*0.8;
        }
        else if (jwb19==3)
        {
            gejala19=c*0.8;
        }
        else if (jwb19==4)
        {
            gejala19=d*0.8;
        }
        else if (jwb19==5)
        {
            gejala19=e*0.8;
        }
        else if (jwb19==6)
            {
                gejala19=f*0.8;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul19;
            }
    }
           ul20:
        cout<<"\t\t\t\t\t\t20. Apakah kulit wajah Anda mudah muncul ruam merah?"<<endl;
        cout<<"\t\t\t\t\t\t    [1/2/3/4/5/6] : ";cin>>jwb20;
    if (jwb20!=1)
    {
        if (jwb20==1)
        {
            gejala20=a*0.8;
        }
        if (jwb20==2)
        {
            gejala20=b*0.8;
        }
        else if (jwb20==3)
        {
            gejala20=c*0.8;
        }
        else if (jwb20==4)
        {
            gejala20=d*0.8;
        }
        else if (jwb20==5)
        {
            gejala20=e*0.8;
        }
        else if (jwb20==6)
            {
                gejala20=f*0.8;
            }
        else
            {
            cout<<"\t\t\t\t\t\t   jawaban tidak sesuai"<<endl;
            goto ul20;
            }
    }


    system("cls");

    float KN1,KN2,KN3,KN4,KN5,KN6,KK1,KK2,KK3,KK4,KK5,KB1,KB2,KB3,KS1,KS2,KS3,KC1,KC2,KC3,KC4;

    //PERHITUNGAN Kulit Normal
    KN1=((gejala1+gejala2)*(1-gejala1));
    KN2=((KN1+gejala3)*(1- KN1));
    KN3=((KN2+gejala4)*(1- KN2));
    KN4=((KN3+gejala5)*(1- KN3));
    KN5=((KN4+gejala6)*(1- KN4));
    KN6=((KN5+gejala11)*(1- KN5));

    //PERHITUNGAN Kulit Kering
    KK1=((gejala1+gejala5)*(1-gejala1));
    KK2=((KK1+gejala10)*(1- KK1));
    KK3=((KK2+gejala11)*(1- KK2));
    KK4=((KK3+gejala12)*(1- KK3));
    KK5=((KK4+gejala13)*(1- KK4));

    //PERHITUNGAN Kulit Berminyak
    KB1=((gejala7+gejala8)*(1-gejala7));
    KB2=((KB1+gejala9)*(1- KB1));
    KB3=((KB2+gejala16)*(1- KB2));

    //PERHITUNGAN Kulit Sensitif
    KS1=(gejala12+gejala18*(1-gejala12));
    KS2=((KS1+gejala19)*(1- KS1));
    KS3=((KS2+gejala20)*(1- KS2));

    //PERHITUNGAN Kulit Kombinasi
    KC1=((gejala7+gejala14)*(1-gejala7));
    KC2=((KC1+gejala15)*(1- KC1));
    KC3=((KC2+gejala16)*(1- KC2));
    KC4=((KC3+gejala17)*(1- KC3));



        cout<<"\n\n\n\n\n\n                                                                      "<<endl;
        cout<<"\t\t\t\t\t\t***********************************************************************"<<endl;
        cout<<"\t\t\t\t\t\t                  Hasil Diagnosa Tipe Kulit Anda                      "<<endl;
        cout<<"\t\t\t\t\t\t***********************************************************************"<<endl;
        cout<<"\t\t\t\t\t\t    KULIT NORMAL     : "<<KN6*100<<"%                       "<<endl;
        cout<<"\t\t\t\t\t\t    KULIT KERING     : "<<KK5*100<<"%                       "<<endl;
        cout<<"\t\t\t\t\t\t    KULIT BERMINYAK  : "<<KB3*100<<"%                       "<<endl;
        cout<<"\t\t\t\t\t\t    KULIT SENSITIF   : "<<KS3*100<<"%                       "<<endl;
        cout<<"\t\t\t\t\t\t    KULIT KOMBINASI  : "<<KC4*100<<"%                       "<<endl;
        cout<<"\t\t\t\t\t\t***********************************************************************"<<endl;
        cout<<endl<<endl;
        if(KN6>KK4 && KN6>KB3 && KN6>KS3 && KN6>KC4 )
        {
            cout<<"\t\t\t\t\t\tJenis Kulit Anda adalah Normal dengan Persentase : "<<KN6*100<<"%"<<endl;
            cout<<"\n                                                                              "<<endl;
            cout<<"\t\t\t\t\t\tSolusi dari permasalahan kulit anda ialah      :"<<endl;
            cout<<"\t\t\t\t\t\t1. Membersihkan wajah cukup dengan air, ketika kulit wajah dalam keadaan tanpa make up. "<<endl;
            cout<<"\t\t\t\t\t\t2. Jika kulit wajah dalam keadaan bermakeup, bisa dibersihkan menggunakan milk cleanser, faKK tonic dan facial foam. "<<endl;
            cout<<"\t\t\t\t\t\t3. Ketika musim panas bisa menggunakan faKK tonic dan krim pelembab, karena di musim panas kulit normal akan terasa agak kering.   "<<endl;
            cout<<"\t\t\t\t\t\t4. Perawatan facial di klinik kecantikan diperlukan sewaktu-waktu saja, cukup 1 kali dalam 3 bulan."<<endl;
            cout<<"\t\t\t\t\t\t5. Menggunakan krim tabir surya untuk melindungi dari panas sinar matahari."<<endl;
        }
        else if(KK4>KN6 && KK4>KB3 && KK4>KS3 && KK4>KC4 )
        {
           cout<<"\t\t\t\t\t\tJenis Kulit Anda adalah Kering dengan Persentase : "<<KK4*100<<"%"<<endl;
           cout<<"\n                                                                              "<<endl;
           cout<<"\t\t\t\t\t\tSolusi dari permasalahan kulit anda ialah      :"<<endl;
           cout<<"\t\t\t\t\t\t1. Gunakan krim pelembap sesering mungkin, baik pada siang maupun malam hari."<<endl;
           cout<<"\t\t\t\t\t\t2. Gunakan tabir surya pada siang hari, karena kulit kering ini sangat mudah terkena flek kecokelatan. "<<endl;
           cout<<"\t\t\t\t\t\t3. Jangan terlalu sering menggunakan sabun wajah. "<<endl;
        }
        else if(KB3>KN6 && KB3>KK4 && KB3>KS3 && KB3>KC4 )
        {
            cout<<"\t\t\t\t\t\tJenis Kulit Anda adalah Berminyak dengan Persentase : "<<KB3*100<<"%"<<endl;
            cout<<"\n                                                                              "<<endl;
            cout<<"\t\t\t\t\t\tSolusi dari permasalahan kulit anda ialah      :"<<endl;
            cout<<"\t\t\t\t\t\t1. Membersihkan wajah menggunakan facial foam, kemudian dibilas sampai bersih."<<endl;
            cout<<"\t\t\t\t\t\t2. Setelah mencuci wajah, gunakan faKK tonic."<<endl;
        }

        else if(KS3>KN6 && KS3>KK4 && KS3>KB3 && KS3>KC4 )
        {
            cout<<"\t\t\t\t\t\tJenis Kulit Anda adalah Sensitif dengan Persentase : "<<KS3*100<<"%"<<endl;
            cout<<"\n                                                                              "<<endl;
            cout<<"\t\t\t\t\t\tSolusi dari permasalahan kulit anda ialah      :"<<endl;
            cout<<"\t\t\t\t\t\tBerdasarkan gejalanya, perawatan kulit sensitif ditujukan untuk melindungi kulit"<<endl;
            cout<<"\t\t\t\t\t\tserta mengurangi dan menanggulangi iritasi. Kulit sensitif tidak dapat diamati secara langsung,  "<<endl;
            cout<<"\t\t\t\t\t\tdiperlukan bantuan dokter kulit atau dermatolog untuk memeriksanya dalam tes alergi imunologi.   "<<endl;
            cout<<"\t\t\t\t\t\tApabila dideteksi alergi, maka biasanya pasien akan  diberi beberapa allergen untuk mengetahui kadar sensitivitas kulit."<<endl;
        }
        else if(KC4>KN6 && KC4>KK4 && KC4>KB3 && KC4>KS3 )
        {
           cout<<"\t\t\t\t\t\tJenis Kulit Anda adalah Kombinasi dengan Persentase : "<<KC4*100<<"%"<<endl;
           cout<<"\n                                                                              "<<endl;
           cout<<"\t\t\t\t\t\tSolusi dari permasalahan kulit anda ialah      :"<<endl;
           cout<<"\t\t\t\t\t\t1. Gunakan selalu facial foam, milk cleanser dan faKK tonic."<<endl;
           cout<<"\t\t\t\t\t\t2. Lakukan perawatan facial di salon kecantikan sebulan sekali."<<endl;
           cout<<"\t\t\t\t\t\t3. Oleskan tipis-tipis krim atau lotion penKKgah komedo pada malam hari."<<endl;
        }

}

