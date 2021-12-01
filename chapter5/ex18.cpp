#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream filein;
    ofstream fileout;

    int choose;
    cout<<"1. Exercise 5.4"<<endl;
    cout<<"2. Exercise 5.5"<<endl;
    cout<<"3. Exercise 5.6"<<endl;
    cout<<"4. Exercise 5.7"<<endl;
    cout<<"5. Exercise 5.8"<<endl;
    cout<<"Enter your choose (1, 2, 3, 4, 5): ";
    cin>>choose;

    switch (choose)
    {
    case 1:
        filein.open("ex5_4.txt");
        fileout.open("output.txt");

        if (filein)
        {
            int n, result;
            filein>>n;
            for (int i = 1; i <= n; i++)
            {
                result+=i*i;
            }
            fileout<<"Sum of the expression (1*1) + (2*2) + ... +(n*n) = "<<result;
            
        }else{
            cout<<"Can not open file";
            return 0;
        }
        filein.close();
        fileout.close();
        break;
    
    case 2: 
        fileout.open("output.txt");

        if (fileout)
        {
            for (int i = 48; i <= 127; i++)
            {
                fileout<<(char)i<<endl;
            }
            
        }else{
            cout<<"Can not open file. ";
            return 0;
        }
        
        fileout.close();

        break;
    
    case 3:
        filein.open("ex5_6.txt");
        fileout.open("output.txt");

        if (filein)
        {
        
        int number;
    
        filein>>number;

        if (number>=1)
        {
            for (int i = number; i >=1; i--)
            {
                fileout<<i<<" ";

            }
        
        }else{
            for (int i = number; i <=1; i++)
            {
                fileout<<i<<" ";
            }
            
        }
        }else{
            cout<<"Can not open file. ";
            return 0;
        }

        filein.close();
        fileout.close();

        break;
    
    case 4:

        filein.open("ex5_7.txt");
        fileout.open("output.txt");

        if (filein)
        {
        
        int n, sum=0;
        filein>>n;

        for (int i = 1; i <=n; i++)
        {
            if (i%2==0)
            {

                sum+=i;
                
            }
            
        }
        
        fileout<<"Sum of even numbers from 1 to "<<n<<" = "<<sum;

        }else{
            cout<<"Can not open file. ";
            return 0;
        }

        filein.close();
        fileout.close();

        break;

    case 5:
        
        filein.open("ex5_8.txt");
        fileout.open("output.txt");
        
        if (filein)
        {
            
        
        
        int n, temp=0,  product=1;
        filein>>n;
        temp=n;
        while(n != 0)
            {
                product=product*(n%10);
                n=n/10;
            }
        
        fileout<<"Product of "<<temp<<" = "<<product;
        
        }else{
            cout<<"Can not open file. ";
            return 0;
        }

        break;

        default:
        cout<<"Your choose is not valid.\nDo you want to exit? (y/n) ";
        char ch;
        cin>>ch;
        if (ch=='y')
        {
            cout<<"See you again !";
        }else{
            main();
        }
        filein.close();
        fileout.close();
    }

    return 0;
}