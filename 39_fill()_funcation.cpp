#include<iostream>

 // FILL = " FILLS A RANGES OF ELEMENTS WEIT A SPECIFIC VALUE"
 //     FILL(BEGIN,END,VALUE);

int  main()

{
   const int SIZE = 99;

   std::string names[SIZE];

   fill(names,names+(SIZE/3),"jatin");
   fill(names +(SIZE/3),names + (SIZE/3)*2,"SWATI");
   fill(names +(SIZE/3)*2,names + SIZE,"renuka");
   

   for(std::string name : names)
   {
    std::cout << name << std::endl;
   }

   return 0;

}