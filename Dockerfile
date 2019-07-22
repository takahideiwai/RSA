# Base image -> VNC
FROM dorowu/ubuntu-desktop-lxde-vnc:bionic

MAINTAINER Takahide Iwai "tiwai@purdue.edu"

#install necessary tools
RUN apt-get update && apt-get -y install gedit libssl-dev gcc python

#create a non-root user
RUN useradd -d /home/user -m -s /bin/bash user

RUN echo 'user:user' | chpasswd

ENV USER=user \
    PASSWORD=user 












