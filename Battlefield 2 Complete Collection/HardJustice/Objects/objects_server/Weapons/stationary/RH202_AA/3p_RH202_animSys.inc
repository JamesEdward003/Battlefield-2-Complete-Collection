beginrem
rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/stationary/RH202_AA/animations/3p/3p_RH202.baf
animationSystem.createAnimation Objects/Weapons/Stationary/Igla_Djigit/Animations/3p/3p_igla_djigit_die.baf

rem *** Bundles ***
animationSystem.createBundle still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/stationary/RH202_AA/animations/3p/3p_RH202.baf

animationSystem.createBundle die
animationBundle.fadeInTime 0.4
animationBundle.isLooping 0
animationBundle.playForever 1
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/Common/Animations/3p/3p_aircraftPilot_A_die.baf

rem *** Triggers ***
animationSystem.createTrigger Trigger root
animationTrigger.addBundle still

animationSystem.createTrigger Trigger die
animationTrigger.addBundle die

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild die
endrem

rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/stationary/RH202_AA/animations/3p/3p_RH202_sit.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/stationary/RH202_AA/animations/3p/3p_RH202_stand.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Stationary/Igla_Djigit/Animations/3p/3p_igla_djigit_die.baf
animationManager.looping 0

rem *** Bundles ***
animationSystem.createBundle lookAround
animationBundle.isLooping 0
animationBundle.fadeInTime 0.2
animationBundle.fadeOutTime 0.2
animationBundle.useSpeedAsTime 1
animationBundle.addAnimation Objects/Weapons/stationary/RH202_AA/animations/3p/3p_RH202_stand.baf
animationBundle.addAnimation Objects/Weapons/stationary/RH202_AA/animations/3p/3p_RH202_sit.baf

animationSystem.createBundle die
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Stationary/Igla_Djigit/Animations/3p/3p_igla_djigit_die.baf

rem *** Triggers ***
animationSystem.createTrigger LookAroundTrigger root
animationTrigger.addBundle lookAround
animationTrigger.valueHolder 3p_turnRight

animationSystem.createTrigger Trigger die
animationTrigger.addBundle die

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild die