/*

BASICSHELL NT 1.0 version 0.3
Base on EasyX Core
Copyright(c) WRH(BASICSHELL NT)
Copyright(c) Create.Inc & Grassinternet.Inc(EasyX Core)

This version is a beta version and may be unstable
*/

//Includes
#include <string>
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

//Varibles
	string product_key = "ponduacretctedbnyirasnertcareietdngsicn";
	string task_key = "Ta#skf&Ini^sI??/ed!";
	string Tubor_key = "verywe11!easy0s2.o";
	string pin = "p@22w0r01";
	
	
	string password="";
	
	int power = 0;
	int tubor = 0;
	int bootp = 0;
	int fastmode = 0;
	int turnto = 1;
	int tubdev = 0;
	int screenon = 0;
	
	int maxp = 3000;
	int mem = 5000;
	int core = 5;
	int tread = 12;
	int memory = 4096; 
	
	string cpu="Virtual CPU";
	int cpuclock=1024; 
	string hddname="Vitural Hard Disk Drive";
	int hdd=100;
	
	string keyboard="Virtual Kerboard";
	string mouse="Virtual Mouse";
	
	string tmp;
	string prompt="BASICSHELL-NT -$";
	string command="";
	
	int fssize=100000;
	
	

//Funtions

void clear();

void _71GN()
{
	cout << " _________     ___     _______   ____     _" << endl;
	cout << "|______   |   /   |   / ______| |    \\   | |" << endl;
	cout << "       / /|  /_/| |  | |   ___  | |\\  \\  | |" << endl;
	cout << "      / /       | |  | |  |_    | | \\  \\ | |" << endl;
	cout << "     / /        | |  | |____| | | |  \\  \\| |" << endl;
	cout << "    /_/         |_|  |________| |_|   \\____|    Studio" << endl;
}

void intro()
{
	clear();
	cout << "��ӭʹ��BASICSHELL NT��" << endl;
	cout << "BASICSHELL NT��BASICSHELL���³�Ա��" << endl;
	cout << "BASICSHELL NT����EasyX Core�ں�" << endl;
	cout << "��ǿ��,���ȶ���" << endl;
	Sleep(5000);
	clear();
	cout << "BASICSHELL NT�������¹��ܣ�" << endl;
	cout << "- EasyX Core�ں�" << endl; 
	cout << "- ����ϵͳ" << endl;
	cout << "- �ļ�ϵͳ" << endl;
	Sleep(5000);
	clear();
	int a;
	while(true)
	{
		clear();
		cout << "BASICSHELL NT����:" << endl;
		cout << "1.EasyX Core�ں�" << endl;
		cout << "2.����ϵͳ" << endl;
		cout << "3.�ļ�ϵͳ" << endl;
		cout << "4.BASICSHELL NT��BASICSHELL������" << endl;
		cout << "5.�˳�" << endl;
		cin >> a;
		if(a==5)
		{
			clear();
			break;
		}
		else if(a==1)
		{
			clear();
			cout << "EasyX Core�ں�" << endl;
			cout << "BASICSHELL NT������BASICKERNEL�ں�" << endl;
			cout << "ʹ��EasyX Core�ں�" << endl;
			cout << "��ǿ��,���ȶ���" << endl;
			system("pause");
		}
		else if(a==2)
		{
			clear();
			cout << "����ϵͳ" << endl;
			cout << "BASICSHELL NT�ṩ������ϵͳ" << endl;
			cout << "������ⲿ����������" << endl;
			system("pause");
		}
		else if(a==3)
		{
			clear();
			cout << "�ļ�ϵͳ" << endl;
			cout << "BASICSHELL NT�ṩ���ļ�ϵͳ�����Ը�����Ĺ�������ļ�" << endl;
			cout << endl << "�ļ�ϵͳ����ԭ��" << endl; 
			cout << "����          �ļ�ϵͳĩ��\n |                 |\n |                 |\n[0][1][2][3][4][5][6][7][8][9][10]\n\\___�ɷ�������__/\\_���ɷ�������_/\n\n\n����\n �������ļ���(�ַ�����)\n �������ļ�����(�ַ�����)\n �������Ƿ�ʹ��(����ֵ��)" << endl;
			system("pause");
		}
		else if(a==4)
		{
			clear();
			cout << "BASICSHELL NT��BASICSHELL������" << endl;
			cout << "���\\ϵͳ	        BASICSHELL		BASICSHELL NT" << endl;
			cout << "=============================================================" << endl;
			cout << "�ں�	            	BASICKERNEL		EasyX Core" << endl;
			cout << "��д����		Python			C++" << endl;
			cout << "�û�����		���û�(3.3+)		���û�" << endl;
			cout << "Ĭ���û�		System			@manager #64" << endl;
			cout << "����ϵͳ		Windows/Linux/MacOS	Windows" << endl;
			cout << "=============================================================" << endl;
			cout << "����ϵͳ		N			Y" << endl;
			cout << "�ļ�����		Y(3.2+)			Y" << endl;
			cout << "�ļ�ϵͳ		N			Y" << endl;
			cout << "=============================================================" << endl;
			cout << "��������		����			��ҵ" << endl;
			cout << "=============================================================" << endl;
			system("pause");
		}
	}
}

