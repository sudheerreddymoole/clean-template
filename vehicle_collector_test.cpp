#include <gtest/gtest.h>
#include <vehicle_collector.h>

TEST(COLLECT,When_Vehicle_GetsAllInputs)
{
    telematics ReceivedData
    {
        .vehicle_id = 103,
        .type = motor_temp,
        .measurement = 30
    };
    inventory StoredData;
    StoredData = GetTelematics(ReceivedData);
    ASSERT(StoredData.vehicle_id,ReceivedData.vehicle_id);
}



int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
