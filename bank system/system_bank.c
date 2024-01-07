#include <stdio.h>
#include <string.h>
// ======== variabol =========
int i,j,x,choose,choce,neg_balane,amount,withdraw;
char y_n ;
char users      [20] [20] = {"mohamed","ahmed","eslam","ebrahem","galal","elsayed","karem"};
char passwords  [20] [20] = {"1234","2233","1122","3344","5566","8888","9988"};
int balanc           [20] = {100,300,1000,500,400,900,1200};
char user_name  [20];
char pass_word  [20];
char usernamep  [20];
// ==========fanction===========
void transactions(void);
void check_balnce(void);
void transfer_monay(void);
void withdraw_money(void);
void deposit_money(void);
void successfully(void);
// =============================
int main(){
    system("cls");
    system("color 5e");
    // take value from user
    system("cls");
    printf("\n\tWelcome To Bank Masr\n");
    printf("\t========================\n");
    printf("\n\t=====>> log in <<=====\n");
    one:
    printf("\n\tplease enter the username :");
    scanf("%s",user_name);
    printf("\n\tplease enter the password :");
    scanf("%s",pass_word);
    // check information
    for (int i=0;i<7;i++){
        x = x + i;
        if (strcmp(users[i],user_name)==0 && strcmp(passwords[i],pass_word)==0){
            transactions(); 
            }
        }
            printf("\n\t===============================\n");
            printf("\n\twrong password or username !!\n");
            printf("\n\tPlease ReEnter The password\n");
            printf("\n\t===============================\n");
            goto one;
    }
//==================================================
void transactions(void){
    system("cls");
    printf("Fetching account details.....\n\n");
    for (i = 0; i < 70; i++) {
        for (j = 0; j < 1200000; j++) {
            j++;
            j--;
        }
        printf("*");
    }
    printf("\n\tLOGIN SUCCESSFUL....\n");
    printf("\t=====================\n\n");
    printf("\t 1.... CHECK BALANCE\n\n");
    printf("\t 2.... TRANSFER MONEY\n\n");
    printf("\t 3.... withdraw money\n\n");
    printf("\t 4.... deposit money\n\n");
    printf("\t 5.... EXIT\n\n");
    printf("\t ENTER YOUR CHOICES..");
    scanf("%d",&choose);
    //====================
    if (choose == 1){
        check_balnce();
    }else if(choose == 2){
        transfer_monay();
    }else if(choose == 3){
        withdraw_money();
    }else if(choose == 4){
        deposit_money();
    }else if(choose == 5){
        exit(0);
    }else{
        printf("wrong choice !!"); 
        }
    }
//==========================================
void check_balnce(void){
    system("cls");
    printf("\n==== BALANCE DASHBOARD ====\n");
    printf("===========================\n");
    printf("\n\tthe balance is :%d\n",balanc[x]);
    successfully();
    }
//==========================================
void transfer_monay(void){
    system("cls");
    printf("\t===== TRANSFER MONEY ====\n");
    printf("\t=========================\n\n");
    printf("\tplease enter the balane : ");
    scanf("%d", &neg_balane);
    if (balanc[x]>neg_balane && neg_balane > 0){
        printf("\tTO (username of person) : ");
        scanf("%s", &usernamep);
        balanc[x] = balanc[x] - neg_balane;
        printf("\n\ttransfering amount, Please wait..\n\n");
        for (i = 0; i < 100; i++) {
            for (j = 0; j < 1200000; j++) {
                j++;
                j--;
            }
            printf("*");
        }
        printf("\n\tthe balance is : %d\n",balanc[x]);
        printf("\n\tAMOUNT SUCCESSFULLY TRANSFERRED....\n");
        successfully();
        }else{
            printf("\n\tYour balance is not allowed !!\n");
            printf("\n\tDo you want to try again? (y/n) :");
            scanf(" %c",&y_n);
            if (y_n == 'y'){
                transfer_monay();
            }else if (y_n == 'n'){
                transactions();
            }else{
                printf("wrong choice !!"); 
            }
        }
    }
//==================================================
void withdraw_money(void){
    system("cls");
    printf("\t===== withdraw money ====\n");
    printf("\t=========================\n\n");
    printf("\tPlease enter the withdrawal amount : ");
    scanf("%d",&withdraw);
    if (balanc[x]>withdraw && withdraw > 0){
    balanc[x] = balanc[x] - withdraw;
    printf("\n\tThe amount has been withdrawn successfully\n");
    printf("\n\tthe balance is : %d\n",balanc[x]);
    successfully();
        }else{
            printf("\n\t============================================\n");
            printf("\n\tthere is not enough moneu in your account or invalid number !!\n");
            successfully();
        }
    }
//==================================================
void deposit_money(void){
    system("cls");
    printf("\t===== deposit money =====\n");
    printf("\t=========================\n\n");
    printf("\tPlease enter the deposit amount : ");
    scanf("%d",&amount);
    balanc[x] = balanc[x] + amount;
    printf("\n\tThe amount has been deposited successfully\n");
    printf("\n\tthe balance is : %d\n",balanc[x]);
    successfully();
    }
//==================================================
void successfully(void){
    printf("\n\t1.....Account access\n\n");
    printf("\t2.....Exit\n\n");
    printf("Press enter to continue :");
    scanf("%d",&choce);
        if (choce == 1){
        system("cls");
        transactions();
    }else if(choce == 2){
        exit(0);
    }else{
        printf("wrong choice !!"); 
        }
    }