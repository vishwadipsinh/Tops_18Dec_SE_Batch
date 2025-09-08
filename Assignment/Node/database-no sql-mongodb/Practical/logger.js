const fs = require("fs");
const path = require("path");

// Create a write stream for logging
const logStream = fs.createWriteStream(path.join(__dirname, "requests.log"), {
    flags: "a", // Append mode
});

const logger = (req, res, next) => {
    const logData = {
        time: new Date().toISOString(),
        method: req.method,
        url: req.originalUrl,
        body: req.body || {},
        headers: req.headers,
        ip: req.ip,
    };

    const logMessage = JSON.stringify(logData, null, 2);
    // console.log(logMessage); // Log to console
    logStream.write(logMessage + "\n\n"); // Log to file

    next(); // Pass control to the next middleware
};

module.exports = logger;
