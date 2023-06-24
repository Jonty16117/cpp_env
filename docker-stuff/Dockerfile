FROM alpine
# FROM ubuntu:22.10
# RUN apt update && apt add g++ -y && apt install tree
RUN apk update && apk add g++ && apk add tree
WORKDIR /home/files
VOLUME ./data /home/files
ENTRYPOINT ["tail", "-f", "/dev/null"]
