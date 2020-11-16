#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	struct sinhVien{
		char tensv[50];
		float diem;
		char hocLuc[20];
	    };

int ucln();
void rutGon();
void tinhTong();
void tinhHieu();
void tinhTich();
void tinhThuong();

void kTraSo();
void case2();
void tinhTien();
void tienDien();
void case5();
void case6();
void case7();
void case8();
void fptLott();
void case10();

int main(int argc, char *argv[]) {
	char a[100];
	int pas;
	int dem=0;
	char user[]={'d','a','t'};
	int pass=1234;
	nhap1:printf("\n\t\t\tXin moi ban nhap username & password!\n\n");
	printf("\nLUU Y: KHONG NHAP SAI QUA 5 LAN\n");
	printf("\n\t\t^_^ Username: dat\tpassword: 1234 ^_^\n\n");
	printf("\nXin moi nhap vao username: ");
	gets(a);
	printf("\nXin moi nhap vao pass: ");
	scanf("%d",&pas);
	fflush(stdin);
	if(strcmp(a,user)==0&&pas==pass){
		system("cls");
		goto a1;
	}else{
		dem++;
		if (dem>5){
			printf("Ban da nhap sai qua 5 lan, vui long quay lai sau 30 phut");
			exit(0);
		}
		system("cls");
		printf("\nDang nhap that bai do nhap sai username hoac pass word!!\n xin moi ban nhap lai!!\n\n");
		getch();
		system("cls");
		goto nhap1;
	}
	int so;
	a1:printf("\n\t\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	printf("\n\t\t\t\t|       TEN: HOANG XUAN DAT          |");
	printf("\n\t\t\t\t|       MSSV:PS12656                 |");
	printf("\n\t\t\t\t|       LOP: UD15308                 |");
	printf("\n\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
	printf("\n\t\t\t\t|~~~~~~        **MENU**        ~~~~~~|");
	printf("\n\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	printf("\n\t\t\t|   Chon 1. Kiem tra so nguyen                         |");
	printf("\n\t\t\t|   Chon 2. Tim uoc so chung va boi so chung cua hai so|");
	printf("\n\t\t\t|   Chon 3. Chuong trinh tinh tien cho quan karaoke    |");
	printf("\n\t\t\t|   Chon 4. Tinh tien dien                             |");
	printf("\n\t\t\t|   Chon 5. Chuc nang doi tien                         |");
	printf("\n\t\t\t|   Chon 6. Tinh lai xuat ngan hang vay tra gop        |");
	printf("\n\t\t\t|   Chon 7. Xay dung truong trinh vay tien mua xe      |");
	printf("\n\t\t\t|   Chon 8. Xap xep thong tin sinh vien                |");
	printf("\n\t\t\t|   Chon 9. Game FPT-LOTT                              |");
	printf("\n\t\t\t|   Chon 10. Tinh toan phan so                         |");
	printf("\n\t\t\t|   Chon 0. Thoat khoi menu                            |");
	printf("\n\t\t\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	printf("\n\t\t\tXin moi ban chon: ");
	scanf("%d",&so);
	switch(so){
		case 1:{
		system("cls");
		printf("\nChao mung ban den voi chuong trinh: kiem tra so nguyen\n");
		t1:kTraSo();
       int ql1;
	    w1:printf("\n\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\t|  1. Chon 1 tiep tuc       |");
	    printf("\n\t|  2. Chon 0 quay lai Menu  |");
	    printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\tXin moi ban lua chon: ");
	    scanf("%d",&ql1);
	      if(ql1<0||ql1>1){ 
	    system("cls");
	    	printf("Ban da nhap sai 0-->1\nVui long nhap lai!");
	    	goto w1;}
	     switch(ql1){
	      	case 1:{
	      		system("cls");
	            goto t1;
				break;
			  }
			case 0:{
				system("cls");
				goto a1;
				break;
			}
		}
		}
		case 2:{
			system("cls");
				printf("\nChao mung ban den voi chuong trinh: \n");
               ql2:case2();
               
                int ql2;
	    v2:printf("\n\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\t|  1. Chon 1 tiep tuc       |");
	    printf("\n\t|  2. Chon 0 quay lai Menu  |");
	    printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\tXin moi ban lua chon: ");
	    scanf("%d",&ql2);
	    if(ql2<0||ql2>1){ 
	    system("cls");
	    	printf("Ban da nhap sai 0-->1\nVui long nhap lai!");
	    	goto v2;}
	    	
	      switch(ql2){
	      	case 1:{
	      		system("cls");
	      		goto ql2;
				break;
			  }
			case 0:{
				system("cls");
				goto a1;
				break;
			}
		}
		}
		case 3:{
			system("cls");
			printf("\n\nChao mung ban den voi chuong trinh tinh tien cho quan karaok!@!");
				qlv3: tinhTien();  
				
	       int ql3;
	    v1:printf("\n\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\t|  1. Chon 1 tiep tuc       |");
	    printf("\n\t|  2. Chon 0 quay lai Menu  |");
	    printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\tXin moi ban lua chon: ");
	    scanf("%d",&ql3);
	    if(ql3<0||ql3>1){ 
	    system("cls");
	    	printf("Ban da nhap sai 0-->1\nVui long nhap lai!");
	    	goto v1;}
	    	
	      switch(ql3){
	      	case 1:{
	      		system("cls");
	      		goto qlv3;
				break;
			  }
			case 0:{
				system("cls");
				goto a1;
				break;
			}
		}}
		case 4:{
			system("cls");
    	d1:tienDien();
	     int ql4;
	    v4:printf("\n\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\t|  1. Chon 1 tiep tuc       |");
	    printf("\n\t|  2. Chon 0 quay lai Menu  |");
	    printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\tXin moi ban lua chon: ");
	    scanf("%d",&ql4);
	    if(ql4<0||ql4>1){ 
	    system("cls");
	    	printf("Ban da nhap sai 0-->1\nVui long nhap lai!");
	    	goto v4;}
	    	
	      switch(ql4){
	      	case 1:{
	      		system("cls");
	      		goto d1;
				break;
			  }
			case 0:{
				system("cls");
				goto a1;
				break;
			}
		  }
			break;
		}
		case 5:{
			system("cls");
			printf("\nChao mung ban den voi chuc nang: doi tien!\n");
		    t5:case5();
		
			int ql5;	
	    w5:printf("\n\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\t|  1. Chon 1 tiep tuc       |");
	    printf("\n\t|  2. Chon 0 quay lai Menu  |");
	    printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\tXin moi ban lua chon: ");
	    scanf("%d",&ql5);
	      if(ql5<0||ql5>1){ 
	    system("cls");
	    	printf("\nBan da nhap sai 0-->1\nVui long nhap lai!");
	    	goto w5;}
	     switch(ql5){
	      	case 1:{
	      		system("cls");
	            goto t5;
				break;
			  }
			case 0:{
				system("cls");
				goto a1;
				break;
			}
		}
	
		}
		case 6:{
			system("cls");
			printf("\nChao mung ban den voi chuc nang: Tinh lai xuat vay ngan hang tra gop!\n");
			t6:case6();
			
			
			int ql6;	
	    w6:printf("\n\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\t|  1. Chon 1 tiep tuc       |");
	    printf("\n\t|  2. Chon 0 quay lai Menu  |");
	    printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\tXin moi ban lua chon: ");
	    scanf("%d",&ql6);
	      if(ql6<0||ql6>1){ 
	    system("cls");
	    	printf("Ban da nhap sai 0-->1\nVui long nhap lai!");
	    	goto w6;}
	     switch(ql6){
	      	case 1:{
	      		system("cls");
	            goto t6;
				break;
			  }
			case 0:{
				system("cls");
				goto a1;
				break;
			}
		}
	
		}
		case 7:{
			system("cls");
			printf("\nChao mung ban den voi chuong trinh: vay tien mua xe !\n");
			ql7:case7();
				     int ql7;
	    o2:printf("\n\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\t|  1. Chon 1 tiep tuc       |");
	    printf("\n\t|  2. Chon 0 quay lai Menu  |");
	    printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\tXin moi ban lua chon: ");
	    scanf("%d",&ql7);
	    	    if(ql7<0||ql7>1){ 
	    system("cls");
	    	printf("Ban da nhap sai 0-->1\nVui long nhap lai!");
	    	goto o2;}
	    	
	      switch(ql7){
	      	case 1:{
	      		system("cls");
	      		goto ql7;
				break;
			  }
			case 0:{
				system("cls");
				goto a1;
				break;
			}
		  }
	
		}
		case 8:{
			system("cls");
			printf("\nChao mung ban den voi chuong trinh: Xap xep thong tin sinh vien!\n");
	        ql8:case8();
	         int ql8;
	    o8:printf("\n\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\t|  1. Chon 1 tiep tuc       |");
	    printf("\n\t|  2. Chon 0 quay lai Menu  |");
	    printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\tXin moi ban lua chon: ");
	    scanf("%d",&ql8);
	    	    if(ql8<0||ql8>1){ 
	    system("cls");
	    	printf("Ban da nhap sai 0-->1\nVui long nhap lai!");
	    	goto o8;}
	    	
	      switch(ql8){
	      	case 1:{
	      		system("cls");
	      		goto ql8;
				break;
			  }
			case 0:{
				system("cls");
				goto a1;
				break;
			}
		  }
	        
		}
		case 9:{
			system("cls");
		ql9:fptLott();
		     int ql9;
	    o1:printf("\n\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\t|  1. Chon 1 tiep tuc       |");
	    printf("\n\t|  2. Chon 0 quay lai Menu  |");
	    printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\tXin moi ban lua chon: ");
	    scanf("%d",&ql9);
	    	    if(ql9<0||ql9>1){ 
	    system("cls");
	    	printf("Ban da nhap sai 0-->1\nVui long nhap lai!");
	    	goto o1;}
	    	
	      switch(ql9){
	      	case 1:{
	      		system("cls");
	      		goto ql9;
				break;
			  }
			case 0:{
				system("cls");
				goto a1;
				break;
			}
		  }
		}
		case 10:{
			system("cls");
			printf("\nChao mung ban den voi chuong trinh: Tinh toan phan so !\n");
		    ql10:case10();
		     int ql10;
	    o10:printf("\n\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\t|  1. Chon 1 tiep tuc       |");
	    printf("\n\t|  2. Chon 0 quay lai Menu  |");
	    printf("\n\t+~~~~~~~~~~~~~~~~~~~~~~~~~~~+");
	    printf("\n\tXin moi ban lua chon: ");
	    scanf("%d",&ql10);
	    	system("cls");
	    	    if(ql10<0||ql10>1){ 
	    system("cls");
	    	printf("Ban da nhap sai 0-->1\nVui long nhap lai!");
	    	goto o10;}
	    	
	      switch(ql10){
	      	case 1:{
	      		system("cls");
	      		goto ql10;
				break;
			  }
			case 0:{
				system("cls");
				goto a1;
				break;
			}
		  }
		}
		case 0:{
			system("cls");
			printf("Chao tam biet!!\nHen gap lai sau  ^_^ !");
			break;
		}
		default:
	
			system("cls");
			printf("ban da nhap sai so 1-->10, xin moi ban nhap lai !");
			goto a1;
    	}

     	return 0;
       }

//case 1
  void kTraSo(){
   float so;
    	int i;
		int kTra=0;
    	int j;
	int count=0;
	cs:printf("Xin moi ban nhap vo so can kiem tra: ");
	scanf("%f",&so);
	 
	 if (so-(int)so==0){
	printf("\n==> %.0f La so nguyen ",so);
	}else{
	printf("\n==> %.2f khong phai la so nguyen ",so);
	printf("\n## khong the kiem tra so nguyen to va so chinh phuong!!\n");
	getch();
	   system("cls");
	goto cs;
	}
	//timsonguyento la so chi chia het cho 1 va chinh no	
		if (so<=1){//so nguyen to>2
		printf("\n==> %.2f khong phai la so nguyen to",so);
		}else{
    int so1=so;
	for(i=2;i<so1;i++){
		if(so1%i==0){
		kTra=1;
		}
	}
	
	if(kTra==0){
		printf("\n==> %d la so nguyen to",so1);
	}else{
		printf("\n==> %d khong phai la so nguyen to",so1);
	}
       }
       //timsochinhphuong sochinhphuong la binh phuong cua 1 so tu nhien
	for(j=1;j<so;j++){
    if(j*j == so){
    	count=1;
     } }
     if(count==1)
     printf("\n==> %.0f la so chinh phuong!",so);
     else
     printf("\n==> %.0f khong phai la so chinh phuong!",so);
	 }
	 
	 //case2
	 void case2(){
	printf("Tim uoc chung lon nhat va boi chung nho nhat");
	int a, b, i;
	printf("\n Moi ban nhap so a: ");
	scanf("%d",&a);
	printf(" \nMoi ban nhap so b: ");
	scanf("%d",&b);
	i=a*b;
	while(a!=b){
		if(a>b) a=a-b;//neu a>b thi lay a-b;
		else	b=b-a;//neu a<b thi lay b-a     cho den khi a=b la ucln neu ko ucln==1
	}
	printf("\n ==> UCLN cua 2 so la: %d",a); //ucln=a vi luc nay a==b&&a,b==1;		
	printf("\n ==> BCNN cua 2 so la: %d",i/a);//bcnn=(a*b)/ucln;
   }

// case 3
     void tinhTien(){
    float vao,ra,soGio,soTien;
	do{
	printf("\n\nLuu y quan chi hoat dong tu 12h-->23h");
	printf("\n\nXin moi nhap gio vao: ");
	scanf("%f",&vao);
	printf("\nXin moi nhap gio ra: ");
	scanf("%f",&ra);}
	while(ra<vao||vao<12||vao>23||ra>23||vao==ra);
	soGio=ra-vao;
	printf("\n==>Ban da hoat dong %.2f gio",soGio);
	if (soGio<=3){
	soTien=soGio*150000;}
	if (soGio>3){
			printf("\n Ban duoc giam 30%% sau 3 gio hoat dong \n");
       soTien=(soGio-3)*150000*0.7+3*150000; //sotien= -3h dau*150000 *
	}
	if (vao>=14&&ra<=17){
			printf("\nBan duoc giam 10%% do trong khung gio tu 14h-->17h\n");
		soTien=soTien*0.9;
	}
	printf("\n==>So tien ban phai tra la: %.2f VND",soTien);
   }

// case 4
  void tienDien(){
    printf("chao mung ban den voi chuc nang tinh tien dien ^_^\n");
	double soDien;
	double tien;
	int gia1=1678;
	int gia2=1734;
	int gia3=2014;
	int gia4=2536;
	int gia5=2834;
	int gia6=2927;
	
	do{
	printf("\t\n\nXin moi nhap vao so (kWh) dien da dung: ");
	scanf("%lf",&soDien);
	}while(soDien<0);
	if(soDien<=50){
	tien=soDien*gia1;
	printf("\n\n==>So tien ban phai tra la:%.0lf VND",tien);
	   }else if(soDien<=100){
		tien=50*gia1+(soDien-50)*gia2;//sodien-50 (50) gia 1 nen tru
		printf("\n\n==>So tien ban phai tra la:%.0lf VND ",tien);
	   }else if(soDien<=200){
	   	tien=50*gia1+50*gia2+(soDien-100)*gia3;
	   	printf("\n\n==> So tien ban phai tra la:%.0lf VND",tien);
	   }else if(soDien<=300){
	   	tien=50*gia1+50*gia2+100*gia3+(soDien-200)*gia4;
	   	printf("\n\n==> So tien ban phai tra la:%.0lf VND ",tien);
	   }else if(soDien<=400){
	   	tien=50*gia1+50*gia2+100*gia3+100*gia4+(soDien-300)*gia5;
	   	printf("\n\n==> So tien ban phai tra la: %.0lf VND ",tien);
	   }else {
	   	tien=50*gia1+50*gia2+100*gia3+100*gia4+100*gia5+(soDien-400)*gia6;
	   	printf("\n\n==> So tien ban phai tra la: %.0lf VND",tien);
	   }
   }
//case5
    void case5(){
    	int s[]={500000,200000,100000,50000,20000,10000,5000,2000,1000};
	int i, n,menhGia=1000,soTo=0,dem=0;
	do{
	lai:printf("\nBan muon doi bao nhieu tien: ");
	scanf("%d",&n);
	if(n%1000!=0){
		printf("\nSo tien ban nhap vao phai la boi so cua 1000. Vui long nhap lai!!");
		goto lai;}
	}while(n<1000);
	do{
	nh2:printf("\nBan muon doi tien menh gia bao nhieu: ");
	scanf("%d",&menhGia);
	if(menhGia%1000!=0){
		printf("Menh gia ban nhap vao phai >= 1000.Vui long nhap lai!");
		goto nh2;}
    }while(menhGia<1000);
    printf("Ban doi duoc so tien la:\n");
	for(i=0;i<9;i++){
		if (menhGia==s[i]){
			dem=i;
	    	for(dem;dem<9;dem++){
			   	soTo=n/s[dem];//soto=sotienmuondoi/menhgia s[] muon doi
			   	if (soTo>0){
			   	printf("%d to %d\n",soTo,s[dem]);
			   	n=n%s[dem];//sotienconlai= sotienGoc chia het cho s[]
				}
	    	}
		}
	}
}
  
//case 	6
void case6(){
	int i;
	float soTien=0,laiPhaiTra=0,gocPhaiTra=0,tienPhaiTra=0,tienConLai=0;
    	do{
		printf("\nXin moi nhap vao so tien can vay tra gop: ");
	scanf("%f",&soTien);
	    }while(soTien<0);
		printf("\nso tien can tra moi thang la: ");
	gocPhaiTra=soTien/12;
    	printf("\nki han\tLai phai tra\tGoc phai tra\tTien phai tra\tTien con lai");
	for(i=1;i<=12;i++){

		laiPhaiTra=soTien*0.05;
		tienPhaiTra=laiPhaiTra+gocPhaiTra;
        tienConLai=soTien-gocPhaiTra;
        soTien=soTien-gocPhaiTra;
        

        printf("\n%d\t%.2f\t%.2f\t%.2f\t%.2f",i,laiPhaiTra,gocPhaiTra,tienPhaiTra,tienConLai);
  	}
    }
//case7
void case7(){
	int i,j,n;
	float soTien,tienGoc,lai;
	do{
    	printf("So tien ban vay toi da la 500.000.000 VND");
    	printf("\nLai xuat la 7.2 %%\n");
    	printf("\nNhap so tien ban muon vay: ");
	scanf("%f",&soTien);
	}while(soTien>500000000||soTien<0);
	tienGoc=soTien/24; //tientra1thang = sotienvay/24nam
	for(i=1;i<=24;i++){
	lai=soTien*0.072;//lai 7.2%
	soTien=soTien-tienGoc;//tien con lai = sotienvay- tien tra moi thang	
    	printf("\n\n Nam\t   tienlai\t    tiengoc\t     tientra1nam\t    sotienconlai\n");
    	printf("%d\t   %.2f\t    %.2f\t       %.2f\t          %.2f",i,lai,tienGoc,tienGoc+lai,soTien);
    	printf("\n\nThang\t  tienlai\t      tiengoc\t      tientra1thang\t  \n\n");
	for(j=1;j<=12;j++){
    	printf("%d\t %.2f    \t     %.2f\t      %.2f\t         \n",j,lai/12,tienGoc/12,(tienGoc+lai)/12);
	}
	 getch();
    }    
    }

//case8


void case8(){
	int i,j,n;
    	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	fflush(stdin);
	struct sinhVien sv[n];
	for (i=0;i<n;i++){
		printf("Nhap ho va ten sinh vien %d: ",i+1);
		gets(sv[i].tensv);
		ab1:printf("Nhap vao diem sv: ");
		scanf("%f",&sv[i].diem);
		fflush(stdin);
	    if(sv[i].diem>10||sv[i].diem<0){
			printf("Nhap sai diem 1-->10!\n Vui long nhap lai!\n");
			goto ab1;
		}
		if(sv[i].diem<=10&&sv[i].diem>=9)strcpy(sv[i].hocLuc,"Xuat Sac");
		else if(sv[i].diem<9&&sv[i].diem>=8)strcpy(sv[i].hocLuc,"Gioi");
		else if(sv[i].diem<8&&sv[i].diem>=6.5)strcpy(sv[i].hocLuc,"Kha");
		else if(sv[i].diem<6.5&&sv[i].diem>=5)strcpy(sv[i].hocLuc,"Trung Binh");
		else if(sv[i].diem<5&&sv[i].diem>=0)strcpy(sv[i].hocLuc,"yeu");	
		
	}
	//Xap xep diem giam dan
	for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    	if(sv[i].diem>sv[j].diem){
    	struct sinhVien svtam;
    	svtam=sv[i];
	    sv[i]=sv[j];
	    sv[j]=svtam;
		}
	}}
	
	// xuat thong tin sv ra man hinh
	    printf("\t\tBANG KET QUA SAU KHI DA SAP XEP\n\n");
	for(i=0;i<n;i++){
		printf("Ten: %s\nDiem: %.1f\nHoc luc: %s\n\n",sv[i].tensv,sv[i].diem,sv[i].hocLuc);
	}
	}

// case 9
void fptLott(){
   	printf("Chao mung ban den voi chuong trinh game FPT-LOTT  ");
	srand(time(NULL));
	int so1,so2;
	printf("\nmoi ban chon 2 so bat ki tu 01---15: ");
	printf("\n\nSo thu nhat: ");
	scanf("%d",&so1);
	printf("\nSo thu hai: ");
	scanf("%d",&so2);
    int a=rand()%15 +1;
	int b=rand()%15 +1;
	printf("\nso chuong trinh quay la %d va %d\nso ban chon la %d va %d",a,b,so1,so2);	
    if(so1==a&&so2==b||so2==a&&so1==b){
    printf("\n==> chuc mung ban da trung giai nhat !");
    }	
	  else if(so1==a&&so2!=b||so1==b&&so2!=a){
	printf("\n ==> Xin chuc mung ban trung giai nhi !");
	}
	else if(so1!=a&&so2==b||so1!=b&&so2==a){
	printf("\n ==> Xin chuc mung ban trung giai nhi !");
	}else {
  	printf("\n==> chuc ban may man lan sau !!");
   }

  }

//case10
void case10(){
	int tu1,tu2,mau1,mau2;
	nh1:printf("Xin moi ban nhap vao phan so thu nhat!\n");
	printf("Nhap vao tu so: ");
	scanf("%d",&tu1);
	printf("Nhap vao mau so: ");
	scanf("%d",&mau1);
	printf("\nXin moi ban nhap vao phan so thu hai!\n");
	printf("Nhap vao tu so: ");
	scanf("%d",&tu2);
	printf("Nhap vao mau so: ");
	scanf("%d",&mau2);
	if (mau1==0||mau2==0){
		system("cls");
		printf("Mau so phai khac 0, Vui long nhap lai!!\n");
		getch();
		goto nh1;
      }
    
	printf("\n%d/%d + %d/%d = ",tu1,mau1,tu2,mau2);
	tinhTong(tu1,mau1,tu2,mau2);
	printf("\n%d/%d - %d/%d = ",tu1,mau1,tu2,mau2);
	tinhHieu(tu1,mau1,tu2,mau2);
	printf("\n%d/%d * %d/%d = ",tu1,mau1,tu2,mau2);
	tinhTich(tu1,mau1,tu2,mau2);
	printf("\n%d/%d / %d/%d = ",tu1,mau1,tu2,mau2);
	tinhThuong(tu1,mau1,tu2,mau2);
}

int ucln(int a,int b){
	while (a!=b){	
	if(a>b)
		a=a-b;	
	else	
		b=b-a;
      }
    }


void  tinhTong(int a,int b,int c, int d){
	int tu,mau;
	if(a==0&&c==0){
		printf("0");
	}else{
	tu= a*d+c*b;
	mau= b*d;
	if(tu==mau)
		printf("1");
	else 
	    printf("%d/%d",tu/ucln (abs(tu),abs(mau)),mau/ucln(abs(tu),abs(mau)));
      }//Hàm int abs(int x) tr? v? giá tr? tuy?t d?i c?a s? nguyên x.
    }

void  tinhHieu(int a,int b,int c, int d){
	int tu,mau;
	tu=a*d-c*b;
	mau=b*d;
	if (tu==0){
	    printf("0");
	}
	else{
    	if(tu==mau)
		printf("1");
	else 
	    printf("%d/%d",tu/ucln (abs(tu),abs(mau)),mau/ucln(abs(tu),abs(mau)));
    }
    }

void  tinhTich(int a,int b, int c, int d){
	int tu,mau;
	tu=a*c;
	mau=b*d;
	if(tu==0) { 
    	printf("0");
	}
	else{
	
		if(tu==mau)
	    	printf("1");
	    else 
		    printf("%d/%d",tu/ucln (abs(tu),abs(mau)),mau/ucln(abs(tu),abs(mau)));
       }
    }
void  tinhThuong(int a, int b, int c, int d){
	int tu,mau;
	tu=a*d;
	mau=b*c;
	if(tu==0) {
	     printf("0");
		 }
	else{
		if(tu==mau){
	    	printf("1");
			}
       else printf("%d/%d",tu/ucln (abs(tu),abs(mau)),mau/ucln(abs(tu),abs(mau)));
      }
      }