void calc()
{
	int a,b,o;
	double res=0;
	bool err=false;
	cout << "�������һ����:";
	scanf("%d",&a);
	cout << "������ڶ�����:";
	scanf("%d",&b);
	cout << "�����������" << endl;
	cout << "[1]�ӷ�" << endl;
	cout << "[2]����" << endl;
	cout << "[3]�˷�" << endl;
	cout << "[4]����" << endl; 
	scanf("%d",&o);
	if(o==1)
	{
		res=a+b;
	}
	else if(o==2)
	{
		res=a-b;
	}
	else if(o==3)
	{
		res=a*b;
	}
	else if(o==4)
	{
		if(b==0)
		{
			cout << "����:0����Ϊ����" << endl;
			err=true;
		}
		else
		{
			res=a/b;
		}
	}
	if(err==false)
	{
		cout << "������:" << res << endl;
	}

}

void timer()
{
	int time;
	cout << "������ʱ��(��λ:��):";
	cin >> time;
	for(int i=time;i>0;i--)
	{
		cout << "\r ��ʱ��:ʣ��" << i << "��                                               "; 
		Sleep(1000);
	}
	cout << "\rʱ�䵽!                                                           " << endl;
}

void tool()
{
	string cmd;
	while(true)
	{
		cout << "BASICSHELL NT TOOL -$";
		getline(cin,cmd);
		if(cmd=="calc")
		{
			calc();
		}
		else if(cmd=="timer")
		{
			timer();
		}
		else if(cmd=="time")
		{
			time_t now = time(0);
			char* dt = ctime(&now);
			cout << dt << endl;
		}
		else if(cmd=="titicks")
		{
			time_t now = time(0);
			cout << now << endl;
		}
		else if(cmd=="help")
		{
			cout << "calc       ������" << endl;
			cout << "timer      ��ʱ��" << endl;
			cout << "time       ��ʾʱ��" << endl;
			cout << "titicks    ʱ���(��1970�굽���ڵ�����)" << endl;
			cout << "help       ��ʾ�˰���" << endl;
			cout << "exit       �˳�С����" << endl;
		}
		else if(cmd=="exit")
		{
			break;
		}
		else if(cmd=="")
		{
			
		}
		else
		{
			cout << "û��С����" << cmd << endl;
		}
	}
}










void clear();

struct ntfiles
{
	string name;
	string content;
	bool used;
};
ntfiles file[722500];
int endoffs=0;

void setpsw()
{
	string _psw,newpsw,retype;
	clear();
	while(true)
	{
		if(password=="")
		{
			break;
		}
		else
		{
			cout << "����������:";
			getline(cin,_psw);
			if(_psw==password)
			{
				break;
			}
			else
			{
				cout << "�������" << endl;
			}
		}
	}
	while(true)
	{
		cout << "������������:";
		getline(cin,newpsw);
		if(newpsw=="")
		{
			break;
		}
		else
		{
			clear();
			cout << "��ȷ��������:";
			getline(cin,retype);
			if(newpsw==retype)
			{
				break;
			}
			else
			{
				cout << "���벻ƥ��" << endl;
			}
		}
	}
	cout << "���ڸ�������......";
	password=newpsw;
	cout << "���" << endl;
}

void init()
{
	if(fssize>722500)
	{
		clog << "[Warning] File system is too big,adjusting...";
		Beep(920,750);
		fssize=722500;
		clog << "Done" << endl;
	}
    for(int i=0;i<fssize;i++)
    {
    	file[i].used=false;
	}
}


