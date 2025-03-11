                                                                                                                             
┌──(kali㉿kali)-[~]
└─$ export GITHUB_USERNAME=Wiibin
                                                                                                                                   
┌──(kali㉿kali)-[~]
└─$ cd ${GITHUB_USERNAME}/workspace
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace]
└─$ pushd .
~/Wiibin/workspace ~/Wiibin/workspace
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace]
└─$ source scripts/activate
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace]
└─$ git clone -b master  https://github.com/${GITHUB_USERNAME}/lab02.git projects/lab03
Cloning into 'projects/lab03'...
remote: Enumerating objects: 38, done.
remote: Counting objects: 100% (38/38), done.
remote: Compressing objects: 100% (30/30), done.
remote: Total 38 (delta 11), reused 7 (delta 0), pack-reused 0 (from 0)
Receiving objects: 100% (38/38), 8.04 KiB | 8.04 MiB/s, done.
Resolving deltas: 100% (11/11), done.                                             
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace]
└─$ cd projects/lab03              
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ git remote remove origin
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ git remote add origin https://github.com/${GITHUB_USERNAME}/lab03.git
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ g++ -std=c++11 -I./include -c sources/print.cpp                      
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ ls print.o
print.o
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ nm print.o | grep print
0000000000000000 T _Z5printRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSo
0000000000000026 T _Z5printRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt14basic_ofstreamIcS2_E
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ ar rvs print.a print.o
ar: creating print.a
a - print.o
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ file print.a
print.a: current ar archive
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ g++ -std=c++11 -I./include -c examples/example1.cpp
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ ls example1.o
example1.o
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ g++ example1.o print.a -o example1                 
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ ./example1 && echo
hello
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ g++ -std=c++11 -I./include -c examples/example2.cpp
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ nm example2.o          
0000000000000000 V DW.ref.__gxx_personality_v0
                 U __gxx_personality_v0
0000000000000000 T main
                 U _Unwind_Resume
                 U _Z5printRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt14basic_ofstreamIcS2_E
                 U _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
                 U _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
0000000000000000 W _ZNSt15__new_allocatorIcED1Ev
0000000000000000 W _ZNSt15__new_allocatorIcED2Ev
0000000000000000 n _ZNSt15__new_allocatorIcED5Ev
                 U _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
                 U _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
                 U _ZSt21ios_base_library_initv
0000000000000000 r _ZStL19piecewise_construct
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ g++ example2.o print.a -o example2                 
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ ./example2        
                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ ./example2 && echo

                                                                                                                                   
┌──(kali㉿kali)-[~/Wiibin/workspace/projects/lab03]
└─$ edit README.md
