#include <stdio.h>

int hab, maxhab,max, porc, cont,mas100, contM, acum, prom, i;

main(){
	
	for(i=0;i<5;i++){
		
		printf("Cantidad de habitantes en la provincia numero %d\n  ", i );
		scanf("%d", &hab);
		acum= acum + hab;
		cont= cont +1;
		
		
		if(cont == 1 || hab > max){
			maxhab= hab;
			contM= cont;
		}
		
		if(hab > 100){
			mas100= +1; 
			
		}
		
	}
	porc = (mas100 * 100)/ cont;
	prom= acum / cont;
	
	printf("****************************\n");
	printf("  -La provincia numero = %d tiene el mayor numero de habitantes = %d \n", contM, maxhab);
	printf("  -Porcentaje de provincias con mas de 100 habitantes           = %d \n", porc);
	printf("  -Promedio de habitantes por provincia = %d\n", prom);
	printf("  -Total de habitantes                  = %d\n", acum);
	
	
}