void edit(string name)
{
	cout << endl << "NTEDIT v1.1" << endl;
	cout << "���༭���ļ���:" << name << endl;
	bool found=false;
	for(int i=0;i<=endoffs;i++)
	{
		if(file[i].name==name)
		{
			found=true;
			break;
		}
	}
	if(found && name!="")
	{
		char input[]="";
		string con="";
		clear();
		cout << "===========================================================EDIT=========================================================" << endl; 
		cout << "����_ok_����ɱ༭" << endl;
		cout << "����_clear_���������" << endl;
		while(true)
		{
			gets(input);
			if(strcmp(input,"_clear_")==0)
			{
				con="";
				cout << "���" << endl;
				clear();
				cout << "===========================================================EDIT=========================================================" << endl; 
				cout << "����_ok_����ɱ༭" << endl;
				cout << "����_clear_���������" << endl;
			}
			else if(strcmp(input,"_ok_")==0)
			{
				break;
			}
			else
			{
				con+=strcat(input,"\n");
			}

			
		}
		found=false;
		cout << "д��" << name << "......"; 
		for(int i=0;i<=endoffs;i++)
		{
			
			if(file[i].name==name)
			{
				cout << "���" << endl;
				found=true;
				file[i].content=con;
				break;
			}
		}
		if(found)
		{
			cout << "�༭���" << endl; 	
		}
		else
		{
			cout << "����" << endl;
			cout << "�༭ʧ��" << endl;
		}
		
	}
	else
	{
		cout << "����:δ�ҵ��ļ�" << endl;
	}
	cout << endl;
}










