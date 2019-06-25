## RSA Public-Key Encryption and Signature Lab
### Description of the scenario
RSA (RivestShamirAdleman) is one of the first public-key cryptosystems and is widely used for secure communication. The RSA algorithm first generates two large random prime numbers, and then use them to generate public and private key pairs, which can be used to do encryption, decryption, digital signature generation, and digital signature verification.  
### Target Audience
**Instructors**  
If you are an instructor teaching cybersecurity concepts, this lab can be used to provide hands-on experience on coding in C and how RSA works when encrypting/decrypting a message, signing/verifying signatures. This lab requires the students to understand the basic theory and mathematical concepts of RSA.
  
**Students**  
If you are a student studying cybersecurity concepts, it is essential for you to understand how RSA which is a widely used algorithm in encrypting and decrypting messages, signing and verifying digital certificates. You will be able to further understand how RSA works by doing hands on experiment in C language. 

### Design and Architecture  
This lab can be completed by using one Jupyter notebook container. The container comes with all the necessary tools such as *vim* text editor, *openssl* libraries, and *gcc* compiler.
The *answers* directory which contains all of the C code necessary to complete the lab has been created to further accomodate the students who are new to C. Students may use these codes as an exmple to complete the lab. The instructions can be found [here](https://takahideiwai.github.io/Cryptography/03-rsaAns/index.html). It is best for users to open up another tab and access the instructions while completing the tasks. 

### Installation and Usage
In order to build the image, type in the following commands in the terminal. 
```source
cd RSA
docker build -t rsa .
```
After the image has been created, you will be able to run the container by typing in
```source
docker run -p 8888:8888 rsa
```
You will be able to access the container by opening any web browser and typing in 0.0.0.0:8888 as the IP address. Once you gained access to the login screen, you will be able to login by copy and pasting the random token which will appear in your terminal. 

### Usage  
Upon successful login, the user will have access the Jupyter Notebook interface which contains access to the terminal, answers directory et cetera. The user will be able to access the instructions which contains a step by step instructions on how to complete this lab [here](https://takahideiwai.github.io/Cryptography/03-rsaAns/index.html).
### How to contribute
To report issues or contribute enhancements to this application, open a GitHub issue.
This lab was provided by [Seed lab](http://www.cis.syr.edu/~wedu/seed/Labs_16.04/Crypto/Crypto_RSA/).

