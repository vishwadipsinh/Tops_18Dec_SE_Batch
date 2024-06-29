// Set up a function to run every second using setInterval
setInterval(() => {

    // Get the current date and time
    const current = new Date();


    // Arrays for days of the week and months
    let alldays = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];

    let allmonths = [" January ", " February ", " March ", " April ", " May ", " June ", " July ", " August ", " September ", " October ", " November ", " December "];


    // Extract day of the week, month, day of the month, and year
    const dayofweek = alldays[current.getDay()]; // current.getDay() returns 0-6 (Sun-Sat)
    const month = allmonths[current.getMonth()]; // current.getMonth() returns 0-11 (Jan-Dec)
    const dayofmonth = current.getDate(); // Returns the day of the month (1-31)
    const cyear = current.getFullYear(); // Returns the current year (e.g., 2024)


    // Format:- Day, Month, Day of month, Year
    const show = dayofweek + ", " + month + " " + dayofmonth + ", " + cyear;


    // Display the formatted date on an HTML element with id 'daycontainer'
    document.getElementById('daycontainer').textContent = show;




    // Display the current time
    const time = document.querySelector(".display #time");
    let date = current;
    let hours = date.getHours(); // Get hours (0-23)
    let minutes = date.getMinutes(); // Get minutes (0-59)
    let seconds = date.getSeconds(); // Get seconds (0-59)
    let day_night = "AM"; // Initialize daytime indicator

    // Convert hours to 12-hour format and set daytime indicator
    if (hours > 12) {
        day_night = "PM";
        hours = hours - 12;
    }

    // Add leading zeros to single-digit minutes and seconds
    if (seconds < 10) {
        seconds = "0" + seconds;
    }
    if (minutes < 10) {
        minutes = "0" + minutes;
    }
    if (hours < 10) {
        hours = "0" + hours;
    }


    // Format time as HH:MM:SS AM/PM
    time.textContent = hours + ":" + minutes + ":" + seconds + " " + day_night;

}); // End of setInterval function