void filemgr()
{
	cout << "BASICSHELL NT FILEMGR 1.0" << endl;
	cout << "����������������ϵͳ" << endl;
	string filemgr_cmd="";
	while(true)
	{
		cout << "BASICSHELL NT FILEMGR -$";
		getline(cin,filemgr_cmd);
		if(filemgr_cmd=="create")
		{
			string newfilename;
			cout << "�������ļ���:";
			getline(cin,newfilename);
			if(newfilename!="")
			{
				bool success=false;
				int empty_index=-1;
				for(int i=0;i<fssize;i++)//Ѱ��δʹ�õĿռ� 
				{
					clog << "�ļ�ϵͳ����" << i << ":";
					if(file[i].used==false)
					{
						clog << "����" << endl;
						success=true;
						empty_index=i;
						break;
					}
					else
					{
						clog << "��ʹ��" << endl;
					}
				}
				if(success)
				{
					bool dupname=false;
					for(int i=0;i<fssize;i++)
					{
						if(file[i].name==newfilename)
						{
							clog << "������" << i << "������һ�������ļ�:" << file[i].name << endl;
							dupname=true;
						}
					}
					
					if(dupname==false)
					{
						file[empty_index].name=newfilename;
						file[empty_index].used=true;
						if(endoffs<empty_index)
						{
							clog << "���ļ�ϵͳĩ����չ��" << empty_index << endl;
							endoffs=empty_index;
						}
						cout << "�����ɹ�" << endl;
					}
					else
					{
						cout << "����:�ļ�����" << endl;
					}
					
				}
				else
				{
					cout << "����:�ļ�ϵͳû�п�������" << endl;
				}
				
			}
			else
			{
				cout << "�ļ�������Ϊ��" << endl;
			}
		}
		else if(filemgr_cmd=="ls")
		{
			int total=0;
			for(int i=0;i<10000;i++)
			{
				if(file[i].used==true)
				{
					cout << file[i].name << endl;
					total++;
				}
			}
			cout << "�ܹ�" << total << "���ļ�" <<endl;
		}
		else if(filemgr_cmd=="del")
		{
			string filename;
			cout << "������Ҫɾ�����ļ���:";
			getline(cin,filename);
			bool found=false;
			int index=0;
			for(int i=0;i<=endoffs;i++)
			{
				clog << "����Ѱ������" << i << "......"; 
				if(file[i].name==filename && file[i].used==true)
				{
					clog << "�����ļ�" << endl;
					found=true;
					index=i;
					break;
				}
				else
				{
					clog << "δ�����ļ�" << endl;
				}
			}
			if(found)
			{
				file[index].used=false;
				file[index].name="";
				file[index].content="";
				cout << "ɾ���ɹ�" << endl;
			}
			else
			{
				cout << "�Ҳ����ļ�" << endl; 
			}
		}
		else if(filemgr_cmd=="fsstr")
		{
			cout << "�ļ�ϵͳ�ṹ" << endl;
			cout << "��ǰ�ļ�ϵͳĩ��:" << endoffs << endl;
			cout << "�ļ�ϵͳ�������:" << fssize << endl;
			for(int i=0;i<=endoffs;i++)
			{
				cout << "����" << i << ":";
				if(file[i].used==true)
				{
					cout << "��ʹ�� - " << file[i].name;
				}
				else
				{
					cout << "����";
				}
				cout << endl;
			}
		}
		else if(filemgr_cmd=="help")
		{
			cout << "create      �����ļ�" << endl;
			cout << "ls          �鿴�����ļ�" << endl;
			cout << "del         ɾ���ļ�" << endl;
			cout << "fsstr       ��ʾ�ļ�ϵͳ�ṹ" << endl;
			cout << "help        ��ʾ�˰���" << endl;
			cout << "defs        �����ļ�ϵͳ" << endl;
			cout << "move        �ƶ��ļ�ϵͳĩ��" << endl;
			cout << "edit        �༭�ļ�" << endl;
			cout << "open        ���ļ�" << endl;
			cout << "format      ��ʽ���ļ�ϵͳ" << endl;
			cout << "copy        �����ļ�����" << endl;
			cout << "search      �����ļ�" << endl;
			cout << "index       ��ʾ�ļ�ϵͳ��ĳ����������Ϣ" << endl;
			cout << "clear       ����" << endl;
			cout << "exit        �˳��ļ�������" << endl;
		}
		else if(filemgr_cmd=="defs")
		{
			cout << "���������ļ�ϵͳ......" << endl;
			int moveindex=0;
			for(int i=0;i<endoffs;i++)
			{
				if(file[i].used==false)
				{
					moveindex++;
				}
				if(moveindex>0)
				{
					if(moveindex+i<=endoffs)
					{
						file[i].name=file[i+moveindex].name;
						file[i].content=file[i+moveindex].content;
						file[i].used=file[i+moveindex].used;
				
						file[i+moveindex].name="";
						file[i+moveindex].content="";
						file[i+moveindex].used=false;
					}

				}

			}
			cout << "�������" << endl; 
		}
		else if(filemgr_cmd=="move")
		{
			int newend;
			cout << "�����뽫�ļ�ϵͳĩ���ƶ���������:";
			scanf("%d",&newend);
			if(newend<=fssize)
			{
				bool foundfile=false;
				bool sure=false;
				for(int i=newend;i<10000;i++)
				{
					if(file[i].used==true)
					{
						foundfile=true;
					}
				}
				if(foundfile)
				{
					cout << "���棡����" << newend << "��������ļ�������ƶ�����Щ�ļ������ɷ���" << endl;
					cout << "ȷ��Ҫ������(Y/N)";
					char temp;
					cin >> temp;
					if(temp=='y' || temp=='Y')
					{
						sure=true;
					}
					else
					{
						sure=false;
					}
				}
				else
				{
					sure=true;
				}
				if(sure)
				{
					clog << "��ԭ�ļ�ϵͳĩ��" << endoffs << "�ƶ���" << newend << endl;
					endoffs=newend;
				}
			}
			else
			{
				cout << "����:�����ļ�ϵͳ���Χ" << endl;
			}
			
		}
		else if(filemgr_cmd=="edit")
		{
			string name;
			cout << "������Ҫ�༭���ļ���:";
			getline(cin,name);
			edit(name);
		}
		else if(filemgr_cmd=="open")
		{
			string name;
			cout << "������Ҫ�򿪵��ļ���:";
			getline(cin,name);
			bool found=false;
			int index=0;
			for(int i=0;i<=endoffs;i++)
			{
				clog << "����Ѱ������" << i << "......"; 
				if(file[i].name==name && file[i].used==true)
				{
					clog << "�����ļ�" << endl;
					found=true;
					index=i;
					break;
				}
				else
				{
					clog << "δ�����ļ�" << endl;
				}
			}
			if(found)
			{
				cout << "����" << file[index].name << "......" << endl;
				cout << file[index].content << endl;
			}
			else
			{
				cout << "�Ҳ����ļ�" << endl;
			}
			
		}
		else if(filemgr_cmd=="format")
		{
			cout << "���棡�������ݽ�����գ�" << endl;
			cout << "��ȷ��Ҫ������(Y/N)";
			char sure;
			cin >> sure;
			if(sure=='Y' || sure=='y')
			{
				cout << "���ڸ�ʽ��" << endl;
				for(int i=0;i<fssize;i++)
				{
					clog << "\r������������" << i << "......                                         "; 
					file[i].content="";
					file[i].name="";
					file[i].used=false;
				}
				cout << endl;
				clog << "���ڳ�ʼ���ļ�ϵͳĩ��Ϊ0......";
				endoffs=0;
				clog << "���" << endl;
				cout << "��ʽ�����" << endl;
			}
		}
		else if(filemgr_cmd=="copy")
		{
			string filename;
			string newfilename;
			cout << "������Ҫ�����������ļ���:";
			getline(cin,filename);
			bool found=false;
			int index=0;
			for(int i=0;i<=endoffs;i++)
			{
				clog << "����Ѱ������" << i << "......"; 
				if(file[i].name==filename && file[i].used==true)
				{
					clog << "�����ļ�" << endl;
					found=true;
					index=i;
					break;
				}
				else
				{
					clog << "δ�����ļ�" << endl;
				}
			}
			if(found)
			{
				newfilename=filename+"�ĸ���";
				bool success=false;
				int empty_index=-1;
				for(int i=0;i<fssize;i++)//Ѱ��δʹ�õĿռ� 
				{
					clog << "�ļ�ϵͳ����" << i << ":";
					if(file[i].used==false)
					{
						clog << "����" << endl;
						success=true;
						empty_index=i;
						break;
					}
					else
					{
						clog << "��ʹ��" << endl;
					}
				}
				if(success)
				{
					bool dupname=false;
					for(int i=0;i<fssize;i++)
					{
						if(file[i].name==newfilename)
						{
							clog << "������" << i << "������һ�������ļ�:" << file[i].name << endl;
							dupname=true;
						}
					}
		
					if(dupname==false)
					{
						file[empty_index].name=newfilename;
						file[empty_index].used=true;
						file[empty_index].content=file[index].content;
						if(endoffs<empty_index)
						{
							clog << "���ļ�ϵͳĩ����չ��" << empty_index << endl;
							endoffs=empty_index;
						}
							cout << "�����ɹ�" << endl;
						}
					else
					{
						cout << "����:�ļ�����" << endl;
					}
					
					}
				else
				{
					cout << "����:�ļ�ϵͳû�п�������" << endl;
				}
			}
			else
			{
				cout << "�Ҳ����ļ�" << endl;
			}
		}
		else if(filemgr_cmd=="search")
		{
			string searchfile;
			cout << "������Ҫ�������ļ���:";
			getline(cin,searchfile);
			bool found=false;
			int index=0;
			for(int i=0;i<=endoffs;i++)
			{
				clog << "����Ѱ������" << i << "......"; 
				if(file[i].name==searchfile && file[i].used==true)
				{
					clog << "�����ļ�" << endl;
					found=true;
					index=i;
					break;
				}
				else
				{
					clog << "δ�����ļ�" << endl;
				}
			}
			if(found)
			{
				cout << "�ҵ��ļ�" << file[index].name << ",������" << index << endl;
			}
			else
			{
				cout << "�Ҳ����ļ�" << endl;
			}
		}
		else if(filemgr_cmd=="index")
		{
			int index;
			cout << "����������(��0��ʼ):";
			cin >> index;
			if(index < 0 || index > fssize-1)
			{
				cout << "����:�Ƿ�������" << endl;
			}
			else
			{
				cout << "������Ϣ" << endl;
				cout << "������:" << index << endl;
				cout << "��ʹ��:";
				if(index <= endoffs)
				{
					cout << "��" << endl;
				}
				else
				{
					cout << "��" << endl;
				}
				cout << "״̬:";
				if(file[index].used)
				{
					cout << "��ʹ��" << endl;
				}
				else
				{
					cout << "����" << endl;
				}
				cout << "�ļ���:";
				if(file[index].used)
				{
					cout << file[index].name << endl;
				}
				else
				{
					cout << "N/A" << endl; 
				}
			}
		}
		else if(filemgr_cmd=="clear")
		{
			clear();
		}
		else if(filemgr_cmd=="exit")
		{
			break;
		}
		else if(filemgr_cmd=="")
		{
			
		}
		else
		{
			cout << "����" << filemgr_cmd << "��Ч" << endl;
		}
	}
}

