var SerialPort = require("serialport").SerialPort;
var serialport = new SerialPort("/dev/ttyACM0");

serialport.on('open', function(){
  console.log('Conectado');

  serialport.on('data', function(data){
      var temp = parseInt(data, 10);
      console.log(temp);
      serialport.write("p");

  });
});