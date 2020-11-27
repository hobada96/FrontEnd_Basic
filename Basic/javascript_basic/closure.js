var createCar = function(f,p){
    var fuel = f;
    var power = p;
    var total = 0;
    return {
        run: function(km){
            console.log(fuel);
            var wastFuel = km / power;
            if(fuel < wastFuel){
                console.log('이동불가');
                retrun;
            }
            fuel -= wastFuel;
            total += km;

            
        },

        make: function(){

        }
    }
};

var car = createCar(10,2)
car.fuel = 0;
car.run(10);