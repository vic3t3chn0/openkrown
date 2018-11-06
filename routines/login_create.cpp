#include "routines.h"
using namespace std;

/// This function does the folowing tasks
/// 1: Checks if the file exists
/// 2: Gets The raw lines
/// 3: extracts raw ID and PASSWORD
/// I let errors handling to you ,now there is a standard
///   the first line containes the id the second containes the PASSWORD

void get_ID_and_PASS(char fileName[30],char *id,char *pass)
{
    FILE *F = fopen(fileName,"r");

    if(F)// 1
    {
        int count = 0;
        while(!feof(F))
        {
            char rawLine[50];

            fscanf(F,"%s",rawLine);// 2

            if(!count++)// 3
                strcpy(id,rawLine);
            else
                strcpy(pass,rawLine);

        }
    }else printf("Cannot open this file");

    fclose(F);
}


int login_create()
{
    char ans;
    int dd, mm, yy;

    char fileName[30] = "IDs_file.txt";
    char userID[20],userPassW[20];
    char strID[30]="\0",strPASSW[30]="\0";
    char IDpref[20] = "id:\0",PASSWpref[20] = "pass:\0";
    get_ID_and_PASS(fileName,userID,userPassW);

    int chances = 3;
    char cChoice;

    printf("Do you want to register y/n -> ");

    while (chances)
    {
          printf("Enter User ID -> ");
          scanf("%s",strID);
          printf("\n");
          printf("Enter Your Password -> ");
          scanf("%s",strPASSW);

          strcpy(strID,strcat(IDpref,strID));
          strcpy(strPASSW,strcat(PASSWpref,strPASSW));

          if (!strcmp(strID,userID)&&!strcmp(strPASSW,userPassW))
          {
              printf("Correct User ID And Password\n");
              printf("\n\nDo something here!\n\n"); ///DO SOMETHING HERE!

              break;
          }
          else
          {
              printf("Invalid User ID And Password\n\n");
              chances--;
              system("cls");

              if(!chances)
              {
                  printf("You have no more chances...\n");
                  printf("Do you want to register y/n -> ");

                  cChoice = getch();
                  printf("\n");

                  if(cChoice=='Y'||cChoice=='y')
                  {
                      FILE *F = fopen(fileName,"w");

                      printf("Enter your new ID -> ");
                      scanf("%s",strID);
                      fprintf(F,"id:%s\n",strID);

                      printf("Enter your new PW -> ");
                      scanf("%s",strPASSW);
                      fprintf(F,"pass:%s",strPASSW);

                      fclose(F);

                      break;
                  }
              }
          }
  }

    do {
       cout<<"Enter Date: \n";
       cin>> dd;

       cout<<"Enter Month: \n";
       cin>> mm;

       cout<<"Enter Year: \n";
       cin>> yy;


       cout<<"Do you want to try again ??? (Y/N)"<<endl;
       cin>>ans;
   } while (ans != 'n' && ans != 'N');

}
