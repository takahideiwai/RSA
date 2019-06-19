# Base image -> jupyter/base-notebook
FROM jupyter/base-notebook

MAINTAINER Takahide Iwai "tiwai@purdue.edu"

#Change the user's permission to root in order to modify the Jupyter notebook 
USER root

#install necessary tools
RUN apt-get update && apt-get -y install vim libssl-dev gcc python2.7 python

#Copy necessary C code
COPY /answers/* /home/jovyan/answers/
RUN chmod 777 /home/jovyan/answers/
RUN  chown  jovyan /home/jovyan/answers/*
RUN  chgrp   users /home/jovyan/answers/*
RUN chmod 555 /home/jovyan/answers/*