void nt_logo()
{
	cout << " _______     ___    ______   _   ______                                                         _       _____" << endl;
	cout << "|   __  |   / _ \\  /  ____| | | /  ____|  _____        _____                 ___    _   _____  | |     |  _  |" << endl;
	cout << "|  |__| |  | |_| | | (___   | | | |      /       |    /     \\ |     |       |   \\  | | |_   _| | |     | | | |" << endl;
	cout << "|   ___  \\ |  _  |  \\__  \\  | | | |      \\_____  |__  |_____/ |     |       | |\\ \\ | |   | |   | |     | | | |" << endl;
	cout << "|  |___| | | | | |  ___)  | | | | |____        \\ |  | |       |     |       | | \\ \\| |   | |   | |  _  | |_| |" << endl;
	cout << "|________| |_| |_| |_____/  |_| \\______| ______/ |  | \\______ |____ |____   |_|  \\___|   |_|   |_| (_) |_____|" << endl;
	cout << "                                                               ����EasyX Core   BETA 2" << endl;
}

int pup(){
	power = 1;
	if(Tubor_key.substr(5,6) == "1"){
		tubor = 0;
	}else if(Tubor_key.substr(5,6) == "2"){
		cout << "Tubor error!\n\n";
		return 0;
	}else if(Tubor_key.substr(5,6) == pin.substr(6,7)){
		cout << "Tubor is opening!\n\n";
		return 0;
	}
	return 1;
}

