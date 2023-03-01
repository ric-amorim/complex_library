# Complex_Library
  A library in (C) for complex numbers.

# How to use it

  You have 2 files: **libcomplex.a**, **libcomplex.so**. A static library and a dynamic library, respectively.
  
   ## To use the static library just copy the file and compile your code:
  
      > $ gcc -Wall use_complex.c -o use_complex -L. -lcomplex -lm      
         
   (-L.) if it is in your current directory
        
   
   ## To use the dynamic one, just do the same thing like the static:
  
      > $ gcc -Wall use_complex.c -o use_complex -L. -lcomplex -lm
    
 
  Depending on the operating system you are using, you may have to run this command for the library to be found:
  
      > $ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
  
  
  
 # Some other info
 
  In the code folder you will found the implementation for the differents functions that the library contains.  :)
    
