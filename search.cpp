#include <iostream>
using namespace std;

int main () {
int nilai [5] , cari ;
int ada;
for (int i= 0; i <5 ; i++)
{
cout <<"masukan nilai:";
cin >> nilai [i] ;
}
cout << "masukan nilai yang dicari:";
cin >> cari;
for ( int i=0; i < 5; i++)
{
    
if (nilai[i]== cari )
{
ada = true;
break;
} else {
ada=false;
}
}
if (ada == true )
{
cout << " nilai ada" << endl;
} else {
cout << "nilai tidak ada" << endl;
}
return 0 ;

}