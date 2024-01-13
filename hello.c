/*program for currency converting
additional information :
1.dollar
2.euro
3.nrs
4.inr*/

#include<stdio.h>
#include<string.h>

int dollar();
int dollar1();
float dollar2();

int euro();
int euro1();
int euro2();

float nepali();
float nepali1();
float nepali2();

float indian();
float indian1();
float indian2();

int main()
{

    int choice;             // outer switch case statement

    int nep,eur,ind;
    
    int a,b,c,d;            // inner switch case statements 
    float dol,inr,nrs,eu;

    printf("THE MENU FOR CURRENCY\n");
    printf("\n");
    printf("Enter your choice:\n1.DOLLAR($) \n2.EURO(E)\n3.NRS(nepalese rupees)\n4.INR(indian rupees)\n");
    scanf("%d",&choice);

    printf("\n");


    switch(choice)
    {
        case 1:
              printf("DOLLAR related conversions\n");
              printf("1.DOLLAR -> NRS\n2.DOLLAR ->INR\n3.DOLLAR ->EURO\n");  // switch case for dollar 
              printf("enter any one\n");
              scanf("%d",&a);

              switch(a)
              {

                case 1:
                      printf("dollar into nepali currency\n");
                      nep = dollar();
                      printf("NRS = RS %d",nep);
                      break;

                          case 2:
                              printf("dollar into indian currency\n");
                              ind = dollar1();
                              printf("INR = %d IC",ind);
                           break;

                         case 3:
                            printf("dollar into euro\n");
                            eu = dollar2();
                            printf("EURO (E) = %f euro",eu);
                         break;

                  default:
                  printf("error!, option not exists\n");
              }
              break;

              case 2:
                 
                  printf("EURO related conversions\n");
                  printf("1.EURO -> NRS\n2.EURO ->dollar\n3.EURO ->INR\n");
                  printf("enter any one\n");
                  scanf("%d",&b);

                  switch(b)                   // switch case for euro 
                  {
                      case 1:
                         printf("euro into nepali rupees\n");                //euro into nepali rupees
                         nep = euro();
                         printf("NRS =  RS %d",nep);
                        break;

                           case 2:
                             printf("euro into dollar\n");                   //euro into dollar
                             dol = euro1();
                             printf("DOLLAR =  $ %d",dol);
                           break;

                       case 3:
                           printf("euro into indian currency\n");            // euro into indian rupees
                           ind = euro2();
                           printf("INR = %d IC",ind);
                          break;

                    default:
                    printf("sorry! option not exists\n");      
                  }
                  break;

                  
                case 3:
                        printf("NEPALI currency related conversions\n");           
                        printf("1.NRS-> DOLLAR\n2.NRS ->INR\n3.NRS ->EURO\n");
                        printf("enter any one\n");
                        scanf("%d",&c);

                        switch(c)                                    
                        {
                            case 1:                                             // switch case for nepali currecy
                                 printf("NRS into dollar\n");
                                 nrs = nepali();
                                 printf("DOLLAR = $ %f",nrs);
                                 break;

                                 case 2:
                                      printf("NRS into indian rupees\n");
                                      inr = nepali1();
                                      printf("INR =  IC %f ",inr);
                                      break;

                                case 3:
                                     printf("NRS into EURO\n");
                                     eu = nepali2();
                                     printf("EURO = %f",eu);
                                     break;
                      default:
                      printf("error!,option not exists\n");

                     }
                     break;

                case 4 :
                        printf("NEPALI currency related conversions\n");
                        printf("1.INR-> DOLLAR\n2.INR ->NRS\n3.INR ->EURO\n");
                        printf("enter any one\n");
                        scanf("%d",&d);

                        switch(d)
                        {

                            case 1:
                                printf("INR into DOLLAR\n");
                                dol = indian();
                                printf("DOLLAR =  $ %f",dol);
                                break;

                                  case 2:
                                    printf("INR into NRS\n");
                                    nrs = indian1();
                                    printf("NRS(nepalese rupees) =RS %f",nrs);
                                  break;
                                   
                              case 3:
                               printf("INR into euro\n");
                               eu = indian2();
                               printf("EURO  = %f",eu);
                               break ;

                           default :
                           printf("error!,option not exists\n"); 

                           break;                  
                    
                        }
               default :
               printf("error!, option not exist\n");                                   
    }
  return 0;
}

int dollar()
{
  int dollar,rs;
  printf("enter dollar:");     //dollar into nepali currency
  scanf("%d",&dollar);
  rs = dollar*130;
  return (rs);
}
int dollar1()
{
  int dollar,inr;
  printf("enter dollar\n");  // dollar into indian currency 
  scanf("%d",&dollar);
  inr = dollar*110;
  return (inr);
}

float dollar2()
{
  int dollar;
  float eur;
  printf("enter dollar\n");  //dollar into euro 
  scanf("%d",&dollar);
  eur = dollar*1.1;
  return (eur);
}



int euro()
{
  int euro,rs;
  printf("enter euro:");      //euro int nepali currency
  scanf("%d",&euro);
  rs = euro*(145);
  return (rs);
}

int euro1()
{
  int euro,dollar;
  printf("enter euro:");         //euro into dollar
  scanf("%d",&euro);
  dollar = euro*(1.09);
  return (dollar);
}

int euro2()
{
  int euro,ind;
  printf("enter euro:");        //euro into indian currency
  scanf("%d",&euro);
  ind = euro *(90.43);
  return (ind);
}

float nepali()
{
  int nep;
  float dollar;
  printf("enter nepali currency\n");  // nepali currency into dollar
  scanf("%d",&nep);
  dollar = nep/130;
  return (dollar);
}

float nepali1()
{
  float inr;
  int nep;
  
  printf("enter nepali currency\n");      //nepali currency into indian currency
  scanf("%d",&nep);
  inr = nep*0.63;
  return (inr);
}

float nepali2()
{
  int nep;
  float euro;
  printf("enter nepali currency\n");      //nepali currency into euro
  scanf("%d",&nep);
  euro = nep/145;
  return (euro);
}

float indian()
{
  int inr;
  float dollar;
  printf("enter indian rupees\n");        //indian rupees into dollar
  scanf("%d",&inr);
  dollar = inr*0.012;
  return (dollar);
}

float indian1()
{
  int inr;
  float nrs;
  printf("enter INR\n");                  //indian rupees into nepali rupees
  scanf("%d",&inr);
  nrs = inr*1.6;
  return (nrs);
}

float indian2()
{
  int inr ;
  float euro;
  printf("enter INR\n");                  //indian rupees into euro
  scanf("%d",&inr);
  euro = inr*0.011;
  return (euro);
}