//named function with number as return type
function add(x: number, y: number): number 
{
    return x + y;
}

    //anonymous function with number as return type
    let sum = function (x: number, y: number): number {
    return x + y;};

    console.log(sum(12,13));
        console.log(add(14,15));


    let sum1=(x:number,y:number)=>x+y;
    console.log(sum1(123,234));

    let sum2=(x:number,y:number)=>{return x+y};


    console.log(sum2(123,234));
//arrow functions
    let sum3=(x,y)=> x+y;

    let a1=sum3(123,234);
    console.log(a1)

    let sum4=()=>console.log("function with out return type");
    sum4();
