//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"

// duas Variaveis definidas depois
Character*     character;
CCPhysicsNode* physicsNode;

typedef NS_ENUM(NSInteger, DrawingOrder) {
    DrawingOrderPipes,
    DrawingOrderGround,
    DrawingOrderHero
};

@interface GamePlayScene : CCNode <CCPhysicsCollisionDelegate>
{
    // define variables here;
}

-(void) initialize;
-(void) addObstacle;
-(void) showScore;

@end
