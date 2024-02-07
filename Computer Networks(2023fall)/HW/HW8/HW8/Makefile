SERVER_SRC = server.c
SERVER_OUT = server.out

CLIENT_DISP_SRC = client-disp.c
CLIENT_DISP_OUT = c1-disp.out c2-disp.out c3-disp.out c4-disp.out

CLIENT_TERM_SRC = client-term.c
CLIENT_TERM_OUT = c1-term.out c2-term.out c3-term.out c4-term.out

CC = gcc

all: $(SERVER_OUT) $(CLIENT_DISP_OUT) $(CLIENT_TERM_OUT)

$(SERVER_OUT): $(SERVER_SRC)
	$(CC) $< -o $@

c1-disp.out: $(CLIENT_DISP_SRC)
	$(CC) -DC1 $< -o $@

c2-disp.out: $(CLIENT_DISP_SRC)
	$(CC) -DC2 $< -o $@

c3-disp.out: $(CLIENT_DISP_SRC)
	$(CC) -DC3 $< -o $@

c4-disp.out: $(CLIENT_DISP_SRC)
	$(CC) -DC4 $< -o $@

c1-term.out: $(CLIENT_TERM_SRC)
	$(CC) -DC1 $< -o $@

c2-term.out: $(CLIENT_TERM_SRC)
	$(CC) -DC2 $< -o $@

c3-term.out: $(CLIENT_TERM_SRC)
	$(CC) -DC3 $< -o $@

c4-term.out: $(CLIENT_TERM_SRC)
	$(CC) -DC4 $< -o $@

clean:
	rm -f $(SERVER_OUT) $(CLIENT_DISP_OUT) $(CLIENT_TERM_OUT)

