var addTwoNumbers = function(l1, l2) {
    var answer = []
    var num1 = 0
    var num2 = 0
    var num3 = 0
    for(let i=l1.length-1;i>=0;i--){
        num1 = (num1*10) + l1[i]
    }
    for(let i=l2.length-1;i>=0;i--){
        num2 = (num2*10) + l2[i]
    }
    var num3 = (num1 + num2) 
    while(num3 > 0){
        answer.push(num3%10)
        num3 = Math.floor(num3 /10)
    }
    return answer

};
console.log(addTwoNumbers([2,4,3],[5,6,4]))