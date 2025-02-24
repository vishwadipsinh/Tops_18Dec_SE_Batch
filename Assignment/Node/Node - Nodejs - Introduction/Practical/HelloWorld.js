// Import the built-in 'http' module to create an HTTP server
const http = require('http');

// Create an HTTP server using the createServer method
http.createServer((req, res) => {
    
    // Write a response to the client (browser)
    res.write("hello world let's learn node" + "\n");
    
    // End the response with a final message
    res.end("THE END");
    
// Make the server listen on port 5000, and log a message once the server is running
}).listen(5000, () => {
    console.log("running on port 5000"); // Log server status to the console
});
