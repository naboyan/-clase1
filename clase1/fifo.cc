

//Realizar un programa que permita registrar pacientes, se debe captura el nombre del paciente y el numero de documento.
//1. Mostrar los pacientes de tal manera que se muestre 1, 2, 3, etc según el orden de registro (Colas).

// semestre 3 Diurno

 /*
    AUTORES  /  semestre 3 Diurno
    
    JUAN CAMILO  ANGULO NABOYAN
    JORGE ENRIQUE SEGURA RODRIGUEZ 
    JHON NEIVER VALENCIA GRUESO
*/

 #include <iostream>
#include <malloc.h>
using namespace std;
 
struct paciente{
    int val=0;
    char nombre[30];
    paciente *sig;
}; 

paciente *cab, *aux, *aux2;

int registrar(){
     cout<<"REGISTRADOR DE PACIENTES"<<endl;
     cout<<"--------------------------"<<endl;

    if(cab==NULL){
        cab=(struct paciente*)malloc(sizeof(struct paciente));
        cout<<"Introduzca el documento de paciente: ";
        cin>>cab->val;
        cout<<"Introduzca el nombre de paciente: ";
        cin>>cab->nombre;
        cab->sig = NULL;
    }
    else
        {
            aux = (struct paciente*)malloc(sizeof(struct paciente));
            cout<<"introduzca el documento del paciente: ";
            cin>>aux->val;
            cout<<"Introduzca el nombre de paciente: ";
            cin>>aux->nombre;
            aux->sig=NULL;
            aux2=cab; 
            while (aux2->sig!=NULL)
            {
                aux2 = aux2->sig;
            }
            aux2->sig =aux;
            aux2=aux=NULL;
            free(aux);
            free(aux2);                    
        }
    return 0;
}

int mostar(){
     cout<<"PACIENTES REGISTRADOS"<<endl;
     cout<<"-----------------------"<<endl;
    for(aux=cab; aux!=NULL; aux=aux->sig){
    cout<<"Documento: "<<aux->val<<endl;
    cout<<"Nombre: "<<aux->nombre<<endl;
    cout<<endl;
    }
    return 0;
}

int main(){
    int opc=0;
    do{
        cout<<" MENU "<<endl;
        cout<<"-------"<<endl;
        cout<<" (1) registrar paciente"<<endl;
        cout<<" (2) ver pacientes"<<endl;
        cout<<" (3) salir"<<endl;
        cin>>opc;
        switch(opc){
            case 1: registrar();
            break;
            
            case 2: mostar();
            break;

            case 3:
                   cout<<"SU SECION A ACABADO";
                   break;
            
            default:
            cout<<"opcion no validad";
            break;       
        }
        
    }while(opc != 3);
    {   
      
    }

    {
    
    }

 return 0;
    
}