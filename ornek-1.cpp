#include <iostream>
using namespace std;



int main( ){
    
    int gun ;
    
    cout << " haftanın gunlerini sayi olarak giriniz: \n";
    cin >> gun;
    
    switch (gun) {
        case 1 : cout << " pazartesi \n";
            break;
        case 2 : cout << " sali \n";
            break;
        case 3 : cout << " çarşamba \n";
            break;
        case 4 : cout << " perşembe \n";
            break;
        case 5 : cout << " cuma \n";
            break;
        case 6 : cout << " cumartesi \n";
            break;
        case 7 : cout << " pazar \n";
            break;
        default : cout << " yanlış bir sayi girdiniz. \n";
    }
        
            
            
    return 0;
}
