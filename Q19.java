class Vehicle{
    protected String make, model, fuelType;
    protected int year;
    // Vehicle(String make,String model,String fuelType, int year){
    //     this.make=make;
    //     this.model=model;
    //     this.fuelType=fuelType;
    //     this.year=year;
    // }
    String fuelEfficiency(){return "";}; 
    int distanceTravelled(int AvgSpeed, int time){return AvgSpeed*time;};
    int maxSpeed(){return 0;};
}
class Car extends Vehicle{
    String make, model, fuelType;
    int year;
    Car(String make,String model,String fuelType, int year){
        this.make=make;
        this.model=model;
        this.fuelType=fuelType;
        this.year=year;
    }
    @Override
    String fuelEfficiency() {
        return "33%";
    }
    
    @Override
    int distanceTravelled(int AvgSpeed, int time) {
        return super.distanceTravelled(AvgSpeed, time);
    }

    @Override
    int maxSpeed() {
        return 80;
    }


}
class MotorCycle extends Vehicle{
    String make, model, fuelType;
    int year;
    MotorCycle(String make,String model,String fuelType, int year){
        this.make=make;
        this.model=model;
        this.fuelType=fuelType;
        this.year=year;
    }
    
    @Override
    String fuelEfficiency() {
        return "45%";
    }
    
    @Override
    int distanceTravelled(int AvgSpeed, int time) {
        return super.distanceTravelled(AvgSpeed, time);
    }

    @Override
    int maxSpeed() {
        return 120;
    }

}
class Truck extends Vehicle{
    String make, model, fuelType;
    int year;
    Truck(String make,String model,String fuelType, int year){
        this.make=make;
        this.model=model;
        this.fuelType=fuelType;
        this.year=year;
    }

    @Override
    String fuelEfficiency() {
        return "29%";
    }
    
    @Override
    int distanceTravelled(int AvgSpeed, int time) {
        return super.distanceTravelled(AvgSpeed, time);
    }

    @Override
    int maxSpeed() {
        return 67;
    }
}
public class Q19 {
    public static void main(String[] args) {
        Car car = new Car("Hundai", "Mirai", "Hybrid", 2020);
        System.out.println("Car details:");
        System.out.printf("Make=%s \nModel=%s \nFuel type=%s \nManufacturing year=%d\n",car.make,car.model,car.fuelType,car.year);
        System.out.printf("Fuel Efficiency=%s \nMax Speed=%s\n\n",car.fuelEfficiency(),car.maxSpeed());


        MotorCycle bike = new MotorCycle("TVS", "Juppiter", "Petrol", 2017);
        System.out.println("Bike details:");
        System.out.printf("Make=%s \nModel=%s \nFuel type=%s \nManufacturing year=%d\n",bike.make,bike.model,bike.fuelType,bike.year);
        System.out.printf("Fuel Efficiency=%s \nMax Speed=%s\n\n",bike.fuelEfficiency(),bike.maxSpeed());


        Truck truck = new Truck("Tesla", "Semi", "Electric", 2019);
        System.out.println("Truck details:");
        System.out.printf("Make=%s \nModel=%s \nFuel type=%s \nManufacturing year=%d\n",truck.make,truck.model,truck.fuelType,truck
        .year);
        System.out.printf("Fuel Efficiency=%s \nMax Speed=%s\n\n",truck.fuelEfficiency(),truck.maxSpeed());
    }
}
