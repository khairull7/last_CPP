#include <iostream>
using namespace std;
int main(){
    int x,y,k,b,c,u,t,z;
    char hasil;

    do{
    cout << "masukan jumlah kolum:";
    cin >> b;
    cout << "masukan jumlah baris:";
    cin >> c;
    cout << "\n";
    int arrx[1][b];
    int arry[1][b];
    for(int a=0;a<c;a++){
        for(int i=0;i<b;i++){
            cout << "masukan nilai x:";
            cin >> arrx[a][i];
        }cout << endl;
    }
    cout << "\n";
    for(int a=0;a<c;a++){
        for(int i=0;i<b;i++){
            cout << "masukan nilai y:";
            cin >> arry[a][i];
        }cout << endl;
    }
    cout << "\n";
    cout <<"Nilai X";
    cout << "\n";
    for(int a=0;a<c;a++){
        for(int i=0;i<b;i++){
            cout << " | " << arrx[a][i] << " | ";
        }cout << endl;
    }
    cout << "\n";
    cout << "\n";
    cout <<"Nilai Y";
    cout << "\n";
    for(int a=0;a<c;a++){
        for(int i=0;i<b;i++){
            cout << " | " << arry[a][i] << " | ";
        }cout << endl;
    }
    cout << "\n";
    cout << "[0]=*"<<endl;
    cout << "[1]=+"<<endl;
    cout << "[2]=-"<<endl;
    cout << "[3]=%"<<endl;
    cout << "[4]=/"<<endl;
    cout << "pilih nilai aritmatika:";
    cin >> z;
    cout << "\n";


    if (z == 0){
        cout <<"Nilai aritmatika *";
    cout << "\n";
    for(int a=0;a<c;a++){
        for(int i=0;i<b;i++){
            cout << " | " << arrx[a][i]*arry[a][i] << " | ";
        }cout << endl;
    }
    }

    else if (z == 1){
       cout <<"Nilai aritmatika +";
    cout << "\n";
    for(int a=0;a<c;a++){
        for(int i=0;i<b;i++){
            cout << " | " << arrx[a][i]+arry[a][i] << " | ";
        }cout << endl;
    }
    }
    else if (z == 2){
       cout <<"Nilai aritmatika -";
    cout << "\n";
    for(int a=0;a<c;a++){
        for(int i=0;i<b;i++){
            cout << " | " << arrx[a][i]-arry[a][i] << " | ";
        }cout << endl;
    }
    }
    else if (z == 3){
       cout <<"Nilai aritmatika %";
    cout << "\n";
    for(int a=0;a<c;a++){
        for(int i=0;i<b;i++){
            cout << " | " << arrx[a][i]%arry[a][i] << " | ";
        }cout << endl;
    }
    }
    else if (z == 4){
        cout <<"Nilai aritmatika /";
    cout << "\n";
    for(int a=0;a<c;a++){
        for(int i=0;i<b;i++){
            cout << " | " << arrx[a][i]/arry[a][i] << " | ";
        }cout << endl;
    }
    
    }

   cout << "apakah program akan dilanjutkan (Y/N) :"<<endl;
    cin >> hasil;
    }while(hasil=='Y' || hasil=='y' );
    while (hasil=='t'|| hasil=='T');
    cout << "terimakasih telah mencoba,see you...";


}