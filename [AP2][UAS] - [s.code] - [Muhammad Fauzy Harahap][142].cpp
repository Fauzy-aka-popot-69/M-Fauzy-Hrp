#include <iostream>
#include <math.h>
using namespace std;
void swab (int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void mempercantik(){
    cout<<"----------------------------------------"<<endl;
}
struct pelanggan{
    string nama;
};
int main()
{
    struct pelanggan nama01;
    int code, price, sum, total, pay, change, i; 
    int rate[10]; 
    char yeah, ulang, buy;
    cout<<"----------------------------------------"<<endl;
    cout<<"Selamat datang Di program menu Starbucks"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Brewed and espresso coffee"<<endl;
    cout<<"---Handcrafted Espresso---"<<endl;
    cout<<"1. Americano     Rp20.000"<<endl;
    cout<<"2. Macchiato     Rp23.000"<<endl;
    cout<<"3. Asian Dolce Latte     Rp22.000"<<endl;
    cout<<"4. Vanilla/Caramel/Hazelnut Latte        Rp19.000"<<endl;
    cout<<"5. Cafe Latte    Rp25.000"<<endl;
    cout<<"6. Cappuccino    Rp28.000"<<endl;
    cout<<"7. Cafe Mocha    Rp25.000"<<endl;
    cout<<endl;
    cout<<"---Brewed Coffee--"<<endl;
    cout<<"8. Cold Brew     Rp17.000"<<endl;
    cout<<"9. Vanilla Sweet Cream Cold Brew         Rp18.000"<<endl;
    cout<<"10. Freshly Brewed Coffee                Rp18.000"<<endl;
    cout<<endl;
    cout<<"Nama Kamu Siapa?: ";
    getline(cin,nama01.nama);
    cout<<endl;
    cout<<"Apakah Anda ingin membeli? Y/T: ";
    cin>>buy;
    if (buy=='T'||buy=='t')
        cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))";
        else
            goto ulang;
    ulang:
    cout<<"Masukkan Kode nya ya pak: ";
    cin>>code;
    switch (code)
    {
        case 1:
        cout<<"Americano"<<endl;
        price=20000;
        cout<<"Mau Beli Berapa? : ";
        cin>>sum;
        total=price*sum;
        cout<<"Total Harganya        : Rp. "<<total<<endl;
        cout<<"Dibayar               : Rp. ";
        cin>>pay;
        change=pay-total;
        cout<<"Kembalian             : Rp."<<change<<endl;
        cout<<""<<endl;
        mempercantik();
        cout<<"Pesananan dengan nama "<<nama01.nama<<" membeli Americano berjumlah "<<sum<<endl;
        cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))"<<endl;
        cout<<"Apakah Anda Ingin Beli Lagi?: ";
        cin>>ulang;
        if (ulang=='Y'||ulang=='y') 
            goto ulang;
        else
            cout<<"1-10, Berapakah Nilai Pelayanan Kami: ";
            cin>>rate[i];
            cout<<"Terimakasih atas "<<rate[i]<<"yang kamu berikan"<<endl;
        cout<<"Masih ada yang lain om? Y/T : ";
        cin>>yeah;
        break;
        
        case 2:
        cout<<"Machiato"<<endl;
        price=23000;
        cout<<"Mau Beli Berapa? : ";
        cin>>sum;
        total=price*sum;
        cout<<"Total Harganya        : Rp. "<<total<<endl;
        cout<<"Dibayar               : Rp. ";
        cin>>pay;
        change=pay-total;
        cout<<"Kembalian             : Rp."<<change<<endl;
        cout<<""<<endl;
        mempercantik();
        cout<<"Pesananan dengan nama "<<nama01.nama<<" membeli Mochiato berjumlah "<<sum<<endl;
        cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))"<<endl;
        cout<<"Apakah Anda Ingin Beli Lagi?: ";
        cin>>ulang;
        if (ulang=='Y'||ulang=='y') 
            goto ulang;
        else
            cout<<"1-10, Berapakah Nilai Pelayanan Kami: ?";
            cin>>rate[i];
            cout<<"Terimakasih atas "<<rate[i]<<"yang kamu berikan"<<endl;
        cout<<"Masih ada yang lain om? Y/T : ";
        cin>>yeah;
        break;
        
        case 3:
        cout<<"Asian Dolce Latte"<<endl;
        price=22000;
        cout<<"Mau Beli Berapa? : ";
        cin>>sum;
        total=price*sum;
        cout<<"Total Harganya        : Rp. "<<total<<endl;
        cout<<"Dibayar               : Rp. ";
        cin>>pay;
        change=pay-total;
        cout<<"Kembalian             : Rp."<<change<<endl;
        cout<<""<<endl;
        mempercantik();
        cout<<"Pesananan dengan nama "<<nama01.nama<<" membeli Asian Dolce Latte berjumlah "<<sum<<endl;
        cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))"<<endl;
        cout<<"Apakah Anda Ingin Beli Lagi?: ";
        cin>>ulang;
        if (ulang=='Y'||ulang=='y') 
            goto ulang;
        else
            cout<<"1-10, Berapakah Nilai Pelayanan Kami: ?";
            cin>>rate[i];
            cout<<"Terimakasih atas "<<rate[i]<<"yang kamu berikan"<<endl;
        cout<<"Masih ada yang lain om? Y/T : ";
        cin>>yeah;
        break;
        
        case 4:
        cout<<"Vanilla/Caramel/Hazelnut Latte"<<endl;
        price=19000;
        cout<<"Mau Beli Berapa? : ";
        cin>>sum;
        total=price*sum;
        cout<<"Total Harganya        : Rp. "<<total<<endl;
        cout<<"Dibayar               : Rp. ";
        cin>>pay;
        change=pay-total;
        cout<<"Kembalian             : Rp."<<change<<endl;
        cout<<""<<endl;
        mempercantik();
        cout<<"Pesananan dengan nama "<<nama01.nama<<" membeli V/C/H Latte berjumlah "<<sum<<endl;
        cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))"<<endl;
        cout<<"Apakah Anda Ingin Beli Lagi?: ";
        cin>>ulang;
        if (ulang=='Y'||ulang=='y') 
            goto ulang;
        else
            cout<<"1-10, Berapakah Nilai Pelayanan Kami: ?";
            cin>>rate[i];
            cout<<"Terimakasih atas "<<rate[i]<<"yang kamu berikan"<<endl;
        cout<<"Masih ada yang lain om? Y/T : ";
        cin>>yeah;
        break;
        
        case 5:
        cout<<"Caffe Latte"<<endl;
        price=25000;
        cout<<"Mau Beli Berapa? : ";
        cin>>sum;
        total=price*sum;
        cout<<"Total Harganya        : Rp. "<<total<<endl;
        cout<<"Dibayar               : Rp. ";
        cin>>pay;
        change=pay-total;
        cout<<"Kembalian             : Rp."<<change<<endl;
        cout<<""<<endl;
        mempercantik();
        cout<<"Pesananan dengan nama "<<nama01.nama<<" membeli Caffe Latte berjumlah "<<sum<<endl;
        cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))"<<endl;
        cout<<"Apakah Anda Ingin Beli Lagi?: ";
        cin>>ulang;
        if (ulang=='Y'||ulang=='y') 
        goto ulang;
        else
        cout<<"1-10, Berapakah Nilai Pelayanan Kami: ?";
        cin>>rate[i];
        cout<<"Terimakasih atas "<<rate[i]<<"yang kamu berikan"<<endl;
        cout<<"Masih ada yang lain om? Y/T : ";
        cin>>yeah;
        break;
        
        case 6:
        cout<<"Cappuccino"<<endl;
        price=28000;
        cout<<"Mau Beli Berapa? : ";
        cin>>sum;
        total=price*sum;
        cout<<"Total Harganya        : Rp. "<<total<<endl;
        cout<<"Dibayar               : Rp. ";
        cin>>pay;
        change=pay-total;
        cout<<"Kembalian             : Rp."<<change<<endl;
        cout<<""<<endl;
        mempercantik();
        cout<<"Pesananan dengan nama "<<nama01.nama<<" membeli Cappuccino berjumlah "<<sum<<endl;
        cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))"<<endl;
        cout<<"Apakah Anda Ingin Beli Lagi?: ";
        cin>>ulang;
        if (ulang=='Y'||ulang=='y') 
            goto ulang;
        else
            cout<<"1-10, Berapakah Nilai Pelayanan Kami: ?";
            cin>>rate[i];
            cout<<"Terimakasih atas "<<rate[i]<<"yang kamu berikan"<<endl;
        cout<<"Masih ada yang lain om? Y/T : ";
        cin>>yeah;
        break;
        
        case 7:
        cout<<"Caffe Mocca"<<endl;
        price=25000;
        cout<<"Mau Beli Berapa? : ";
        cin>>sum;
        total=price*sum;
        cout<<"Total Harganya        : Rp. "<<total<<endl;
        cout<<"Dibayar               : Rp. ";
        cin>>pay;
        change=pay-total;
        cout<<"Kembalian             : Rp."<<change<<endl;
        cout<<""<<endl;
        mempercantik();
        cout<<"Pesananan dengan nama "<<nama01.nama<<" membeli Caffe Mocca berjumlah "<<sum<<endl;
        cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))"<<endl;
        cout<<"Apakah Anda Ingin Beli Lagi?: ";
        cin>>ulang;
        if (ulang=='Y'||ulang=='y') 
            goto ulang;
        else
            cout<<"1-10, Berapakah Nilai Pelayanan Kami: ?";
            cin>>rate[i];
            cout<<"Terimakasih atas "<<rate[i]<<"yang kamu berikan"<<endl;
        cout<<"Masih ada yang lain om? Y/T : ";
        cin>>yeah;
        break;
        
        case 8:
        cout<<"Cold Brew"<<endl;
        price=17000;
        cout<<"Mau Beli Berapa? : ";
        cin>>sum;
        total=price*sum;
        cout<<"Total Harganya        : Rp. "<<total<<endl;
        cout<<"Dibayar               : Rp. ";
        cin>>pay;
        change=pay-total;
        cout<<"Kembalian             : Rp."<<change<<endl;
        cout<<""<<endl;
        mempercantik();
        cout<<"Pesananan dengan nama "<<nama01.nama<<" membeli Cold Brew berjumlah "<<sum<<endl;
        cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))";
        cout<<"Apakah Anda Ingin Beli Lagi?: ";
        cin>>ulang;
        if (ulang=='Y'||ulang=='y') 
            goto ulang;
        else
            cout<<"1-10, Berapakah Nilai Pelayanan Kami: ?"<<endl;
            cin>>rate[i];
            cout<<"Terimakasih atas "<<rate[i]<<"yang kamu berikan"<<endl;
        cout<<"Masih ada yang lain om? Y/T : ";
        cin>>yeah;
        break;
        
        case 9:
        cout<<"Vanilla Sweet Cold Brew"<<endl;
        price=18000;
        cout<<"Mau Beli Berapa? : ";
        cin>>sum;
        total=price*sum;
        cout<<"Total Harganya        : Rp. "<<total<<endl;
        cout<<"Dibayar               : Rp. ";
        cin>>pay;
        change=pay-total;
        cout<<"Kembalian             : Rp."<<change<<endl;
        cout<<""<<endl;
        mempercantik();
        cout<<"Pesananan dengan nama "<<nama01.nama<<" membeli Vanilla Sweet Cold Brew berjumlah "<<sum<<endl;
        cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))"<<endl;
        cout<<"Apakah Anda Ingin Beli Lagi?: ";
        cin>>ulang;
        if (ulang=='Y'||ulang=='y') 
            goto ulang;
        else
            cout<<"1-10, Berapakah Nilai Pelayanan Kami: ?";
            cin>>rate[i];
            cout<<"Terimakasih atas "<<rate[i]<<"yang kamu berikan"<<endl;
        cout<<"Masih ada yang lain om? Y/T : ";
        cin>>yeah;
        break;
        
        case 10:
        cout<<"Freshly Brewed Coffee"<<endl;
        price=18000;
        cout<<"Mau Beli Berapa? : ";
        cin>>sum;
        total=price*sum;
        cout<<"Total Harganya        : Rp. "<<total<<endl;
        cout<<"Dibayar               : Rp. ";
        cin>>pay;
        change=pay-total;
        cout<<"Kembalian             : Rp."<<change<<endl;
        cout<<""<<endl;
        mempercantik();
        cout<<"Pesananan dengan nama "<<nama01.nama<<" membeli Freshly Brewed Coffee berjumlah "<<sum<<endl;
        cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))"<<endl;
        cout<<"Apakah Anda Ingin Beli Lagi?: ";
        cin>>ulang;
        if (ulang=='Y'||ulang=='y') 
            goto ulang;
        else
            cout<<"1-10, Berapakah Nilai Pelayanan Kami: ?";
            cin>>rate[i];
            cout<<"Terimakasih atas "<<rate[i]<<"yang kamu berikan"<<endl;
        cout<<"Masih ada yang lain om? Y/T : ";
        cin>>yeah;
        break;
        
    while (yeah=='T'||yeah=='t');
    cout<<"Terima Kasih Atas Kunjungan Kamu Di Starbucks Cabang Planet Mars :))";
    return 0;
}
}
