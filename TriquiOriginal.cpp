#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int c, b, y, u;
char a[3][3], n1[20], n2[20],s1, s2;
void jugadores();
void jugador1();
void jugador2();
void match();
void reiniciar();
int main(int argc, char** argv) {
	int op;
	do
	{
		cout<<"\n\n==MENU==\n\n1. jugadores.\n2. Empezar partida.\n3. Reiniciar partida.\n0. TERMINAR.\n\n=> Digite opcion: ";
    	cin>> op;
    	switch(op)
    	{
    		case 1:jugadores();break;
    		case 2:match();break;
    		case 3:reiniciar();break;
		}
	}while(op!=0);
	return 0;
}
void jugadores()
{
	system("cls");
	{
	    cout<<"\n\n==JUGADOR(1)==\n=> Digite nombre del jugador 1: ";
        cin>>n1;
    }
    {
        cout<<"\n\n==JUGADOR(2)==\n=> Digite nombre del jugador 2: ";
        cin>>n2;
    }
	system("cls");
	do
	{
		cout<<"\n\n==SIMBOLOS==\n\n=> Simbolo del jugador 1 ('x' o 'o'): ";
        cin>>s1;
        if(s1!='x'&&s1!='o')
        {
        	cout<<"\n==!!LOS CARACTERES DEBEN SER 'x' o 'o'!!==\n";
		}
	}while(s1!='x'&&s1!='o');
	do
	{
        cout<<"\n\n==SIMBOLOS==\n\n=> Simbolo del jugador 2 ('x' o 'o'): ";
        cin>>s2;
		if(s2!='x'&&s2!='o')
        {
        	cout<<"\n==!!LOS CARACTERES DEBEN SER 'x' o 'o'!!==\n";
		}
		if(s2==s1)
		{
			cout<<"\n==!!LOS CARACTERES SON IGUALES!!==\n";
		}
	}while(s2!='x'&&s2!='o'||s2==s1);
	system("cls");
	
	cout<<"\n=> El simbolo de "<<n1<<" es '"<<s1<<"'\n";
	cout<<"\n=> El simbolo de "<<n2<<" es '"<<s2<<"'\n";
	for(c=0;c<3;c++)
	for(b=0;b<3;b++)
	a[c][b]=' ';
}
void match()
{
	system("cls");
	y=0;
	u=0;
	do
	{
		if(y==0&&u==0)
		{
    		if(a[0][0]=='x'||a[0][1]=='x'||a[0][2]=='x'||a[1][0]=='x'||a[1][1]=='x'||a[1][2]=='x'||a[2][0]=='x'||a[2][1]=='x'||a[2][2]=='x'|a[0][0]=='o'||a[0][1]=='o'||a[0][2]=='o'||a[1][0]=='o'||a[1][1]=='o'||a[1][2]=='o'||a[2][0]=='o'||a[2][1]=='o'||a[2][2]=='o')
    		{
    			system("cls");
    			cout<<"\n=======================> TABLERO LLENO <=====================\n";
    			cout<<"#############################################################"<<endl;
            	cout<<"#                                                           #"<<endl;
            	cout<<"#             PULSAR OPCION 3 PARA LIMPIAR TABLERO          #"<<endl;  
            	cout<<"#                                                           #"<<endl;
            	cout<<"#############################################################"<<endl;
            	cout<<"\n\n==TABLERO==\n\n";
            	for(c=0;c<3;c++)
                {
                    for(b=0;b<3;b++)
                    cout<<"|"<<a[c][b]<<"|";
                    cout<<"\n";
                }
    			return;
    		}
    	}
		if(y==5&&u==4)
		{
			system("cls");
			cout<<"\n==========================> EMPATE <=========================\n";
			cout<<"#############################################################"<<endl;
        	cout<<"#                                                           #"<<endl;
        	cout<<"#                   EL JUEGO QUEDO EMPATADO                 #"<<endl;  
        	cout<<"#                                                           #"<<endl;
        	cout<<"#############################################################"<<endl;
        	cout<<"\n\n==TABLERO==\n\n";
        	for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
			return;
		}
		else
		if(a[0][0]==s1&&a[0][1]==s1&&a[0][2]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[1][0]==s1&&a[1][1]==s1&&a[1][2]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR                #"<<endl; 
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[2][0]==s1&&a[2][1]==s1&&a[2][2]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl; 
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][0]==s1&&a[1][0]==s1&&a[2][0]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][1]==s1&&a[1][1]==s1&&a[2][1]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][2]==s1&&a[1][2]==s1&&a[2][2]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl; 
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][2]==s1&&a[1][1]==s1&&a[2][0]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][0]==s1&&a[1][1]==s1&&a[2][2]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][0]==s2&&a[0][1]==s2&&a[0][2]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[1][0]==s2&&a[1][1]==s2&&a[1][2]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[2][0]==s2&&a[2][1]==s2&&a[2][2]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][0]==s2&&a[1][0]==s2&&a[2][0]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][1]==s2&&a[1][1]==s2&&a[2][1]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                 #"<<endl;   
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][2]==s2&&a[1][2]==s2&&a[2][2]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][2]==s2&&a[1][1]==s2&&a[2][0]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;    
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][0]==s2&&a[1][1]==s2&&a[2][2]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	a[c][b]=' ';
		if(y<5)
		{
			y++;
			jugador1();
		}
		if(y==5&&u==4)
		{
			system("cls");
			cout<<"\n==========================> EMPATE <=========================\n";
			cout<<"#############################################################"<<endl;
        	cout<<"#                                                           #"<<endl;
        	cout<<"#                   EL JUEGO QUEDO EMPATADO                 #"<<endl;  
        	cout<<"#                                                           #"<<endl;
        	cout<<"#############################################################"<<endl;
        	cout<<"\n\n==TABLERO==\n\n";
        	for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
			return;
		}
		else
		if(a[0][0]==s1&&a[0][1]==s1&&a[0][2]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[1][0]==s1&&a[1][1]==s1&&a[1][2]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR                #"<<endl; 
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[2][0]==s1&&a[2][1]==s1&&a[2][2]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl; 
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][0]==s1&&a[1][0]==s1&&a[2][0]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][1]==s1&&a[1][1]==s1&&a[2][1]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][2]==s1&&a[1][2]==s1&&a[2][2]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl; 
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][2]==s1&&a[1][1]==s1&&a[2][0]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][0]==s1&&a[1][1]==s1&&a[2][2]==s1)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n1<<" ("<<s1<<") ES EL GANADOR               #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][0]==s2&&a[0][1]==s2&&a[0][2]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[1][0]==s2&&a[1][1]==s2&&a[1][2]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[2][0]==s2&&a[2][1]==s2&&a[2][2]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][0]==s2&&a[1][0]==s2&&a[2][0]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][1]==s2&&a[1][1]==s2&&a[2][1]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                 #"<<endl;   
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][2]==s2&&a[1][2]==s2&&a[2][2]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][2]==s2&&a[1][1]==s2&&a[2][0]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;    
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
    	else
    	if(a[0][0]==s2&&a[1][1]==s2&&a[2][2]==s2)
	    {
	    	system("cls");
	    	cout<<"\n==========================> TRIQUI <=========================\n";
	    	cout<<"#############################################################"<<endl;
            cout<<"#                                                           #"<<endl;
            cout<<"#                   "<<n2<<" ("<<s2<<") ES EL GANADOR                #"<<endl;  
            cout<<"#                                                           #"<<endl;
            cout<<"#############################################################"<<endl;
            cout<<"\n\n==TABLERO==\n\n";
            for(c=0;c<3;c++)
            {
                for(b=0;b<3;b++)
                cout<<"|"<<a[c][b]<<"|";
                cout<<"\n";
            }
            cout<<"\n=>DESPUES DE TERMINADA LA PARTIDA, REINICIAR EL TABLERO PARA PODER VOLVER A JUGAR<=\n";
            return;
    	}
		if(u<4)
		{
			u++;
			jugador2();
		}
	}while(y<=5&&u<=4||y==5&&u==4||a[0][0]==s1&&a[0][1]==s1&&a[0][2]==s1||a[1][0]==s1&&a[1][1]==s1&&a[1][2]==s1||a[2][0]==s1&&a[2][1]==s1&&a[2][2]==s1||a[0][0]==s1&&a[1][0]==s1&&a[2][0]==s1||a[0][1]==s1&&a[1][1]==s1&&a[2][1]==s1||a[0][2]==s1&&a[1][2]==s1&&a[2][2]==s1||a[0][2]==s1&&a[1][1]==s1&&a[2][0]==s1||a[0][0]==s1&&a[1][1]==s1&&a[2][2]==s1||a[0][0]==s2&&a[0][1]==s2&&a[0][2]==s2||a[1][0]==s2&&a[1][1]==s2&&a[1][2]==s2||a[2][0]==s2&&a[2][1]==s2&&a[2][2]==s2||a[0][0]==s2&&a[1][0]==s2&&a[2][0]==s2||a[0][1]==s2&&a[1][1]==s2&&a[2][1]==s2||a[0][2]==s2&&a[1][2]==s2&&a[2][2]==s2||a[0][2]==s2&&a[1][1]==s2&&a[2][0]==s2||a[0][0]==s2&&a[1][1]==s2&&a[2][2]==s2);
	
}
void jugador1()
{
	do
    {
        cout<<"\n==JUGADOR 1: "<<n1<<" ("<<s1<<")==\n\n=> Jugada #"<<y<<"\n=> FILA : ";
        cin>>c;
        if(c>2)
    	{
    		cout<<"\n=>!!EL NUMERO DEBE SER 0, 1, o 2.!!<=";
    		jugador1();
    	}
    	else 
    	if(c<0)
    	{
    		cout<<"\n=>!!EL NUMERO DEBE SER 0, 1 o 2.!!<=";
    		jugador1();
    	}
    }while(c>2&&c<0);
    if(c>=0&&c<=2)
    {
        do
        {
            cout<<"\n=> COLUMNA: ";
            cin>>b;
            if(b>2)
        	{
        		cout<<"\n=>!!EL NUMERO DEBE SER 0, 1, o 2.!!<=";
        		jugador1();
        	}
        	else 
        	if(b<0)
        	{
        		cout<<"\n=>!!EL NUMERO DEBE SER 0, 1 o 2.!!<=";
        		jugador1();
        	}
        }while(b>2&&b<0);
    }
    if(b>=0&&b<=2)
    {
        if(a[c][b]=='x'||a[c][b]=='o')
        {
            cout<<"\n=>!!CASILLA LLENA, PIERDE TURNO!!<=";
    	}
    	else
    	{
    		a[c][b]=s1;
    	}
    	system("cls");
        cout<<"\n\n==TABLERO==\n\n";
        for(c=0;c<3;c++)
        {
            for(b=0;b<3;b++)
            cout<<"|"<<a[c][b]<<"|";
            cout<<"\n";
        }
        
    }
}
void jugador2()
{
	do
	{
		cout<<"\n==JUGADOR 2: "<<n2<<" ("<<s2<<")==\n\n=> Jugada #"<<u<<"\n=> FILA : ";
        cin>>c;
        if(c>2)
    	{
    		cout<<"\n=>!!EL NUMERO DEBE SER 0, 1, o 2.!!<=";
    		jugador2();
    	}
    	else 
    	if(c<0)
    	{
    		cout<<"\n=>!!EL NUMERO DEBE SER 0, 1 o 2.!!<=";
    		jugador2();
    	}
    }while(c>2&&c<0);
    if(c>=0&&c<=2)
    {
        do
        {
            cout<<"\n=> COLUMNA: ";
            cin>>b;
            if(b>2)
        	{
        		cout<<"\n=>!!EL NUMERO DEBE SER 0, 1, o 2.!!<=";
        		jugador2();
        	}
        	else 
        	if(b<0)
        	{
        		cout<<"\n=>!!EL NUMERO DEBE SER 0, 1 o 2.!!<=";
        		jugador2();
        	}
        }while(b>2&&b<0);
    }
    if(b>=0&&b<=2)
    {
        if(a[c][b]=='x'||a[c][b]=='o')
        {
            cout<<"\n=>!!CASILLA LLENA, PIERDE TURNO!!<=";
    	}
    	else
    	{
    		a[c][b]=s2;
    	}
    	system("cls");
        cout<<"\n\n==TABLERO==\n\n";
        for(c=0;c<3;c++)
        {
            for(b=0;b<3;b++)
            cout<<"|"<<a[c][b]<<"|";
            cout<<"\n";
        }
    }
}
void reiniciar()
{
	for(c=0;c<3;c++)
	for(b=0;b<3;b++)
	a[c][b]=' ';
	system("cls");
	cout<<"\n=========================> REINICIADO <======================\n";
	cout<<"#############################################################"<<endl;
    cout<<"#                                                           #"<<endl;
    cout<<"#                 EL TABLERO HA SIDO LIMPIADO               #"<<endl;  
    cout<<"#                                                           #"<<endl;
    cout<<"#############################################################"<<endl;
    cout<<"\n\n==TABLERO==\n\n";
    for(c=0;c<3;c++)
    {
        for(b=0;b<3;b++)
        cout<<"|"<<a[c][b]<<"|";
        cout<<"\n";
    }
    cout<<"\n                                                      ..";
    cout<<"\n                              ,,,                         MM .M";
    cout<<"\n                          ,!MMMMMMM!,                     MM MM  ,.";
    cout<<"\n  ., .M                .MMMMMMMMMMMMMMMM.,          'MM.  MM MM .M'";
    cout<<"\n. M: M;  M          .MMMMMMMMMMMMMMMMMMMMMM,          'MM,:M M'!M'";
    cout<<"\n;M MM M: .M        .MMMMMMMMMMMMMMMMMMMMMMMMMM,         'MM'...'M";
    cout<<"\n M;MM;M :MM      .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.       .MMMMMMMM";
    cout<<"\n 'M;M'M MM      MMMMMM  MMMMMMMMMMMMMMMMM  MMMMMM.    ,,M.M.'MMM'";
    cout<<"\n  MM'MMMM      MMMMMM @@ MMMMMMMMMMMMMMM @@ MMMMMMM.'M''MMMM;MM'";
    cout<<"\n MM., ,MM     MMMMMMMM  MMMMMMMMMMMMMMMMM  MMMMMMMMM      '.MMM";
    cout<<"\n 'MM;MMMMMMMM.MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMM";
    cout<<"\n  ''.'MMM'  .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM       MMMM";
    cout<<"\n   MMC      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMMM";
    cout<<"\n  .MM      :MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM''MMM       MMMMM";
    cout<<"\n MMM      :M  'MMMMMMMMMMMMM.MMMMM.MMMMMMMMMM'.MM  MM:M.    'MMMMM";
    cout<<"\n.MMM   ...:M: :M.'MMMMMMMMMMMMMMMMMMMMMMMMM'.M''   MM:MMMMMMMMMMMM'";
    cout<<"\nAMMM..MMMMM:M.    :M.'MMMMMMMMMMMMMMMMMMMM'.MM'     MM''''''''''''";
    cout<<"\nMMMMMMMMMMM:MM     'M'.M'MMMMMMMMMMMMMM'.MC'M'     .MM";
    cout<<"\n '''''''''':MM.       'MM!M.'M-M-M-M'M.'MM'        MMM";
    cout<<"\n            MMM.            'MMMM!MMMM'            .MM";
    cout<<"\n             MMM.             '''   ''            .MM'";
    cout<<"\n              MMM.                               MMM'";
    cout<<"\n               MMMM            ,.J.JJJJ.       .MMM'"; 
    cout<<"\n                MMMM.       'JJJJJJJ'JJJM   CMMMMM";
    cout<<"\n                 MMMMM.    'JJJJJJJJ'JJJ .MMMMM'";
    cout<<"\n                   MMMMMMMM.'  'JJJJJ'JJMMMMM'";
    cout<<"\n                     'MMMMMMMMM'JJJJJ JJJJJ'";
    cout<<"\n                        ''MMMMMMJJJJJJJJJJ'";
    cout<<"\n                                'JJJJJJJJ'	";
}