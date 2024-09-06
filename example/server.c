#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../shared/include/http.h"
#include "../shared/include/server.h"

void handler (request req, response res){
    if(strcmp(req.url, "/") == 0) (res.write_head)(&res, 200);
    else (res.write_head)(&res, 404);
    
}

int main(int argc, char **argv){
    int port;
    
    if(argc == 2) {
        port = atoi(argv[1]);
    }else {
        fprintf(stderr, "Invalid number of parameters");
        exit(1);
    }

    server http_server = create_server();
    (http_server.listen)(&http_server, port, handler);
    return 0;
}
