
#include<iostream>
#include<Windows.h>
using namespace std;
int password=12312,money=2000,daik=12,er=0,rel=1;
void nuqizhi(int a)
{
	if(a==1)
	{
		cout<<"Fuck you fuck~ fuck~ fuck~ you!!!!!!!"<<endl<<"You mother fucker~,get fucking~ out!!!!"<<endl;
		exit(0);
	}
}
void Error(int a)
{
	if(er>=4)
	{
		cout<<"你他妈故意找茬是不是？你要不要吧！"<<endl;
		nuqizhi(1); 
	}
	if(a==1)
	{
		cout<<"Error(1),you should enter the right word"<<endl;
	}
	if(a==2)
	{
		cout<<"Error(2),invalid data"<<endl;
	}
	if(a==3)
	{
		cout<<"Error(3),too small"<<endl;
	}
	if(a==4)
	{
		cout<<"Error(4),you need a longer password,it can only be 5 bits"<<endl;
	}
	if(a==5)
	{
		cout<<"Error(5),your password is to long,it can only be 5 bits"<<endl;
	}
}

bool login(int a)
{	int c=3;
	for(int i=1;i<=1000;i++)
	{
		int b;
		if(c==0)
		{
			cout<<"No more chance,you mother fucker~ get fucking~ out!!"<<endl;
			return false;
		}
		cin>>b;
		if(b==password)
		{
			cout<<"Pass,Welcome to XZH ASS BANK!"<<endl;
			return true;
		}
		if(b!=password)
		{
			c--;
			if(c>1)
			{
				cout<<"False, "<<c<<" chances left"<<endl;
			}
			if(c==1)
			{
				cout<<"False, "<<c<<" chance left"<<endl;
			}	
		}
	}
}
void system(int a)
{
	int sernum=0;
	char ser;
	for(int i=1;i<=10000;i++)
	{
		if(money<0)
		{
			daik=-money+daik;
			money=0;
		}
		if(daik>=1000)
		{
			cout<<"Warning,you have to give us "<<daik<<" ASS Coins as soon as possible or we will fuck your ass!!"<<endl;
		}		
		sernum++;
		if(sernum!=1)
		{
			cout<<"Now we are in the big dinning,choose your service again!!"<<endl<<"'c'for 查询 'i'for 存款 'q'for 取款 'd'for 贷款 'h'for 还款 'g'for 修改密码 't'for 特殊服务 'o'for 退卡"<<endl;	
		}
		if(sernum==1)
		{
			cout<<"Fucking~ welcome my honey~,now choose your service!!"<<endl<<"'c'for 查询 'i'for 存款 'q'for 取款 'd'for 贷款 'h'for 还款 't'for 特殊服务 'o'for 退卡"<<endl; 
		}
		cin>>ser;
		if(ser!='c'&&ser!='i'&&ser!='q'&&ser!='d'&&ser!='h'&&ser!='g'&&ser!='t'&&ser!='o')
		{
			er++;
			Error(1);
		}
		if(ser=='c')
		{
			cout<<"You mother fucker~ have "<<money<<" ASS Coins,and you need to give "<<daik<<" ASS Coins"<<endl<<"Give me your ass back to me ok?"<<endl;
		}
		if(ser=='i')
		{
			int  cunqian;
			for(int i=1;i<=10000;i++)
			{
				cout<<"Welcome my father and fucker~,I fucking~ love you!!!!"<<endl<<"So tell me how much you want to give me!" <<endl;
				cin>>cunqian;
				if(cunqian<=1000&&cunqian>0)
				{	
					cout<<"FUCKING the POOL!!!You fucking~kidding me?You fucking~fucker!!"<<endl;
					nuqizhi(1);
				}
				if(cunqian>1000)
				{
					money=cunqian+money;
					cout<<"I love you my fucking~ good father!!!!"<<endl<<"Now you have "<<money<<" ASS Coins left,I'm looking forword you giving me money next time my father and fucker~'"<<endl;
					break;
				}		
				if(cunqian<0)
				{
					cout<<"What you want?,I'm not a SB"<<endl;
					er++;
					Error(2);
				}			
			}
		}
		if(ser=='q')
		{
			int jixu=3,zou=1,quk;
			cout<<"NO!!!My handsome and big dick father and fucker~!!!NO!!!Don't take away your son's money OK?"<<endl<<"Choose 1 for continue,0 for cancel"<<endl;
			for(int m=1;m<=1000;m++)
			{
				if(zou==0)
				{
					break;
				}
				cin>>jixu;
				if(jixu==1)
				{
					for(int l=1;l<=1000;l++)
					{
						if(zou==0)
						{
							break;
						}
						jixu=3;
						cout<<"Come on my father my honey my fucker~NO~~Are you fucking~ sure??"<<endl<<"Choose 1 for cancel,0 for continue"<<endl;
						cin>>jixu;
						if(jixu!=0&&jixu!=1)
						{
							er++;
							Error(1);
						}
						if(jixu==1)
						{
							cout<<"Fucking thank you my father!!I love you!!!"<<endl;
							zou=0;
							break;
						}
						if(jixu==0)
						{
							for(int p=1;p<=1000;p++)
							{
								if(zou==0)
								{
									break;
								}
								jixu=3;
								cout<<"All right my son,I konw you don't have money,I konw you,but you need to give me your ass to fuck~ now so that I'll give you money"<<endl<<"Choose 1 for 接受gangjiao,0 for 拒绝gangjiao"<<endl;
								cin>>jixu;
								if(jixu==1)
								{
									for(int z=1;z<=1000;z++)
									{
											if(zou==0)
											{
												break;
											}
										cout<<"Oh♂yeah,my honey,oh♂,so comefortable oh,come on"<<endl<<"So how much would you like to take?";
										cin>>quk;
										if(quk>money&&quk<1000&&quk>0)
										{
											er++;
											Error(2);
											cout<<"Oh,you want to joke me?Let's do it agagin!"<<endl;
										}
										if(quk>=1000)
										{
											cout<<"Too much,no way!!"<<endl;
											nuqizhi(1);
										}
										if(quk<1000&&quk<=money&&quk>0)
										{
											money=money-quk;
											cout<<"Take it away,my son,now you have only "<<money<<" ASS Coins left,if you want to paly with me again,welcome~"<<endl;
											zou=0;
											break;
										}
										if(quk<0)
										{
											cout<<"I fucking love you!!!Good bye my father!!!"<<endl;
											money=money+quk;
											zou=0;
											break;
										}
									}			
								}
								if(jixu==0)
								{
									cout<<"Hehe monther fucker~,my dick is very good,but you don't konw,but it's ok because I don't need to give you any money"<<endl;
									zou=0;
									break;
								}
								if(jixu!=0&&jixu!=1)
								{	
									er++;
									Error(1);
								}	
							} 
						}
					}	
				}
				if(jixu==0)
				{
					cout<<"Fucking thank you my father!!I love you!!!"<<endl;
					break;
				}
				if(jixu!=0&&jixu!=1)
				{
					er++;
					Error(1);
				}
			}
		}
		if(ser=='d')
		{
			cout<<"NO way!mine is mine,your also is mine!!You konw?My fucker~"<<endl;
			nuqizhi(1);
		}
		if(ser=='h')
		{
			int huanqian;
			
			for(int i=1;i<=10000;i++)
			{	
				cout<<"OK,good,you have to give"<<daik<<"ASS Coins to me"<<endl<<"So how much you biring today?"<<endl;
				cin>>huanqian;
				if(huanqian<=100&&huanqian>0)
				{
					cout<<"Too small,I want the big~♂one"<<endl;
					er++;
					Error(3);
				}
				if(huanqian<0)
				{
					cout<<"HE HE"<<endl;
					nuqizhi(1);
				}
				if(huanqian>100&&huanqian<daik&&huanqian>100)
				{
					daik=daik-huanqian;
					cout<<"All right,but you still need to give me "<<daik<<" ASS Coins,do it faster,or I'll fuck~ and kill you"<<endl;
					break;
				}
				if(huanqian>100&&huanqian>=daik&&huanqian>100)
				{
					daik=0;
					cout<<"I fucking love you"<<endl;
					break;
				}
			}
		}
		if(ser=='t')
		{
			money=money-20;
			cout<<"Thank for your 20 ASS Coins!OH~yeah♂my fucker~,I love you "<<endl<<"Ah,YAMEDA,Ah~,ah~,ah~"<<endl;
		}
		if(ser=='o')
		{
			cout<<"Good bye,my fucker~~"<<endl;
			break;
		}			
	}
}			
int main()
{
	int assID;
	cout<<"Fucking~ welcome to XZH ASS BANK 2.0!!"<<endl<<"Please enter your fucking~ ASS ID!"<<endl;
	cin>>assID;
	cout<<"Enter your fucking~ ASS Password!"<<endl;
	if(login(1))
	{
		system(1);
	}
	else
	{
		nuqizhi(1);
	}
	return 0;
}
