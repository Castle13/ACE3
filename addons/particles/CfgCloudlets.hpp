class CfgCloudlets {
    class Default;
    class ACE_SmokeBaseLarge: Default {
        animationSpeedCoef = 1;
        sizeCoef = 1;
        position[] = {0, 0, 0};
        interval = 0.05;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\smoke";
        particleFSNtieth = 1;
        particleFSIndex = 0;
        particleFSFrameCount = 1;
        particleFSLoop = 0;
        angleVar = 0.1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 30;
        lifeTimeVar = 2;
        animationSpeed[] = {1};
        randomDirectionPeriod = 1;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0.2;
        randomDirectionIntensityVar = 0;
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -0.6;
        positionVar[] = {0, 0, 0};
        MoveVelocityVar[] = {0.25, 0.25, 0.25};
        colorVar[] = {0, 0, 0, 0};
        color[] = {
            {0.5, 0.5, 0.5, 1},
            {0.8, 0.8, 0.8, 1},
            {0.8, 0.8, 0.8, 0.75},
            {0.8, 0.8, 0.8, 0.5},
            {0.8, 0.8, 0.8, 0.15},
            {0.8, 0.8, 0.8, 0}
        };
        size[] = {0.3, 5, 10, 20};
        sizeVar = 0.5;
        weight = 12.75;
        moveVelocity[] = {5, 0, 0};
        rotationVelocity = 0;
        rotationVelocityVar = 20;
        volume = 10;
        rubbing = 5;
        onTimerScript = "";
        beforeDestroyScript = "";
    };
    class ACE_SmokeBaseSmall: ACE_SmokeBaseLarge {
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 12;
        particleFSFrameCount = 8;
        particleFSLoop = 0;
        interval = 0.01;
        size[] = {0.3, 5, 10, 10};
    };
    class ACE_SmokeJet: ACE_SmokeBaseLarge {
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 12;
        particleFSFrameCount = 8;
        particleFSLoop = 0;
        interval = 0.01;
        lifeTime = 2;
        lifeTimeVar = 0;
        size[] = {0.3, 1};
        sizeVar = 0.5;
    };
};
