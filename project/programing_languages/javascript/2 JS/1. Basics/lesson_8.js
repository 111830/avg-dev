// for (let i = 0; i <= 10; i++) {
//     if (i % 2 === 0) {
//         console.log(i);
//         break;
//     }
// }
// The 'break' statement is used to immediately exit the loop.

start:
for (let i = 0; i <= 10; i++) {
    if (i % 2 !== 0) {
        continue start;
    } else {
        console.log(i);
    }
}