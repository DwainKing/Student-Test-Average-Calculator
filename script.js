function calculateAverage() {
    let input = document.getElementById("scores").value;

    let scores = input.split(",").map(num => Number(num.trim()));

    let testTotal = 0; // accumulator (like your C++)

    let numStudents = scores.length;

    // loop (like your C++ for loop)
    for (let i = 0; i < numStudents; i++) {
        testTotal += scores[i];
    }

    let average = testTotal / numStudents;

    document.getElementById("result").innerText =
        "Number of Test: " + numStudents +
        " | Average: " + average.toFixed(2);
}
