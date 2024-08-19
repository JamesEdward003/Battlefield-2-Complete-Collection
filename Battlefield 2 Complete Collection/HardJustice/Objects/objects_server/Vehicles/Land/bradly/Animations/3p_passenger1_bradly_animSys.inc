
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/Land/bradly/animations/3p/3p_bradlypass1.baf

rem *** Bundles ***
animationSystem.createBundle still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/Land/bradly/animations/3p/3p_bradlypass1.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger root
animationTrigger.addBundle still

