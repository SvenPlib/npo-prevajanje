FROM gcc:latest
WORKDIR /app
COPY . .
RUN gcc -o test_program main.c test_main.c
CMD ["./test_program"]
EOF