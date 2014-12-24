#ifndef ST_EVERYTHING_H
#define ST_EVERYTHING_H

#include "Arduino.h"
#include "Constants.h"
#include "Sensor.h"
#include "Executor.h"

namespace st
{

	class Everything
	{
		private:
			Sensor* m_Sensors[10];//Constants::MAX_SENSOR_COUNT];
			unsigned int m_nSensorCount;
			
			Executor* m_Executors[10];//Constants::MAX_EXECUTOR_COUNT];
			unsigned int m_nExecutorCount;
		
			void updateSensors(); //simply calls update on all the sensors
		
		public:
			//constructor
			Everything();
			
			//destructor
			~Everything();
			
			
			void init();
			void run();
			
			void sendSmartString(const String &str);
			Device* getDeviceByName(const String &str);
			
			
			bool addSensor(Sensor *sensor);
			bool addExecutor(Executor *executor);
		
		
	};

}



#endif