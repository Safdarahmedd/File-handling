# include <stdio.h>
# include <string.h>
   
int main( )
{
  
      FILE *filePointer ;
      
      char dataToBeWritten[50] 
        = "OSSP lab Assignment 1";
  
      filePointer = fopen("Test.txt", "w") ;
      
    
    if ( filePointer == NULL )
    {
        printf( "Test.txt file failed to open." ) ;
    }
    else
    {
          
        printf("The file is now opened.\n") ;
          
        // Write the dataToBeWritten into the file
        if ( strlen (  dataToBeWritten  ) > 0 )
        {
              
            // writing in the file using fputs()
            fputs(dataToBeWritten, filePointer) ;   
            fputs("\n", filePointer) ;
        }
          
        // Closing the file using fclose()
        fclose(filePointer) ;
          
        printf("Data successfully written in file Test.txt\n");
        printf("The file is now closed.") ;

FILE *readPointer ;
      
        char dataToBeRead[50];
  
        readPointer = fopen("Test.txt", "r") ;
      
    
    if ( readPointer == NULL )
    {
        printf( "Testxt file failed to open." ) ;
    }
    else
    {
          
        printf("The file is now opened.\n") ;
          
       
        while( fgets ( dataToBeRead, 50, readPointer ) != NULL )
        {
          
            // Print the dataToBeRead 
            printf( "%s" , dataToBeRead ) ;
         }
          
  
        fclose(filePointer) ;
          
        printf("Data successfully read from file Test.txt\n");
        printf("The file is now closed.") ;
    }
    return 0;        
}
