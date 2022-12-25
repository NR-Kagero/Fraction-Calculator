#include "Fraction.h"
#include "FractionCalculator.h"
void FractionCalculator::Start()
{
    Fraction Fr1,Fr2,Fr3;
    int C,s;
    bool d=0,f=0;
    while(f!=1)
    {
        cout<<"Welcome to FCI Calculator"<<"\n"
            <<"----------------------------------------"<<"\n"
            <<"1- Perform Addition \n2- Perform Subtraction \n"
            <<"3- Perform Multiplication \n4- Perform Division \n"\
            <<"5- Compare 2 fractions \n6- Exit\n";
        cin>>C;
        switch(C)
        {
        case 1:
            if (d==1)
            {
                cout<<"Do you want to perform this operation on the old ("<<Fr3<<") ?\n1- Yes\n2- NO\n";
                cin>>s;
                if(s==1)
                {
                    cout<<Fr3<<" + ";
                    cin>>Fr2;
                    Fr1=Fr3;
                    Fr3=Fr1+Fr2;
                    cout<<Fr1<<" + "<<Fr2<<" = "<<Fr3<<endl;
                }
                else
                {
                    cout<<"Enter the first Fraction : ";
                    cin>>Fr1;
                    cout<<"Enter the second Fraction : ";
                    cin>>Fr2;
                    Fr3=Fr1+Fr2;
                    d=1;
                    cout<<Fr1<<" + "<<Fr2<<" = "<<Fr3<<endl;
                }
            }
            else
            {
                cout<<"Enter the first Fraction : ";
                cin>>Fr1;
                cout<<"Enter the second Fraction : ";
                cin>>Fr2;
                Fr3=Fr1+Fr2;
                d=1;
                cout<<Fr1<<" + "<<Fr2<<" = "<<Fr3<<endl;
            }
            break;
        case 2:
            if (d==1)
            {
                cout<<"Do you want to perform this operation on the old ("<<Fr3<<") ?\n1- Yes\n2- NO\n";
                cin>>s;
                if(s==1)
                {
                    cout<<"Which order do you want ? \n1- "<<Fr3<<" - new fraction \n2- new fraction - "<<Fr3<<endl;
                    cin>>s;
                    if(s==1)
                    {
                        cout<<Fr3<<" - ";
                        cin>>Fr2;
                        Fr1=Fr3;
                        Fr3=Fr1-Fr2;
                        cout<<Fr1<<" - "<<Fr2<<" = "<<Fr3<<endl;
                    }
                    else
                    {
                        cin>>Fr1;
                        Fr2=Fr3;
                        Fr3=Fr1-Fr2;
                        cout<<Fr1<<" - "<<Fr2<<" = "<<Fr3<<endl;
                    }
                }
                else
                {
                    cout<<"Enter the first Fraction : ";
                    cin>>Fr1;
                    cout<<"Enter the second Fraction : ";
                    cin>>Fr2;
                    Fr3=Fr1-Fr2;
                    d=1;
                    cout<<Fr1<<" - "<<Fr2<<" = "<<Fr3<<endl;
                }
            }
            else
            {
                cout<<"Enter the first Fraction : ";
                cin>>Fr1;
                cout<<"Enter the second Fraction : ";
                cin>>Fr2;
                Fr3=Fr1-Fr2;
                d=1;
                cout<<Fr1<<" - "<<Fr2<<" = "<<Fr3<<endl;
            }
            break;
        case 3:
            if (d==1)
            {
                cout<<"Do you want to perform this operation on the old ("<<Fr3<<") ?\n1- Yes\n2- NO\n";
                cin>>s;
                if(s==1)
                {
                    cout<<Fr3<<" * ";
                    cin>>Fr2;
                    Fr1=Fr3;
                    Fr3=Fr1*Fr2;
                    cout<<Fr1<<" * "<<Fr2<<" = "<<Fr3<<endl;
                }
                else
                {
                    cout<<"Enter the first Fraction : ";
                    cin>>Fr1;
                    cout<<"Enter the second Fraction : ";
                    cin>>Fr2;
                    Fr3=Fr1*Fr2;
                    d=1;
                    cout<<Fr1<<" * "<<Fr2<<" = "<<Fr3<<endl;
                }
            }
            else
            {
                cout<<"Enter the first Fraction : ";
                cin>>Fr1;
                cout<<"Enter the second Fraction : ";
                cin>>Fr2;
                Fr3=Fr1*Fr2;
                d=1;
                cout<<Fr1<<" * "<<Fr2<<" = "<<Fr3<<endl;
            }
            break;
        case 4:
            if (d==1)
            {
                cout<<"Do you want to perform this operation on the old ("<<Fr3<<") ?\n1- Yes\n2- NO\n";
                cin>>s;
                if(s==1)
                {
                    cout<<"Which order do you want ? \n1- "<<Fr3<<" - new fraction \n2- new fraction - "<<Fr3<<endl;
                    cin>>s;
                    if(s==1)
                    {
                        cout<<Fr3<<" / ";
                        cin>>Fr2;
                        Fr1=Fr3;
                        Fr3=Fr1/Fr2;
                        cout<<Fr1<<" / "<<Fr2<<" = "<<Fr3<<endl;
                    }
                    else
                    {
                        cin>>Fr1;
                        Fr2=Fr3;
                        Fr3=Fr1/Fr2;
                        cout<<Fr1<<" / "<<Fr2<<" = "<<Fr3<<endl;
                    }
                }
                else
                {
                    cout<<"Enter the first Fraction : ";
                    cin>>Fr1;
                    cout<<"Enter the second Fraction : ";
                    cin>>Fr2;
                    Fr3=Fr1/Fr2;
                    d=1;
                    cout<<Fr1<<" / "<<Fr2<<" = "<<Fr3<<endl;
                }
            }
            else
            {
                cout<<"Enter the first Fraction : ";
                cin>>Fr1;
                cout<<"Enter the second Fraction : ";
                cin>>Fr2;
                Fr3=Fr1/Fr2;
                d=1;
                cout<<Fr1<<" / "<<Fr2<<" = "<<Fr3<<endl;
            }
            break;
        case 5:
            if (d==1)
            {
                cout<<"Do you want to perform this operation on the old ("<<Fr3<<") ?\n1- Yes\n2- NO\n";
                cin>>s;
                if(s==1)
                {
                    cin>>Fr2;
                    Fr1=Fr3;
                    if(Fr1.getResult()>Fr2.getResult())
                    {
                        cout<<Fr1<<" > "<<Fr2<<endl;
                    }
                    else if(Fr1.getResult()==Fr2.getResult())
                    {
                        cout<<Fr1<<" = "<<Fr2<<endl;
                    }
                    else
                    {
                        cout<<Fr2<<" > "<<Fr1<<endl;
                    }
                }
                else
                {
                    cout<<"Enter the first Fraction : ";
                    cin>>Fr1;
                    cout<<"Enter the second Fraction : ";
                    cin>>Fr2;
                    if(Fr1.getResult()>Fr2.getResult())
                    {
                        cout<<Fr1<<" > "<<Fr2<<endl;
                    }
                    else if(Fr1.getResult()==Fr2.getResult())
                    {
                        cout<<Fr1<<" = "<<Fr2<<endl;
                    }
                    else
                    {
                        cout<<Fr2<<" > "<<Fr1<<endl;
                    }
                }
            }
            else
            {
                cout<<"Enter the first Fraction : ";
                cin>>Fr1;
                cout<<"Enter the second Fraction : ";
                cin>>Fr2;
                if(Fr1.getResult()>Fr2.getResult())
                {
                    cout<<Fr1<<" > "<<Fr2<<endl;
                }
                else if(Fr1.getResult()==Fr2.getResult())
                {
                    cout<<Fr1<<" = "<<Fr2<<endl;
                }
                else
                {
                    cout<<Fr2<<" > "<<Fr1<<endl;
                }
            }
        break;
    case 6:
        cout<<"Thank you for using FCI Fraction calculator "<<endl;
        f=1;
        break;
    default :
        cout<<"Wrong choice !\n";
        break;
    }
}
}