int boot(){
	if(power != 1){
		cout << "No powering!\n\n";
		return 0;
	}else if(product_key != "ponduacretctedbnyirasnertcareietdngsicn"){
		cout << "Product key error!\nCkeck who product your devices!\nMaybe you bought not right devices!\n\n";
		return 0;
	}else if(task_key != "Ta#skf&Ini^sI??/ed!"){
		cout << "No enough authority to do tasks\nPlease concact your devices admin or company engineer!\n\n";
		return 0;
	}else if(Tubor_key != "verywe11!easy0s2.o"){
		cout << "Tubor error!\n\nPlease close tubor or the system is hacked!\n\n";
		return 0;
	}else if(pin != "p@22w0r01"){
		cout << "pin error!\n\nplease buy a right pin password!\n\n";
		return 0;
	}else{
		bootp = 1;
		return 1;
	}
}

int bootic(){
	if(bootp == 1){
		if(turnto == 1){
			maxp = 1024;
			mem = 2048;
			core = 2;
			tread = 4;
		}else if(turnto == 2){
			cout << "You opened the 'Tubor hardware' choosen , do you want to make the processors and memorys to be the most powerful?\n";
			cout << "[If you don't kown what are you doing , input 'no']\n\n";
			cout << "-----> ";
			cin >> tmp;
			if(tmp == "yes"){
				tubdev = 1;
				return 0;
			}else{
				maxp = 1024;
				mem = 2048;
				core = 2;
				tread = 4;
			}
		}
	}
	return 1;
}

int harc(){
	if(maxp >= 3100){
		cout << "Processor clock time too much!\n\n";
		return 0;
	}else if(maxp >= 5100 && tubdev == 1){
		cout << "Processor clock time too much!\nPlease make the clock time be smaller...\n\n";
		return 0;
	}else if(mem >= 5100){
		cout << "Memory write time too much!\n\n";
		return 0;
	}else if(mem >= 5100 && tubdev == 1){
		cout << "Memory write time too much!\nPlease make the memory write time be smaller...\n\n";
		return 0;
	}else if(core >= 5){
		cout << "Processor core number error!\n\n";
		return 0;
	}else if(core >= 5 && tubdev == 1){
		cout << "Processor core number error!\nPlease make the processor core number be smaller...\n\n";
		return 0;
	}else if(tread >= 12){
		cout << "Processor tread error!\n\n";
		return 0;
	}else if(tread >= 12 && tubdev == 1){
		cout << "Processor tread error!\nPlease make the processor tread be smaller...\n\n";
		return 0;
	}else{
		screenon = 1;
		return 1;
	}
	
}

