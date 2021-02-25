//Malik Thomas

/** System calls that allocates A system V shared memory**/
#include <sys/ipc.h> 
#include <sys/shm.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void help();

int main(int argc, char *argv[])
{
    int shmid;
    char filename[100], c;
    int i = 0;
    FILE *file;
    

    int opt = 0;


    if( argc < 2) {
        
        //usage
        printf("Usage: master [-h] [-s i] [-t time] datafile\n");
        return 0;
    }
    
    if (file == NULL) {

        perror("master: Error: Can't read file \n");
        return (1);
    }

    else {

        FILE *file = fopen(filename, "r");
    }
   
    //Command Line Options
    while ((opt = getopt(argc, argv, "hsit:")) != -1)
    {
        switch (opt)
        {
            case 'h':

            help();
            return 0;
                
            break;
            case 's':
                

            break;
            case 'i':

            break;
            case 't':

            break;
            default:
               // environment();
                return 0;
            
        }
    } 
    
    return 0;
}
  
//displaying help message, describing the function of all arguements 
void help()
{
    printf("Usage: master [-h] [-s i] [-t time] datafile\n");
    printf("master will take in several command line options: \n");
    printf("-h     : Will display the help message that describe how project should be ran.\n");
    printf("-s i : Indicates the # (i) of children allowed to exit in the system at the same time.\n");
    printf("-t time : Will allow you to specify maximum time (time) for process execution.\n");
    printf("datefile : Is the Input file that contains one integer on each line.\n");



}








