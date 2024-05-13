# Disclaimer
This KeyLogger was created for **EDUCATIONAL USE ONLY**. Using this for anything malicious intent will have **legal repercussions**. DO NOT USE this on any computer that is not JUST YOUR SOLE computer or on
a unsuspecting user. Only use this with explicit permission on devices that condone it. It should only be used with proper authorization 

# Keylogger
This KeyLogger was created in C and is intended to simulate the dangers of a KeyLogger so I have a better understanding of what to look for when I encounter them in the CyberSecurity Field.
The basic idea is that once compiled and ran it hides in the background and keeps track of each key pressed and returns each individual key press to a txt file
that I named System33.

This keyLogger has the ability to log most keys and uses Microsofts Virtual-Key Values in order to do so. I used the values for Code Obfuscation which I describe below.
Here is the Key Code values I used: 
https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes


I wanted to also not make something that was unrealistic i.e a file named keylogger that logs keys. For real use most likley the name would be something much less obvious,
I only kept this name for demonstration purposes and clarity. Some parts of this code use techniques such as Code Obfuscation and Steganography. I will explain how I used these terms.

1. **Code Obfuscation**


    This technique invloved changing variable names to be more obscure, adding junk code, and adding random functions that never run but appear to.
    These are all ways it can be much more difficult for someone to detect Mal intent. Below are some example in my code

    ![CodeObsecureity](https://github.com/cscohera/Keylogger/assets/155030761/f0734029-dd00-4f50-af46-2657a819ef57)



    More Examples:



   ![codepart2](https://github.com/cscohera/Keylogger/assets/155030761/5d7cd834-7c84-4033-a2fc-57818c606849)


   Finally, here I used the values for key codes in order to better hide the program. I also could have
   changed the varible "DataReturned" to something more obscure like SystemRequest or something.
   Also I kept the keycodes like shift, ctrl, alt to help visualize which key is pressed. But if I was trying to be
   more obscure I would have used the last two numbers from each key code value to identify each key press.
   Such as Shift has a Key value of 0x10 so I would return 10. This would be more likely to be seen as just having
   the names of each key would not be practical. 


   ![code](https://github.com/cscohera/Keylogger/assets/155030761/3a68de89-f405-485b-966d-99a94e939ea1)

2. **Steganography**

   
    This technique involved hiding data within other non-suspicious data. I will be using an image as an example.
    I will not be including this in my repository but I will show you what it does
    The basic overview is that I binded a windows image of a boulder with my KeyLogger's Executable using winrar so that
    it appears to be just a image of said boulder. However, when said image is now open it also runs the Keylogger in the 
    background completely hidden from the user.

    ![BindingImageSetup](https://github.com/cscohera/Keylogger/assets/155030761/826ca115-f4db-48bd-b7d3-190783574b5b)




   Here you can see that the image of the boulder opened and in the background the Keylogger is now running.
   Also looking at the malware image labled picexe.png I used a technique with a rlo character that swapped exe with png
   so that the image appears to be a png.

   

   ![Demestartion](https://github.com/cscohera/Keylogger/assets/155030761/3f4ceb64-f4c2-4047-9c56-c0974a2e53fb)


# Things to Look Out for
1. **High CPU Usage**
   
   While not always the case High CPU Usage could indicate a virus/Malware. If a seemingly normal application is taking up vast amounts of resources
   it may be worth investigation. Many types of Malware use on a computer are resource demanding and will take up CPU Usage

2. **Overall Lower Performance and Faster Battery Drain**

   As said above Malware can be resource hungry so seeing a sudden inexplained drop in performance for a long period of time may be a indicator
   that its worth investigating.

3. **Changes to Your Device**

   You may notice things you haven't seen before like new tabs, websites opened, new toolbars or icons, and many other things that are different
   about your work space. It is crucial to notice these things especially after downloading something or accessing a site that seems malicious.

# Prevention

    Really think about what you download and make sure you fully trust the site. Be careful of links.  
    If you are unsure if a site is safe to click always check with sites like this: https://nordvpn.com/link-checker/
    This can prevent you from having a lot more trouble. 
    In emails check email addresses, email spellings, and every aspect of emails 
    you don't fully trust before clicking a link or replying with information.