int nt_login()
{
	int res=1;
	if(password=="")
	{
		res=0;
	}
	else
	{
		char input_password[]="";
		char _password[101];
		cout << "����������:";
		gets(input_password);
		strcpy(_password,password.c_str());
		if(strcmp(_password,input_password)==0)
		{
			res=0;
		}
		else
		{
			cout << "���޷���¼BASICSHELL NT��������������Ƿ���ȷ���������а�����Caps Lock��" << endl;
		} 
	}

	return res;
}




void clear()
{
	system("cls");
}

void psw();







void cmdhelp(string command)
{
	if(strcmp(command.c_str(),"shutdown")==0)
	{
		cout << "�ر�BASICSHELL NT" << endl;
		cout << "����������BASICSHELL NT����ر�" << endl ;
	}
	else if(strcmp(command.c_str(),"lock")==0)
	{
		cout << "�����û�" << endl;
		cout << "���������󣬽��᷵�ص�¼���棬������Ҫ��������ٴν���" << endl;
		cout << "ע��:����Ϊ��ʱ��Ч" << endl;
	}
	else if(strcmp(command.c_str(),"help")==0)
	{
		cout << "����" << endl;
		cout << "���������󣬽�����ʾBASICSHELL NT�İ���" << endl;
	}
	else if(strcmp(command.c_str(),"devlst")==0)
	{
		cout << "�豸�б�" << endl;
		cout << "���������󣬽�����ʾ�豸�б�" << endl;
	}
	else if(strcmp(command.c_str(),"clear")==0)
	{
		cout << "����" << endl;
		cout << "���������󣬿���̨���ڽ������" << endl; 
	}
	else if(strcmp(command.c_str(),"filemgr")==0)
	{
		cout << "�ļ�������" << endl;
		cout << "�ļ����������Թ����ļ�ϵͳ�ϵ��ļ���Ҳ���Թ����ļ�ϵͳ" << endl;
	}
	else if(strcmp(command.c_str(),"setpsw")==0)
	{
		cout << "��������" << endl;
		cout << "��������԰�������ӡ����ġ�ɾ������" << endl;
	}
	else if(strcmp(command.c_str(),"cmdhelp")==0)
	{
		cout << "�������" << endl;
		cout << "�����������ʾָ������İ���" << endl;
	}
	else if(strcmp(command.c_str(),"tool")==0)
	{
		cout << "С����" << endl;
		cout << "BASICSHELL NTС����" << endl;
	}
	else if(strcmp(command.c_str(),"intro")==0)
	{
		cout << "BASICSHELL NT����" << endl;
		cout << "�����������ʾBASICSHELL NT����";
	}
	else if(strcmp(command.c_str(),"about")==0)
	{
		cout << "����BASICSHELL NT" << endl;
		cout << "��ʾBASICSHELL N�İ汾�ţ���Ȩ�������ߵ���Ϣ" << endl;
	}
	else
	{
		cout << "����" <<command << "��Ч" << endl;
	}
}





