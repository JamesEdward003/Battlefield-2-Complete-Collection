
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/land/dirtbike/Animations/3p/3p_dirtbike_passenger_seat_die.baf
animationSystem.createAnimation Objects/Vehicles/land/dirtbike/Animations/3p/3p_dirtbike_passenger_seat.baf

rem *** Bundles ***
animationSystem.createBundle die
animationBundle.isLooping 0
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0
animationBundle.playForever 1
animationBundle.addAnimation Objects/Vehicles/land/dirtbike/Animations/3p/3p_dirtbike_passenger_seat_die.baf

animationSystem.createBundle still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/land/dirtbike/Animations/3p/3p_dirtbike_passenger_seat.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger root
animationTrigger.addBundle still

animationSystem.createTrigger Trigger die
animationTrigger.addBundle die

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild die
