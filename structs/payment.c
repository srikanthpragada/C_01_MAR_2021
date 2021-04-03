enum paymentmode {
    CASH, CARD, NEFT, UPI
};

struct payment
{
   int billno;
   char customer[30];
   int amount;
   enum paymentmode mode;
};

void main()
{
 struct payment p;
 char pm = 'u';

      p.billno = 1;
      strcpy(p.customer, "Customer1");
      p.amount = 1000;
      if(pm == 'c')
         p.mode = CASH;
      else
        if (pm == 'u')
           p.mode = UPI;


      printf("%d  %s  %d  %d", p.billno,p.customer, p.amount, p.mode);
}