void process(string command)
{
	if(strcmp(command.c_str(),"lock")==0)
	{
		clear();
		psw();
	}
	else if(strcmp(command.c_str(),"help")==0)
	{
		cout << "shutdown  �ر�BASICSHELL NT" << endl;
		cout << "lock      �����û�" << endl;
		cout << "help      ��ʾ�˰���" << endl;
		cout << "devlst    �豸�б�" << endl;
		cout << "clear     ����" << endl;
		cout << "filemgr   �ļ�������" << endl;
		cout << "setpsw    ��������" << endl;
		cout << "cmdhelp   �������" << endl;
		cout << "tool      С����" << endl;
		cout << "intro     BASICSHELL NT����" << endl;
		cout << "about     ����BASICSHELL NT" << endl;
	}
	else if(strcmp(command.c_str(),"devlst")==0)
	{
		cout << "�豸�б�" << endl;
		cout << "������:" << cpu << endl;
		cout << "	ʱ��Ƶ��:" << cpuclock/1024 << "GHz" << endl; 
		cout << "	����:" << core << endl;
		cout << "	�߳���:" << tread << endl << endl;
		cout << "�ڴ�:" << memory/1024 << "GB" << endl;
		cout << "Ӳ��:" << hddname << "[" <<hdd << "MB"<< "]" << endl;
		cout << "����:��" << endl;
		cout << "CD-ROM:��" << endl;
		cout << endl << "�����豸" << endl;
		cout << "	����:" << keyboard << endl;
		cout << "	���:" << mouse << endl;
	}
	else if(strcmp(command.c_str(),"")==0)
	{
	}
	else if(strcmp(command.c_str(),"clear")==0)
	{
		clear(); 
	}
	else if(strcmp(command.c_str(),"filemgr")==0)
	{
		filemgr(); 
	}
	else if(strcmp(command.c_str(),"setpsw")==0)
	{
		setpsw(); 
	}
	else if(strcmp(command.c_str(),"cmdhelp")==0)
	{
		string cmd;
		cout << "����������:";
		getline(cin,cmd);
		cmdhelp(cmd);
	}
	else if(strcmp(command.c_str(),"tool")==0)
	{
		tool();
	}
	else if(strcmp(command.c_str(),"intro")==0)
	{
		intro();
		clear();
	}
	else if(strcmp(command.c_str(),"about")==0)
	{
		nt_logo();
		_71GN();
		cout << "BASICSHELL NT 1.0 �����[Version 0.3] [Beta 2]" << endl;
		cout << "����EasyX Core" << endl;
		cout << "BASICSHELL NT��Ȩ��WRH����" << endl;
		cout << "EasyX Core��Ȩ��Create.Inc & Grassinternet.Inc����" << endl;
		cout << endl;
		cout << "����������:71GN" << endl;
		cout << "����������:" << endl; 
		cout << "BASICSHELL NT:WRH" << endl;
		cout << "EasyX Core:Create.Inc & Grassinternet.Inc" << endl;
		cout << endl << "��л @�ݷ���grass block �Ĵ���֧�֣�" << endl;
	}
	else
	{
		cout << "����" <<command << "��Ч" << endl;
	}
}

void shell()
{
	nt_logo();
	cout << "��¼���û�:@manager #64" << endl; 
	cout << endl << endl << "�����ѽ���BASICSHELL NT������������������ϵͳ" << endl << endl;
	cout << "[��ʾ]��������help�鿴����" << endl << endl;
	while(true)
	{
		cout << "@manager #64 -" << prompt;
		
		getline(cin,command);
		if(strcmp(command.c_str(),"shutdown")==0)
		{
			cout << "�����˳�......" << endl;
			break;
		}
		else
		{
			process(command);
		}
		
	}

}











void psw()
{
	nt_logo();
	while(nt_login())
	{
		
	}
	clear();
	shell();
}

void load()
{
	cout << "BAST Loader..." << endl;
	cout << "BASICSHELL NT 1.0 Beta 2 [Version 0.3]" << endl;
	cout << "Base-on EasyX Core" << endl;
	cout << "BASICSHELL NT Copyright(c) WRH" << endl;
	cout << "EasyX Core Copyright(c) Create.Inc & Grassinternet.Inc" << endl;
	Beep(920,200);
	cout << "[Warning]This version is a beta version and may be unstable" << endl;//��ʽ������ȥ�� 
	Beep(920,750);//��ʽ������ȥ�� 
	cout << endl << "Now loading BASICSHELL NT..." << endl;
	cout << "Initializing..." << endl;
	init();
	cout << "Loading UI......" << endl;
	psw();
}

int screen(){
	if(screenon == 0){
		cout << "Unkown error!\n\n";
		return 0;
	}else{
		cout << "EasyOS 2.0 starting up...\nbased on easycore(R)\nProduct : bta-0010\n\nEFI...\n\nCreate.Inc & Grassinternet.Inc\n\n";
		return 1;
	}
	
}


int EFI(){
	string loc = "//Covering 1.0//corefuntion//efi";
	cout << "EasyOS 2.0 starting up...\nbased on easycore(R)\nProduct : bta-0010\n\nEFI...\n\nCreate.Inc & Grassinternet.Inc\n\n";
	load(); 
}



int main(){
	system("cmd.exe /c title BASICSHELL NT 1.0 [Version 0.3] [Beta 2]");
	if(pup()){
		if(boot()){
			if(bootic()){
				if(harc()){
					if(screen()){
						EFI();
					}
				}
			}
		}
	}
	return 0;
}
