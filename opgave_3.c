  #include <stdio.h>
    /*Jeg hved godt at dette program giver et forkert tal 2 og et forkert resultat ud, men jeg hved desværre ikke hvordan jeg kan få det rigtige resultat*/

  int main(void)
  {
    int tal1, tal2, resultat;

    printf("skriv to ikke negative tal: \n");
    scanf(" %d, %d", &tal1, &tal2);
    while (resultat<1)
    {
        if (tal1%tal2==0 && tal2%tal1==0)
        {
            resultat=1;
        }
    }

    printf("%d og %d %d\n\n", tal1, tal2, resultat);
    return 0;
  }