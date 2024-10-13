FROM ubuntu:24.04 AS ex_c

WORKDIR /C/

RUN apt-get update && apt-get -y upgrade

RUN apt-get -y install build-essential

FROM ubuntu:24.04 AS ex_java

WORKDIR /Java
