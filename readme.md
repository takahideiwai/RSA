## RSA Public-Key Encryption and Signature Lab
### Description of the scenario
RSA (RivestShamirAdleman) is one of the first public-key cryptosystems and is widely used for secure communication. The RSA algorithm first generates two large random prime numbers, and then use them to generate public and private key pairs, which can be used to do encryption, decryption, digital signature generation, and digital signature verification.   
### Target Audience
**Instructors**  
If you are an instructor teaching cybersecurity concepts, this lab can be used to provide hands-on experience on coding in C and how RSA works when encrypting/decrypting a message, signing/verifying signatures. This lab requires the students to understand the basic theory and mathematical concepts of RSA.
  
**Students**   
If you are a student studying cybersecurity concepts, it is essential for you to understand how RSA, which is a widely used algorithm in encrypting and decrypting messages, signing and verifying digital certificates. You will be able to further understand how RSA works by doing hands on experiment in C language. 

### Design and Architecture  
This lab can be completed by using one VNC container. The container comes with all the necessary tools such as *gedit* text editor, *openssl* libraries, and *gcc* compiler.
The step by step instructions to complete all of the tasks can be found [here](https://takahideiwai.github.io/Cryptography/02-rsa/index.html). User will be able to access the instructions in a firefox web browser which is available within the container. 

### Installation and Usage
In order to build the image, type in the following commands in the terminal.  
```source
cd RSA
docker build -t rsa .
```
After the image has been created, you will be able to run the container by typing in
```source
docker run -d -p 80 rsa  
```  
You will be able to figure out the port number by typing in
```source
docker ps
```
You will be able to access the container by opening any web browser and typing in the following ip address. 
```source
0.0.0.0:<port number>
```

### Usage  
Upon successful access to the container, user will have access to the VNC interface which contains access to the terminal, gedit text editor, and firefox web browser. The user will be able to access the instructions which contains a step by step instructions on how to complete this lab by opening https://takahideiwai.github.io/Cryptography/02-rsa/index.html in the web browser. 
### How to contribute
To report issues or contribute enhancements to this application, open a GitHub issue.
This lab was provided by [Seed lab](http://www.cis.syr.edu/~wedu/seed/Labs_16.04/Crypto/Crypto_RSA/).

