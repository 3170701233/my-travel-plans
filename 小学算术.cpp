#include "iostream"
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
int main()
{
    system("color 94"); 
  cout<<endl;
  cout<<"**************************Сѧ��ѧ������������****************************"<<endl;
  cout<<endl;
  cout<<endl;
Again:
  double Ques1=1;
  int Ques01;
  int Ques2=1;
  int Ques3=100;
  char Ques4;
  int Ques5=0;
  char Ques6='n';
  char Ques7='n';
  double ans=0;
  int right=0;
  cout<<"                      һ.��������Ŀ������";
  cin>>Ques1;
  Ques01=floor(Ques1);
  //    cout<<"������ÿ�д�ӡ��Ŀ����1-5����";
  //    cin>>Ques2;
  cout<<"                      ��.��������ʽ����ֵ�����ֵ��";
  cin>>Ques3;
cout<<"`````````````````````````````````````````````````````````````````````````"<<endl;
      cout<<"��ʼ���⣺"<<endl;
      srand(time(NULL));
          while(1)
          {
              if(Ques1<1)
              {
                  cout<<"��������������������Ŀ����:";
                  cin>>Ques1;
                  Ques01=floor(Ques1);
              }
              else
              {
                  for(int j=0; j<Ques01; j++)
                  {
                      if(j!=0&&j%Ques2==0)
                      {
                          for(int i=0; i<Ques5; i++)
                          {
                              cout<<endl;
                          }
                      }
                      int num1=rand()%Ques3;
                      int  num2=rand()%Ques3;
                      int sign=rand()%4;
                      switch(sign)
                      {
                      case 0:
                          cout<<j+1<<":"<<" "<<num1<<"+"<<num2<<"="<<"  ";
                          cin>>ans;
                          if(ans==num1+num2)
                          {
                              cout<<"��ȷ"<<endl;
                              right++;
                          }
                          else
                          {
                              cout<<"����ˣ�"<<endl;
                              cout<<"��ȷ���ǣ�"<<num1+num2<<endl;
                          }
                          break;
                      case 1:
                          if(Ques7=='y')
                          {
                              cout<<j+1<<":"<<" "<<num1<<"-"<<num2<<"="<<"  ";
                              cin>>ans;
                              if(ans==num1-num2)                             {
                                  cout<<"��ȷ"<<endl;
                                  right++;
                              }
                              else
                              {
                                  cout<<"����ˣ�"<<endl;
                                  cout<<"��ȷ���ǣ�"<<num1-num2<<endl;
                              }
                          }
                          else
                          {
                              if(num1>num2)
                              {
                                  cout<<j+1<<":"<<" "<<num1<<"-"<<num2<<"="<<"  ";
                                  cin>>ans;
                                  if(ans==num1-num2)
                                  {
                                      cout<<"��ȷ"<<endl;
                                      right++;
                                  }
                                  else
                                  {
                                      cout<<"����ˣ�"<<endl;
                                      cout<<"��ȷ���ǣ�"<<num1-num2<<endl;
                                  }
                              }
                              else
                              {
                                  cout<<j+1<<":"<<" "<<num2<<"-"<<num1<<"="<<"  ";
                                  cin>>ans;
                                  if(ans==num2-num1)
                                  {
                                      cout<<"��ȷ"<<endl;
                                      right++;
                                  }
                                  else
                                  {
                                      cout<<"����ˣ�"<<endl;
                                      cout<<"��ȷ���ǣ�"<<num2-num1<<endl;
                                  }
                              }
                          }
                          break;
                      case 2:
                          cout<<j+1<<":"<<" "<<num1<<"*"<<num2<<"="<<"  ";
                          cin>>ans;
                          if(ans==num1*num2)
                          {
                              cout<<"��ȷ"<<endl;
                              right++;
                          }
                          else
                          {
                              cout<<"����ˣ�"<<endl;
                              cout<<"��ȷ���ǣ�"<<num1*num2<<endl;
                          }
                          break;
                      case 3:
                          if(num2!=0)
                          {
                              int t=rand()%30;
                              int num3=num1*t;
                              cout<<j+1<<":"<<" "<<num3<<"/"<<num1<<"="<<"  ";
                              cin>>ans;
                              if(ans==(float)num3/(float)num1)
                              {
                                  cout<<"��ȷ"<<endl;
                                  right++;
                              }
                              else
                              {
                                  cout<<"����ˣ�"<<endl;
                                  cout<<"��ȷ���ǣ�"<<(float)num3/(float)num1<<endl;
                              }
                          }
                          else
                          {
                              j--;
                          }
                          break;
                      }
                  }
                  break;
              }
          }
          cout<<"�����"<<right<<"���⣻"<<"���"<<Ques01-right<<"���⡣";
          cout<<"����Ŭ����"<<endl;
  cout<<endl;
  while(1)
  {
      cout<<"����Ҫ�������⻹���˳���(y���������⣻n���˳�)";
      cin>>Ques6;
      if(Ques6=='y')
      {
          goto Again;
      }
      if(Ques6=='n')
      {
          goto Exit;
      }
      else
      {
          cout<<"�����������������룺";
      }
  }
Exit:
  return 0;
}
