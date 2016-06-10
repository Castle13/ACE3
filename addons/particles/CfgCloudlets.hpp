class CfgCloudlets {
    class Default;
    class ACE_SmokeBaseLarge: Default {
        colorCoef[] = {"colorR", "colorG", "colorB", "colorA"};
        sizeCoef = 1;
        position[] = {0, 0, 0};
        interval = 0.05;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = QUOTE(PATHTOF(data\smoke.p3d));
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
        animationSpeedCoef = 1;
        randomDirectionPeriod = 1;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0.2;
        randomDirectionIntensityVar = 0;
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -0.6;
        positionVar[] = {0, 0, 0};
        moveVelocityVar[] = {0.25, 0.25, 0.25};
        colorVar[] = {0, 0, 0, 0};
        color[] = {
            {0.8, 0.8, 0.8, 1},
            {0.8, 0.8, 0.8, 0.7},
            {0.8, 0.8, 0.8, 0.5},
            {0.8, 0.8, 0.8, 0.5},
            {0.8, 0.8, 0.8, 0.1},
            {0.8, 0.8, 0.8, 0}
        };
        size[] = {0.05, 7, 15, 20};
        sizeVar = 0.5;
        weight = 1.2777;
        moveVelocity[] = {5, 0, 0};
        rotationVelocity = 0;
        rotationVelocityVar = 20;
        volume = 1;
        rubbing = 0.1;
        onTimerScript = "";
        beforeDestroyScript = "";
    };
    class ACE_SmokeBaseSmall: ACE_SmokeBaseLarge {
        interval = 0.05;
        size[] = {0.05, 5, 7.5, 10};
    };
    class ACE_SmokeJet: ACE_SmokeBaseLarge {
        interval = 0.01;
        lifeTime = 2;
        lifeTimeVar = 0;
        size[] = {0.3, 1};
        sizeVar = 0.5;
    };
};
