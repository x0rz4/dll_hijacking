#dll hijacking bypassuac

###0x00 Dll hijacking？

Hijack DLL,Need to understand the flow of DLL in Windows
In Windows environments when an application or a service is starting it looks for a number of DLL’s in order to function properly. If these DLL’s doesn’t exist or are implemented in an insecure way (DLL’s are called without using a fully qualified path) then it is possible to escalate privileges by forcing the application to load and execute a malicious DLL file.

It should be noted that when an application needs to load a DLL it will go through the following order:

The directory from which the application is loaded
C:\Windows\System32
C:\Windows\System
C:\Windows
The current working directory
Directories in the system PATH environment variable
Directories in the user PATH environment variable

###0x01 bypassuac
There are usually several ways to bypass uac:
1. Whitelist mechanism over uac
2. Dll hijacking (this article discusses this)
3. Windows itself bypassed
4. Com hijacking
5. Remote injection


###0x02 How to find that the program can be hijacked by dll?
Here you need to use ProcessMonitor. Process Monitor starts, first open the filter to find the process of the application to be hijacked

If A.exe needs to call the A.dll file and use the A function inside, then A.exe needs to load A.dll. If A.exe did not say where to put this dll during development, only the name of the dll Called A.dll, then A.exe will first find A.dll in the current directory, not found? A.exe will go to the Windows system directory to find. Haven't found it yet? A.exe will go to the directory listed in the environment variable. Still nowhere? Then report it wrong. Taking advantage of this feature, we renamed A.dll as A_fucked.dll and placed it in the A.exe directory. Then we put our own dll in the A.exe directory and named it A.dll. In this way, A.exe When starting, it will load our A.dll and call the A function inside. We have changed the A function inside. This function will call the A function in A_fucked.dll. For A.exe and users, we should do All the things are done and the program is executed, so generally no abnormality is felt, so we can add some other code to do things that we love.

Use Dll_hijacker this tool can quickly generate dll

First, we need to find the normal dll called by the program, and the DLL file will be copied from the directory. This is for dll forwarding and let the program load the dll normally. Use Dll_hijacker to generate cpp files.

###0x03
reference：
https://github.com/zhaoed/DLL_Hijacker

https://github.com/CaledoniaProject/DLL_Hijacker_Rewritten

https://pentestlab.blog/2017/03/27/dll-hijacking/






