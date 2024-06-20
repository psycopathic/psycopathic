//read a file and remove the extra space between and rewrite the file
const fs = require('fs');

fs.readFile("a.txt", "utf-8", function(err, data) {
    if (err) {
        console.error("Error reading file:", err);
        return;
    }
    data = data + "harsh has just started";
    fs.writeFile("a.txt", data, function(err) {
        if (err) {
            console.error("Error writing file:", err);
        } else {
            console.log("File successfully updated!");
        }
    });
});
